
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct rdma_sq_common_wqe {int dummy; } ;
struct TYPE_3__ {int pbl; } ;
struct qlnxr_qp {TYPE_1__ sq; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_send_wr {int num_sge; TYPE_2__* sg_list; } ;
typedef int qlnx_host_t ;
struct TYPE_4__ {scalar_t__ length; scalar_t__ addr; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static u32
FUNC_6(struct qlnxr_dev *VAR_1,
 struct qlnxr_qp *VAR_2,
 u8 *VAR_3,
 struct ib_send_wr *VAR_4,
 struct ib_send_wr **VAR_5,
 u8 *VAR_6,
 u8 VAR_7)
{
 int VAR_8, VAR_9;
 char *VAR_10, *VAR_11;
 u32 VAR_12 = FUNC_4(VAR_4->sg_list, VAR_4->num_sge);
 qlnx_host_t *VAR_13;

 VAR_13 = VAR_1->ha;

 FUNC_1(VAR_13, "enter[%d]\n", VAR_12);

 if (VAR_12 > VAR_0) {
  FUNC_1(VAR_13,
   "Too much inline data in WR:[%d, %d]\n",
   VAR_12, VAR_0);
  *VAR_5 = VAR_4;
  return 0;
 }

 if (!VAR_12)
  return VAR_12;


 *VAR_6 |= VAR_7;

 VAR_10 = VAR_11 = ((void*)0);
 VAR_9 = 0;


 for (VAR_8 = 0; VAR_8 < VAR_4->num_sge; VAR_8++) {
  u32 VAR_14 = VAR_4->sg_list[VAR_8].length;
  void *VAR_15 = (void *)(uintptr_t)VAR_4->sg_list[VAR_8].addr;

  while (VAR_14 > 0) {
   u32 VAR_16;


   if (!VAR_9) {
    VAR_11 = (char *)FUNC_2(&VAR_2->sq.pbl);
    VAR_10 = VAR_11;
    VAR_9 = sizeof(struct rdma_sq_common_wqe);
    (*VAR_3)++;
   }


   VAR_16 = FUNC_0(VAR_14, VAR_9);

   FUNC_3(VAR_10, VAR_15, VAR_16);


   VAR_10 += VAR_16;
   VAR_9 -= VAR_16;

   VAR_15 += VAR_16;
   VAR_14 -= VAR_16;


   if (!VAR_9)
    FUNC_5((u64 *)VAR_11);
  }
 }


 if (VAR_9)
  FUNC_5((u64 *)VAR_11);

 FUNC_1(VAR_13, "exit\n");
 return VAR_12;
}
