
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_3,
        struct ecore_ptt *VAR_4,
        bool VAR_5)
{
 u32 VAR_6 = 0, VAR_7, VAR_8 = VAR_5 ? 1 : 0;


 FUNC_3(VAR_3, VAR_4,
   VAR_2, VAR_8);


 for (VAR_6 = 0; VAR_6 < 20000; VAR_6++) {
  VAR_7 = FUNC_2(VAR_3, VAR_4,
          VAR_2);
  if (VAR_7 == VAR_8)
   break;

  FUNC_1(50);
 }

 if (VAR_7 != VAR_8) {
  FUNC_0(VAR_3, 1,
     "PFID_ENABLE_MASTER wasn't changed after a second\n");
  return VAR_1;
 }

 return VAR_0;
}
