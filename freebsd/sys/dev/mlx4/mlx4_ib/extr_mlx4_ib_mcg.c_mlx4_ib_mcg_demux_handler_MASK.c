
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct mlx4_ib_demux_ctx* demux; } ;
struct mlx4_ib_dev {TYPE_1__ sriov; } ;
struct mlx4_ib_demux_ctx {int mcg_wq; int mcg_table_lock; } ;
struct TYPE_4__ {int method; int tid; } ;
struct ib_sa_mad {TYPE_2__ mad_hdr; scalar_t__ data; } ;
struct mcast_group {int lock; int refcount; int work; int state; int prev_state; struct ib_sa_mad response_sa_mad; } ;
struct ib_sa_mcmember_data {int mgid; } ;
struct ib_device {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;






 int FUNC_0 (struct mcast_group*) ;
 int VAR_1 ;
 struct mcast_group* FUNC_1 (struct mlx4_ib_demux_ctx*,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mcast_group*,int ) ;
 int FUNC_8 (int *) ;
 struct mcast_group* FUNC_9 (struct mlx4_ib_demux_ctx*,int ,int *) ;
 struct mlx4_ib_dev* FUNC_10 (struct ib_device*) ;

int FUNC_11(struct ib_device *VAR_2, int VAR_3, int VAR_4,
         struct ib_sa_mad *VAR_5)
{
 struct mlx4_ib_dev *VAR_6 = FUNC_10(VAR_2);
 struct ib_sa_mcmember_data *VAR_7 = (struct ib_sa_mcmember_data *)VAR_5->data;
 struct mlx4_ib_demux_ctx *VAR_8 = &VAR_6->sriov.demux[VAR_3 - 1];
 struct mcast_group *VAR_9;

 switch (VAR_5->mad_hdr.method) {
 case 133:
 case 130:
  FUNC_4(&VAR_8->mcg_table_lock);
  VAR_9 = FUNC_1(VAR_8, &VAR_7->mgid, 0, VAR_0);
  FUNC_5(&VAR_8->mcg_table_lock);
  if (FUNC_0(VAR_9)) {
   if (VAR_5->mad_hdr.method == 133) {
    __be64 VAR_10 = VAR_5->mad_hdr.tid;
    *(u8 *)(&VAR_10) = (u8)VAR_4;
    VAR_9 = FUNC_9(VAR_8, VAR_10, &VAR_7->mgid);
   } else
    VAR_9 = ((void*)0);
  }

  if (!VAR_9)
   return 1;

  FUNC_4(&VAR_9->lock);
  VAR_9->response_sa_mad = *VAR_5;
  VAR_9->prev_state = VAR_9->state;
  VAR_9->state = VAR_1;

  FUNC_2(&VAR_9->refcount);
  if (!FUNC_6(VAR_8->mcg_wq, &VAR_9->work))
   FUNC_8(&VAR_9->refcount);
  FUNC_5(&VAR_9->lock);
  FUNC_7(VAR_9, 0);
  return 1;
 case 132:
 case 129:
 case 128:
 case 131:
  return 0;
 default:
  FUNC_3("In demux, port %d: unexpected MCMember method: 0x%x, dropping\n",
   VAR_3, VAR_5->mad_hdr.method);
  return 1;
 }
}
