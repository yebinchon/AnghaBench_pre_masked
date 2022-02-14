
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,size_t) ;
 int * FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(u_int8_t *VAR_2, u_int8_t *VAR_3,
    u_char **VAR_4, size_t *VAR_5, u_char *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 *VAR_2 = VAR_1;
 *VAR_3 = VAR_0;

 if (VAR_7 >= 2) {
  *VAR_2 = VAR_6[0];
  *VAR_3 = VAR_6[1];
  *VAR_5 = VAR_7 - 2;

  if (*VAR_5 > 0) {
   *VAR_4 = FUNC_1(*VAR_5);
   FUNC_0(*VAR_4, VAR_6 + 2, *VAR_5);
  } else {
   *VAR_4 = (u_char *)FUNC_2("");
  }

  VAR_8 = 1;
 }

 return VAR_8;
}
