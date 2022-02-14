
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ecore_gid {int dummy; } ecore_gid ;
typedef size_t u32 ;
struct TYPE_4__ {int * dwords; int ipv4_addr; } ;
struct TYPE_3__ {int * dwords; int ipv4_addr; } ;
struct ecore_rdma_qp {scalar_t__ roce_mode; TYPE_2__ dgid; TYPE_1__ sgid; } ;
typedef int __le32 ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ecore_rdma_qp *VAR_1, __le32 *VAR_2,
     __le32 *VAR_3) {
 u32 VAR_4;

 if (VAR_1->roce_mode == VAR_0) {



  FUNC_2(VAR_2, 0, sizeof(union ecore_gid));
  FUNC_2(VAR_3, 0, sizeof(union ecore_gid));
  VAR_2[3] = FUNC_1(VAR_1->sgid.ipv4_addr);
  VAR_3[3] = FUNC_1(VAR_1->dgid.ipv4_addr);
 } else {



  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->sgid.dwords); VAR_4++) {
   VAR_2[VAR_4] = FUNC_1(VAR_1->sgid.dwords[VAR_4]);
   VAR_3[VAR_4] = FUNC_1(VAR_1->dgid.dwords[VAR_4]);
  }
 }
}
