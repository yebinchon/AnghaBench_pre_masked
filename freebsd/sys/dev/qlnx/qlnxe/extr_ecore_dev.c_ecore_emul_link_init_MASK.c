
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_0,
     struct ecore_ptt *VAR_1)
{
 if (FUNC_0(VAR_0->p_dev) || FUNC_1(VAR_0->p_dev))
  FUNC_2(VAR_0, VAR_1);
 else
  FUNC_3(VAR_0, VAR_1);

 return;
}
