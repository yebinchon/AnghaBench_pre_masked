
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int p_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_hwfn*,int,int,int) ;

__attribute__((used)) static bool FUNC_4(struct ecore_hwfn *VAR_0, int VAR_1,
           bool VAR_2)
{

 if (FUNC_2(VAR_0->p_dev) || !FUNC_0(VAR_0->p_dev) ||
     !FUNC_1(VAR_0))
  return 0;


 if (!FUNC_3(VAR_0, VAR_1, 1, VAR_2))
  return 0;

 return 1;
}
