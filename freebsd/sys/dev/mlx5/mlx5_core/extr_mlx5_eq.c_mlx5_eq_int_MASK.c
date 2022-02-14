
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx5_eqe_vport_change {int vport_num; } ;
struct TYPE_13__ {int num_pages; int func_id; } ;
struct TYPE_12__ {scalar_t__ syndrome; int cqn; } ;
struct TYPE_11__ {int port; } ;
struct TYPE_10__ {int vector; } ;
struct TYPE_9__ {int qp_srq_n; } ;
struct TYPE_8__ {int cqn; } ;
struct TYPE_14__ {int raw; struct mlx5_eqe_vport_change vport_change; TYPE_6__ req_pages; TYPE_5__ cq_err; TYPE_4__ port; TYPE_3__ cmd; TYPE_2__ qp_srq; TYPE_1__ comp; } ;
struct mlx5_eqe {int type; TYPE_7__ data; scalar_t__ sub_type; } ;
struct mlx5_eq {int cons_index; scalar_t__ eqn; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int (* event ) (struct mlx5_core_dev*,int ,unsigned long) ;int state; } ;
typedef int s32 ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mlx5_eq*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mlx5_core_dev*,int,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,char*,int,int,...) ;
 int FUNC_7 (struct mlx5_core_dev*,scalar_t__,int) ;
 int FUNC_8 (struct mlx5_core_dev*,char*,int,scalar_t__) ;
 int FUNC_9 (struct mlx5_core_dev*,int) ;
 int FUNC_10 (struct mlx5_core_dev*,int,int) ;
 int FUNC_11 (struct mlx5_core_dev*,int,int *) ;
 int FUNC_12 (struct mlx5_core_dev*,struct mlx5_eqe*) ;
 int FUNC_13 (struct mlx5_core_dev*,struct mlx5_eqe*) ;
 int FUNC_14 (struct mlx5_core_dev*,int,int) ;
 int FUNC_15 (struct mlx5_core_dev*,int,int) ;
 int FUNC_16 (struct mlx5_core_dev*,struct mlx5_eqe*) ;
 struct mlx5_eqe* FUNC_17 (struct mlx5_eq*) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 () ;
 int FUNC_20 (struct mlx5_core_dev*,int ,unsigned long) ;
 int FUNC_21 (struct mlx5_core_dev*,int ,unsigned long) ;
 int FUNC_22 (struct mlx5_core_dev*,int ,unsigned long) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct mlx5_core_dev *VAR_4, struct mlx5_eq *VAR_5)
{
 struct mlx5_eqe *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 u32 VAR_9;
 u32 VAR_10;
 u8 VAR_11;

 while ((VAR_6 = FUNC_17(VAR_5))) {




  FUNC_19();

  FUNC_6(VAR_5->dev, "eqn %d, eqe type %s\n",
         VAR_5->eqn, FUNC_4(VAR_6->type));
  switch (VAR_6->type) {
  case 151:
   VAR_9 = FUNC_1(VAR_6->data.comp.cqn) & 0xffffff;
   FUNC_9(VAR_4, VAR_9);
   break;

  case 145:
  case 152:
  case 142:
  case 140:
  case 136:
  case 144:
  case 135:
  case 137:
   VAR_10 = FUNC_1(VAR_6->data.qp_srq.qp_srq_n) & 0xffffff;
   FUNC_6(VAR_4, "event %s(%d) arrived on resource 0x%x\n",
          FUNC_4(VAR_6->type), VAR_6->type, VAR_10);
   FUNC_14(VAR_4, VAR_10, VAR_6->type);
   break;

  case 139:
  case 141:
   VAR_10 = FUNC_1(VAR_6->data.qp_srq.qp_srq_n) & 0xffffff;
   FUNC_6(VAR_4, "SRQ event %s(%d): srqn 0x%x\n",
          FUNC_4(VAR_6->type), VAR_6->type, VAR_10);
   FUNC_15(VAR_4, VAR_10, VAR_6->type);
   break;

  case 156:
   if (VAR_4->state != VAR_1) {
    FUNC_5(VAR_4, FUNC_1(VAR_6->data.cmd.vector),
        VAR_0);
   }
   break;

  case 143:
   VAR_11 = (VAR_6->data.port.port >> 4) & 0xf;
   switch (VAR_6->sub_type) {
   case 132:
   case 134:
   case 129:
   case 128:
   case 131:
   case 133:
   case 130:
    if (VAR_4->event)
     VAR_4->event(VAR_4, FUNC_18(VAR_6->sub_type),
         (unsigned long)VAR_11);
    break;
   default:
    FUNC_8(VAR_4, "Port event with unrecognized subtype: port %d, sub_type %d\n",
            VAR_11, VAR_6->sub_type);
   }
   break;

  case 155:
   VAR_11 = (VAR_6->data.port.port >> 4) & 0xf;
   switch (VAR_6->sub_type) {
   case 160:
   case 157:
   case 159:
   case 158:
    if (VAR_4->event)
     VAR_4->event(VAR_4,
         FUNC_2(VAR_6->sub_type),
         0);
    break;
   default:
    FUNC_8(VAR_4,
            "dcbx event with unrecognized subtype: port %d, sub_type %d\n",
            VAR_11, VAR_6->sub_type);
   }
   break;

  case 154:
   FUNC_12(VAR_4, VAR_6);
   break;

  case 150:
   VAR_9 = FUNC_1(VAR_6->data.cq_err.cqn) & 0xffffff;
   FUNC_8(VAR_4, "CQ error on CQN 0x%x, syndrom 0x%x\n",
           VAR_9, VAR_6->data.cq_err.syndrome);
   FUNC_10(VAR_4, VAR_9, VAR_6->type);
   break;

  case 146:
   {
    u16 VAR_12 = FUNC_0(VAR_6->data.req_pages.func_id);
    s32 VAR_13 = FUNC_1(VAR_6->data.req_pages.num_pages);

    FUNC_6(VAR_4, "page request for func 0x%x, npages %d\n",
           VAR_12, VAR_13);
    FUNC_7(VAR_4, VAR_12, VAR_13);
   }
   break;

  case 153:
   FUNC_13(VAR_4, VAR_6);
   break;

  case 147:
   {
    struct mlx5_eqe_vport_change *VAR_14 =
      &VAR_6->data.vport_change;
    u16 VAR_15 = FUNC_0(VAR_14->vport_num);

    if (VAR_4->event)
     VAR_4->event(VAR_4,
          VAR_2,
          (unsigned long)VAR_15);
   }
   break;

  case 149:
  case 148:
   FUNC_11(VAR_4, VAR_6->type, &VAR_6->data.raw);
   break;
  case 138:
   FUNC_16(VAR_4, VAR_6);
   break;

  default:
   FUNC_8(VAR_4, "Unhandled event 0x%x on EQ 0x%x\n",
           VAR_6->type, VAR_5->eqn);
   break;
  }

  ++VAR_5->cons_index;
  VAR_7 = 1;
  ++VAR_8;







  if (FUNC_23(VAR_8 >= VAR_3)) {
   FUNC_3(VAR_5, 0);
   VAR_8 = 0;
  }
 }

 FUNC_3(VAR_5, 1);

 return VAR_7;
}
