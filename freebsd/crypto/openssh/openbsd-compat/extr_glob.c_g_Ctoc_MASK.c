
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int Char ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const Char *VAR_1, char *VAR_2, u_int VAR_3)
{

 while (VAR_3--) {
  if ((*VAR_2++ = *VAR_1++) == VAR_0)
   return (0);
 }
 return (1);
}
