
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,int ) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*) ;

u16 FUNC_3(struct ecore_hwfn *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = FUNC_2(VAR_1);

 if (VAR_2 > VAR_3)
  FUNC_0(VAR_1, "vf %d must be smaller than %d\n", VAR_2, VAR_3);

 return FUNC_1(VAR_1, VAR_0) + VAR_2;
}
