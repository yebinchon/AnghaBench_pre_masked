
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct ecore_hwfn*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*) ;
 int VAR_4 ;

u16 FUNC_5(struct ecore_hwfn *VAR_5)
{
 u16 VAR_6, VAR_7 = FUNC_4(VAR_5);


 VAR_6 = (u16)FUNC_2(VAR_4, FUNC_3(VAR_5, VAR_0),
         (u16)FUNC_2(VAR_4, FUNC_3(VAR_5, VAR_1),
           VAR_3));


 if (VAR_6 < VAR_7 + VAR_2) {
  if (FUNC_1(VAR_5))
   FUNC_0(VAR_5, 0, "no rate limiters left for PF rate limiting [num_pf_rls %d num_vfs %d]\n", VAR_6, VAR_7);
  return 0;
 }


 VAR_6 -= VAR_7 + VAR_2;

 return VAR_6;
}
