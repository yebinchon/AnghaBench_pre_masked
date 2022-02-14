
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct mlx4_ib_demux_ctx* demux; } ;
struct mlx4_ib_dev {TYPE_1__ sriov; } ;
struct mlx4_ib_demux_ctx {int mcg_table_lock; scalar_t__ flushing; } ;
struct TYPE_6__ {int method; } ;
struct ib_sa_mad {TYPE_3__ mad_hdr; scalar_t__ data; } ;
struct mcast_req {int func; struct mcast_group* group; struct ib_sa_mad sa_mad; } ;
struct mcast_group {int lock; TYPE_2__* func; } ;
struct ib_sa_mcmember_data {int mgid; } ;
struct ib_device {int dummy; } ;
struct TYPE_5__ {int num_pend_reqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (struct mcast_group*) ;
 int VAR_3 ;
 int FUNC_1 (struct mcast_group*) ;
 struct mcast_group* FUNC_2 (struct mlx4_ib_demux_ctx*,int *,int,int ) ;
 int FUNC_3 (struct mcast_req*) ;
 struct mcast_req* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mcast_group*,char*,int,int,int ) ;
 int FUNC_6 (char*,int,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mcast_req*) ;
 int FUNC_10 (struct mcast_group*,int ) ;
 struct mlx4_ib_dev* FUNC_11 (struct ib_device*) ;

int FUNC_12(struct ib_device *VAR_4, int VAR_5,
      int VAR_6, struct ib_sa_mad *VAR_7)
{
 struct mlx4_ib_dev *VAR_8 = FUNC_11(VAR_4);
 struct ib_sa_mcmember_data *VAR_9 = (struct ib_sa_mcmember_data *)VAR_7->data;
 struct mlx4_ib_demux_ctx *VAR_10 = &VAR_8->sriov.demux[VAR_5 - 1];
 struct mcast_group *VAR_11;
 struct mcast_req *VAR_12;
 int VAR_13 = 0;

 if (VAR_10->flushing)
  return -VAR_0;

 switch (VAR_7->mad_hdr.method) {
 case 132:
  VAR_13 = 1;
 case 131:
  VAR_12 = FUNC_4(sizeof *VAR_12, VAR_2);
  if (!VAR_12)
   return -VAR_1;

  VAR_12->func = VAR_6;
  VAR_12->sa_mad = *VAR_7;

  FUNC_7(&VAR_10->mcg_table_lock);
  VAR_11 = FUNC_2(VAR_10, &VAR_9->mgid, VAR_13, VAR_2);
  FUNC_8(&VAR_10->mcg_table_lock);
  if (FUNC_0(VAR_11)) {
   FUNC_3(VAR_12);
   return FUNC_1(VAR_11);
  }
  FUNC_7(&VAR_11->lock);
  if (VAR_11->func[VAR_6].num_pend_reqs > VAR_3) {
   FUNC_8(&VAR_11->lock);
   FUNC_5(VAR_11, "Port %d, Func %d has too many pending requests (%d), dropping\n",
     VAR_5, VAR_6, VAR_3);
   FUNC_10(VAR_11, 0);
   FUNC_3(VAR_12);
   return -VAR_1;
  }
  ++VAR_11->func[VAR_6].num_pend_reqs;
  VAR_12->group = VAR_11;
  FUNC_9(VAR_12);
  FUNC_8(&VAR_11->lock);
  FUNC_10(VAR_11, 0);
  return 1;
 case 129:
 case 133:
 case 128:
 case 130:
  return 0;
 default:
  FUNC_6("In multiplex, port %d, func %d: unexpected MCMember method: 0x%x, dropping\n",
   VAR_5, VAR_6, VAR_7->mad_hdr.method);
  return 1;
 }
}
