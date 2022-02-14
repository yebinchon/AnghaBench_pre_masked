
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (char const*) ;

int
FUNC_4 (const char *VAR_0)
{
  struct stat VAR_1;

  if (FUNC_2 (VAR_0, &VAR_1) == 0
      && (FUNC_1 (VAR_1.st_mode) || FUNC_0 (VAR_1.st_mode)))
    return FUNC_3 (VAR_0);

  return 1;
}
