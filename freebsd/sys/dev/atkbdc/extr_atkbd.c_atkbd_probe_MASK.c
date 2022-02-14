
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_4, void *VAR_5, int VAR_6)
{
 KBDC VAR_7;
 int *VAR_8 = (int *)VAR_5;


 if (VAR_4 == VAR_0) {
  if (FUNC_0(&VAR_3))
   return 0;
 }

 VAR_7 = FUNC_1(VAR_8[0]);
 if (VAR_7 == ((void*)0))
  return VAR_1;
 if (FUNC_2(VAR_7, VAR_6)) {
  if (VAR_6 & VAR_2)
   return VAR_1;
 }
 return 0;
}
