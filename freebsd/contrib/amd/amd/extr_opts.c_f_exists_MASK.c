
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 scalar_t__ FUNC_0 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0)
{
  struct stat VAR_1;

  if (FUNC_0(VAR_0, &VAR_1) < 0)
    return (0);
  else
    return (1);
}
