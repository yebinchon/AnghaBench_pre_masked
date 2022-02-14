
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freebsd11_dirent {int dummy; } ;
struct dirent {int dummy; } ;
typedef int DIR ;


 int FUNC_0 (int *,struct dirent*,struct dirent**) ;
 scalar_t__ FUNC_1 (struct freebsd11_dirent*,struct dirent*) ;

int
FUNC_2(DIR *VAR_0, struct freebsd11_dirent *VAR_1,
    struct freebsd11_dirent **VAR_2)
{
 struct dirent VAR_3, *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_3, &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 if (VAR_4 != ((void*)0)) {
  if (FUNC_1(VAR_1, &VAR_3))
   *VAR_2 = VAR_1;
  else
   *VAR_2 = ((void*)0);
 } else
  *VAR_2 = ((void*)0);
 return (0);
}
