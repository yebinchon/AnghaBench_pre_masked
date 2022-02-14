
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namecheck_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int *,char*) ;

int
FUNC_2(const char *VAR_3, namecheck_err_t *VAR_4, char *VAR_5)
{
 if (FUNC_0(VAR_3) >= VAR_2) {
  if (VAR_4)
   *VAR_4 = VAR_1;
  return (-1);
 }

 if (VAR_3[0] != '@') {
  if (VAR_4) {
   *VAR_4 = VAR_0;
   *VAR_5 = VAR_3[0];
  }
  return (-1);
 }

 return (FUNC_1(&VAR_3[1], VAR_4, VAR_5));
}
