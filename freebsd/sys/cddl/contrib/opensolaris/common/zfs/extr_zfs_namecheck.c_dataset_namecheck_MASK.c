
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namecheck_err_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *,char*) ;
 int * FUNC_1 (char const*,char) ;

int
FUNC_2(const char *VAR_1, namecheck_err_t *VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_4 == 0 && FUNC_1(VAR_1, '#') != ((void*)0)) {
  if (VAR_2 != ((void*)0)) {
   *VAR_2 = VAR_0;
   *VAR_3 = '#';
  }
  return (-1);
 }

 return (VAR_4);
}
