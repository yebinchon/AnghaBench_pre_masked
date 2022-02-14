
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {scalar_t__ recov_in_prog; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_3,
        struct ecore_ptt *VAR_4)
{
 struct ecore_dev *VAR_5 = VAR_3->p_dev;

 if (VAR_5->recov_in_prog) {
  FUNC_0(VAR_3, 0,
     "Avoid triggering a recovery since such a process is already in progress\n");
  return VAR_0;
 }

 FUNC_0(VAR_3, 0, "Triggering a recovery process\n");
 FUNC_1(VAR_3, VAR_4, VAR_2, 0x1);

 return VAR_1;
}
