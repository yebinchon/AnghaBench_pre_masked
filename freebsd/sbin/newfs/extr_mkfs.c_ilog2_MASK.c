
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int n ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_2) * VAR_0; VAR_2++)
  if (1 << VAR_2 == VAR_1)
   return (VAR_2);
 FUNC_0(1, "ilog2: %d is not a power of 2\n", VAR_1);
}
