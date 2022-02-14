
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int raw; } ;
struct TYPE_7__ {int raw; } ;
struct TYPE_10__ {int cons; int prod; TYPE_2__ iwarp_db2_data; scalar_t__ iwarp_db2; TYPE_1__ db_data; scalar_t__ db; } ;
struct qlnxr_qp {int state; TYPE_4__ sq; TYPE_4__ rq; int srq; int prev_wqe_size; } ;
struct qlnxr_dev {TYPE_3__* ha; } ;
struct ecore_dev {scalar_t__ doorbells; } ;
struct TYPE_9__ {int pci_dbells; struct ecore_dev cdev; } ;
typedef TYPE_3__ qlnx_host_t ;
typedef enum ecore_roce_qp_state { ____Placeholder_ecore_roce_qp_state } ecore_roce_qp_state ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (TYPE_3__*,char*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct qlnxr_dev *VAR_2,
 struct qlnxr_qp *VAR_3,
 enum ecore_roce_qp_state VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6;
 struct ecore_dev *VAR_7;
 qlnx_host_t *VAR_8;

 VAR_8 = VAR_2->ha;
 VAR_7 = &VAR_8->cdev;

 FUNC_2(VAR_8, "enter qp = %p new_state = 0x%x qp->state = 0x%x\n",
  VAR_3, VAR_4, VAR_3->state);

 if (VAR_4 == VAR_3->state) {
  return 0;
 }

 switch (VAR_3->state) {
 case 131:
  switch (VAR_4) {
  case 132:
   VAR_3->prev_wqe_size = 0;
   FUNC_6(&VAR_3->sq);
   if (!(VAR_3->srq))
    FUNC_6(&VAR_3->rq);
   break;
  default:
   VAR_5 = -VAR_1;
   break;
  };
  break;
 case 132:

  switch (VAR_4) {
  case 130:

   if (VAR_3->srq)
    break;
   FUNC_7();





   VAR_6 = (uint32_t)((uint8_t *)VAR_3->rq.db -
     (uint8_t *)VAR_7->doorbells);

   FUNC_4(VAR_8->pci_dbells, VAR_6, VAR_3->rq.db_data.raw);
   FUNC_3(VAR_8->pci_dbells, 0, 0, VAR_0);

   if (FUNC_0(VAR_2)) {
    VAR_6 = (uint32_t)((uint8_t *)VAR_3->rq.iwarp_db2 -
     (uint8_t *)VAR_7->doorbells);
    FUNC_4(VAR_8->pci_dbells, VAR_6, VAR_3->rq.iwarp_db2_data.raw);

    FUNC_3(VAR_8->pci_dbells, 0, 0, VAR_0);

   }


   FUNC_5();
   break;
  case 133:

   break;
  default:

   VAR_5 = -VAR_1;
   break;
  };
  break;
 case 130:

  switch (VAR_4) {
  case 129:
   break;
  case 133:
   break;
  default:

   VAR_5 = -VAR_1;
   break;
  };
  break;
 case 129:

  switch (VAR_4) {
  case 128:
   break;
  case 133:
   break;
  default:

   VAR_5 = -VAR_1;
   break;
  };
  break;
 case 128:

  switch (VAR_4) {
  case 129:
  case 133:
   break;
  default:

   VAR_5 = -VAR_1;
   break;
  };
  break;
 case 133:

  switch (VAR_4) {
  case 131:
   if ((VAR_3->rq.prod != VAR_3->rq.cons) ||
       (VAR_3->sq.prod != VAR_3->sq.cons)) {
    FUNC_1(VAR_8,
     "Error->Reset with rq/sq "
     "not empty rq.prod=0x%x rq.cons=0x%x"
     " sq.prod=0x%x sq.cons=0x%x\n",
     VAR_3->rq.prod, VAR_3->rq.cons,
     VAR_3->sq.prod, VAR_3->sq.cons);
    VAR_5 = -VAR_1;
   }
   break;
  default:
   VAR_5 = -VAR_1;
   break;
  };
  break;
 default:
  VAR_5 = -VAR_1;
  break;
 };

 FUNC_2(VAR_8, "exit\n");
 return VAR_5;
}
