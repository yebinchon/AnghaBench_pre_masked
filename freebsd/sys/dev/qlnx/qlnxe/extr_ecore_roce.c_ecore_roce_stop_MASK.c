
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct ecore_bmap {int max_count; int bitmap; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {struct ecore_bmap cid_map; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct ecore_hwfn*,int ) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_2)
{
 struct ecore_bmap *VAR_3 = &VAR_2->p_rdma_info->cid_map;
 int VAR_4 = 0;







 while (FUNC_1(VAR_3->bitmap, VAR_3->max_count)) {
  FUNC_2(100);
  if (VAR_4++ > 20) {
   FUNC_0(VAR_2, 0,
      "cid bitmap wait timed out\n");
   break;
  }
 }

 FUNC_3(VAR_2, VAR_1);

 return VAR_0;
}
