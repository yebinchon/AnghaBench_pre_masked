
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
 while (VAR_0 + VAR_3 > VAR_1) {
  if (VAR_1 == 0)
   VAR_1 = 2048;
  VAR_2 = FUNC_2(VAR_2, VAR_1 *= 2);
  if (VAR_2 == ((void*)0))
   { FUNC_1("fixdep:malloc"); FUNC_0(1); }
 }
}
