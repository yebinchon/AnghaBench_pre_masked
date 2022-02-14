
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int b_rdma_enabled_in_prs; int p_dev; int rdma_prs_search_reg; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct ecore_hwfn*,int ) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_9(
 struct ecore_hwfn *VAR_8,
 struct ecore_ptt *VAR_9)
{
 u32 VAR_10;

 FUNC_1(VAR_8, VAR_0, "Initializing HW\n");
 VAR_8->b_rdma_enabled_in_prs = 0;

 if (FUNC_4(VAR_8))
  return FUNC_6(VAR_8, VAR_9);

 FUNC_8(VAR_8,
   VAR_9,
   VAR_6,
   0);

 VAR_8->rdma_prs_search_reg = VAR_7;





 VAR_10 = FUNC_7(VAR_8,
        VAR_9,
        VAR_5);
 FUNC_8(VAR_8, VAR_9, VAR_5,
   (VAR_10 | 0x01));


 if (FUNC_2(VAR_8->p_dev) && FUNC_3(VAR_8->p_dev)) {
  FUNC_8(VAR_8,
    VAR_9,
    VAR_3,
    0);
  FUNC_8(VAR_8,
    VAR_9,
    VAR_3 + 4,
    0);
 }


 if (FUNC_5(VAR_8, VAR_4) % 2)
 {
  FUNC_0(VAR_8,
     1,
     "The first RoCE's cid should be even\n");
  return VAR_2;
 }

 FUNC_1(VAR_8, VAR_0, "Initializing HW - Done\n");
 return VAR_1;
}
