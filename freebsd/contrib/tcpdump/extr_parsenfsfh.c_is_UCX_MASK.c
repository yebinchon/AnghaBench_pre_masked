
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 scalar_t__ FUNC_0 (unsigned char const) ;

__attribute__((used)) static int
FUNC_1(const unsigned char *VAR_0, u_int VAR_1)
{
 register u_int VAR_2;
 int VAR_3 = 0;





 if (VAR_1 < 28/4)
  return(0);

 for (VAR_2 = 1; VAR_2 < 14; VAR_2++) {
     if (FUNC_0(VAR_0[VAR_2])) {
  if (VAR_3)
     return(0);
  else
     continue;
     }
     else if (VAR_0[VAR_2] == 0) {
  VAR_3 = 1;
  continue;
     }
     else
  return(0);
 }

 return(1);
}
