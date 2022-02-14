
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_ptt* p_main_ptt; } ;
struct ecore_dev {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 struct ecore_hwfn* FUNC_1 (struct ecore_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int) ;

enum _ecore_status_t FUNC_4(struct ecore_dev *VAR_2)
{
 struct ecore_hwfn *VAR_3 = FUNC_1(VAR_2);
 struct ecore_ptt *VAR_4 = VAR_3->p_main_ptt;
 enum _ecore_status_t VAR_5;


 FUNC_2(VAR_0);


 VAR_5 = FUNC_3(VAR_3, VAR_4, 0);
 if (VAR_5 != VAR_1)
  FUNC_0(VAR_3, 0,
     "ecore_pglueb_set_pfid_enable() failed. rc = %d.\n",
     VAR_5);

 return VAR_5;
}
