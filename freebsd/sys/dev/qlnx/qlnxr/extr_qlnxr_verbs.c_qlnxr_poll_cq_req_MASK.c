
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cqe_requester {int status; int sq_cons; } ;
struct qlnxr_qp {int state; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_cq {int dummy; } ;
struct ib_wc {int dummy; } ;
typedef int qlnx_host_t ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct qlnxr_dev*,struct qlnxr_qp*,struct qlnxr_cq*,int,struct ib_wc*,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct qlnxr_dev *VAR_14,
 struct qlnxr_qp *VAR_15,
 struct qlnxr_cq *VAR_16,
 int VAR_17,
 struct ib_wc *VAR_18,
 struct rdma_cqe_requester *VAR_19)
{
 int VAR_20 = 0;
 qlnx_host_t *VAR_21 = VAR_14->ha;

 FUNC_0(VAR_21, "enter req->status = 0x%x\n", VAR_19->status);

 switch (VAR_19->status) {

 case 134:

  VAR_20 = FUNC_1(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19->sq_cons,
   VAR_12, 0);
  break;

 case 128:

  if (VAR_15->state != VAR_0)
  VAR_20 = FUNC_1(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19->sq_cons,
      VAR_13, 1);
  break;

 default:


  VAR_15->state = VAR_0;
  VAR_20 = FUNC_1(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
    VAR_19->sq_cons - 1, VAR_12, 0);
  VAR_18 += VAR_20;


  if (VAR_20 < VAR_17) {
   enum ib_wc_status VAR_22;

   switch (VAR_19->status) {
   case 139:
    VAR_22 = VAR_1;
    break;
   case 138:
    VAR_22 = VAR_3;
    break;
   case 136:
    VAR_22 = VAR_5;
    break;
   case 137:
    VAR_22 = VAR_4;
    break;
   case 135:
    VAR_22 = VAR_6;
    break;
   case 132:
    VAR_22 = VAR_8;
    break;
   case 133:
    VAR_22 = VAR_7;
    break;
   case 131:
    VAR_22 = VAR_9;
    break;
   case 130:
    VAR_22 = VAR_11;
    break;
   case 129:
    VAR_22 = VAR_10;
    break;
   default:
    VAR_22 = VAR_2;
   }

   VAR_20 += FUNC_1(VAR_14, VAR_15, VAR_16, 1, VAR_18, VAR_19->sq_cons,
     VAR_22, 1 );
  }
 }

 FUNC_0(VAR_21, "exit cnt = %d\n", VAR_20);
 return VAR_20;
}
