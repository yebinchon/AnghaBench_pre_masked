
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct regpair {int lo; scalar_t__ hi; } ;
struct ib_qp {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct qlnxr_qp {struct ib_qp ibqp; int sig; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_cq {int cq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct qlnxr_cq {struct ib_cq ibcq; int sig; } ;
struct TYPE_2__ {struct ib_qp* qp; struct ib_cq* cq; } ;
struct ib_event {TYPE_1__ element; int device; void* event; } ;
typedef int qlnx_host_t ;





 int VAR_0 ;

 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,char*,...) ;





 int FUNC_3 (struct ib_event*,int ) ;
 int FUNC_4 (struct ib_event*,int ) ;

void
FUNC_5(void *VAR_8, u8 VAR_9, void *VAR_10)
{





        struct qlnxr_dev *VAR_11 = (struct qlnxr_dev *)VAR_8;
        struct regpair *VAR_12 = (struct regpair *)VAR_10;
        u64 VAR_13 = ((u64)VAR_12->hi << 32) + VAR_12->lo;
        struct qlnxr_cq *VAR_14 = (struct qlnxr_cq *)(uintptr_t)VAR_13;
        struct qlnxr_qp *VAR_15 = (struct qlnxr_qp *)(uintptr_t)VAR_13;
        u8 VAR_16 = 0;
        struct ib_event VAR_17;
 qlnx_host_t *VAR_18;

 VAR_18 = VAR_11->ha;

 FUNC_2(VAR_18, "enter context = %p e_code = 0x%x fw_handle = %p\n",
  VAR_8, VAR_9, VAR_10);

        if (FUNC_0(VAR_11)) {
  switch (VAR_9) {

  case 136:
   VAR_17.event = VAR_1;
   VAR_16 = 1;
   break;

  default:
   FUNC_2(VAR_18,
    "unsupported event %d on handle=%llx\n",
    VAR_9, VAR_13);
   break;
  }
        } else {
  switch (VAR_9) {

  case 132:
   VAR_17.event = VAR_1;
   VAR_16 = 1;
   break;

  case 128:
   VAR_17.event = VAR_5;
   VAR_16 = 2;
   break;

  case 129:
   VAR_17.event = VAR_3;
   VAR_16 = 2;
   break;

  case 130:
   VAR_17.event = VAR_4;
   VAR_16 = 2;
   break;

  case 131:
   VAR_17.event = VAR_2;
   VAR_16 = 2;
   break;
  default:
   FUNC_2(VAR_18,
    "unsupported event 0x%x on fw_handle = %p\n",
    VAR_9, VAR_10);
   break;
  }
 }

        switch (VAR_16) {

        case 1:
                if (VAR_14 && VAR_14->sig == VAR_6) {
                        struct ib_cq *VAR_19 = &VAR_14->ibcq;

                        if (VAR_19->event_handler) {
                                VAR_17.device = VAR_19->device;
                                VAR_17.element.cq = VAR_19;
                                VAR_19->event_handler(&VAR_17, VAR_19->cq_context);
                        }
                } else {
   FUNC_1(VAR_18,
    "CQ event with invalid CQ pointer"
    " Handle = %llx\n", VAR_13);
                }
  FUNC_2(VAR_18,
   "CQ event 0x%x on handle = %p\n", VAR_9, VAR_14);
                break;

        case 2:
                if (VAR_15 && VAR_15->sig == VAR_7) {
                        struct ib_qp *VAR_20 = &VAR_15->ibqp;

                        if (VAR_20->event_handler) {
                                VAR_17.device = VAR_20->device;
                                VAR_17.element.qp = VAR_20;
                                VAR_20->event_handler(&VAR_17, VAR_20->qp_context);
                        }
                } else {
   FUNC_1(VAR_18,
    "QP event 0x%x with invalid QP pointer"
    " qp handle = %p\n",
    VAR_9, VAR_13);
                }
  FUNC_2(VAR_18, "QP event 0x%x on qp handle = %p\n",
   VAR_9, VAR_15);
                break;

        case 3:
                break;

        default:
                break;

 }

 FUNC_2(VAR_18, "exit\n");

 return;
}
