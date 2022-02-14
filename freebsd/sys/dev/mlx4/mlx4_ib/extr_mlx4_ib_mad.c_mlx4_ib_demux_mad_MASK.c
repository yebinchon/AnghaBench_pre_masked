
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_ib_dev {TYPE_6__* dev; } ;
struct ib_wc {int wc_flags; TYPE_5__* qp; } ;
struct ib_sa_mad {int dummy; } ;
struct TYPE_12__ {int mgmt_class; int method; int tid; } ;
struct ib_mad {TYPE_3__ mad_hdr; } ;
struct TYPE_10__ {int interface_id; } ;
struct TYPE_11__ {TYPE_1__ global; int raw; } ;
struct ib_grh {TYPE_2__ dgid; } ;
struct ib_device {int dummy; } ;
struct TYPE_13__ {int sqp_demux; } ;
struct TYPE_15__ {TYPE_4__ caps; } ;
struct TYPE_14__ {int qp_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,int,int ,int*) ;
 scalar_t__ FUNC_1 (struct ib_device*,int,int*,struct ib_mad*) ;
 int FUNC_2 (struct ib_device*,int,int,struct ib_sa_mad*) ;
 int FUNC_3 (struct ib_device*,int,int ) ;
 int FUNC_4 (struct mlx4_ib_dev*,int,int,int ,struct ib_wc*,struct ib_grh*,struct ib_mad*) ;
 int FUNC_5 (struct ib_device*,char*,...) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,int,int) ;
 int FUNC_9 (char*,int,int,...) ;
 scalar_t__ FUNC_10 (struct ib_device*,int) ;
 struct mlx4_ib_dev* FUNC_11 (struct ib_device*) ;

__attribute__((used)) static int FUNC_12(struct ib_device *VAR_7, u8 VAR_8,
   struct ib_wc *VAR_9, struct ib_grh *VAR_10,
   struct ib_mad *VAR_11)
{
 struct mlx4_ib_dev *VAR_12 = FUNC_11(VAR_7);
 int VAR_13, VAR_14;
 int VAR_15 = -1;
 u8 *VAR_16;
 int VAR_17 = 0;

 if (FUNC_10(VAR_7, VAR_8) == VAR_3)
  VAR_17 = 0;
 else
  VAR_17 = 1;

 if (VAR_17) {
  if (!(VAR_9->wc_flags & VAR_6)) {
   FUNC_5(VAR_7, "RoCE grh not present.\n");
   return -VAR_0;
  }
  if (VAR_11->mad_hdr.mgmt_class != 132) {
   FUNC_5(VAR_7, "RoCE mgmt class is not CM\n");
   return -VAR_0;
  }
  VAR_13 = FUNC_0(VAR_12->dev, VAR_8, VAR_10->dgid.raw, &VAR_15);
  if (VAR_13 && FUNC_6(VAR_12->dev)) {
   VAR_14 = (VAR_8 == 1) ? 2 : 1;
   VAR_13 = FUNC_0(VAR_12->dev, VAR_14, VAR_10->dgid.raw, &VAR_15);
   if (!VAR_13) {
    VAR_8 = VAR_14;
    FUNC_9("resolved slave %d from gid %pI6 wire port %d other %d\n",
      VAR_15, VAR_10->dgid.raw, VAR_8, VAR_14);
   }
  }
  if (VAR_13) {
   FUNC_5(VAR_7, "failed matching grh\n");
   return -VAR_1;
  }
  if (VAR_15 >= VAR_12->dev->caps.sqp_demux) {
   FUNC_5(VAR_7, "slave id: %d is bigger than allowed:%d\n",
         VAR_15, VAR_12->dev->caps.sqp_demux);
   return -VAR_1;
  }

  if (FUNC_1(VAR_7, VAR_8, ((void*)0), VAR_11))
   return 0;

  VAR_13 = FUNC_4(VAR_12, VAR_15, VAR_8, VAR_9->qp->qp_type, VAR_9, VAR_10, VAR_11);
  if (VAR_13)
   FUNC_9("failed sending to slave %d via tunnel qp (%d)\n",
     VAR_15, VAR_13);
  return 0;
 }


 VAR_15 = FUNC_7(VAR_12->dev);


 if (VAR_11->mad_hdr.method & 0x80) {
  VAR_16 = (u8 *) &VAR_11->mad_hdr.tid;
  VAR_15 = *VAR_16;
  if (VAR_15 != 255)
   *VAR_16 = 0;
 }


 if (VAR_9->wc_flags & VAR_6) {
  VAR_15 = FUNC_3(VAR_7, VAR_8, VAR_10->dgid.global.interface_id);
  if (VAR_15 < 0) {
   FUNC_5(VAR_7, "failed matching grh\n");
   return -VAR_1;
  }
 }

 switch (VAR_11->mad_hdr.mgmt_class) {
 case 128:
 case 129:

  if (VAR_15 != 255 && VAR_15 != FUNC_7(VAR_12->dev)) {
   if (!FUNC_8(VAR_12->dev, VAR_15, VAR_8))
    return -VAR_2;

   if (!(VAR_11->mad_hdr.method & VAR_5)) {
    FUNC_5(VAR_7, "demux QP0. rejecting unsolicited mad for slave %d class 0x%x, method 0x%x\n",
          VAR_15, VAR_11->mad_hdr.mgmt_class,
          VAR_11->mad_hdr.method);
    return -VAR_0;
   }
  }
  break;
 case 130:
  if (FUNC_2(VAR_7, VAR_8, VAR_15,
          (struct ib_sa_mad *) VAR_11))
   return 0;
  break;
 case 132:
  if (FUNC_1(VAR_7, VAR_8, &VAR_15, VAR_11))
   return 0;
  break;
 case 131:
  if (VAR_11->mad_hdr.method != VAR_4)
   return 0;
  break;
 default:

  if (VAR_15 != FUNC_7(VAR_12->dev)) {
   FUNC_9("dropping unsupported ingress mad from class:%d "
     "for slave:%d\n", VAR_11->mad_hdr.mgmt_class, VAR_15);
   return 0;
  }
 }

 if (VAR_15 >= VAR_12->dev->caps.sqp_demux) {
  FUNC_5(VAR_7, "slave id: %d is bigger than allowed:%d\n",
        VAR_15, VAR_12->dev->caps.sqp_demux);
  return -VAR_1;
 }

 VAR_13 = FUNC_4(VAR_12, VAR_15, VAR_8, VAR_9->qp->qp_type, VAR_9, VAR_10, VAR_11);
 if (VAR_13)
  FUNC_9("failed sending to slave %d via tunnel qp (%d)\n",
    VAR_15, VAR_13);
 return 0;
}
