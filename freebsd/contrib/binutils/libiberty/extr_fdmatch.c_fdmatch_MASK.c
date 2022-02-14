
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 scalar_t__ FUNC_0 (int,struct stat*) ;

int FUNC_1 (int VAR_0, int VAR_1)
{
  struct stat VAR_2;
  struct stat VAR_3;

  if ((FUNC_0 (VAR_0, &VAR_2) == 0) &&
      (FUNC_0 (VAR_1, &VAR_3) == 0) &&
      (VAR_2 == VAR_3) &&
      (VAR_2 == VAR_3))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
