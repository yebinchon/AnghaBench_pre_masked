
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_1, int VAR_2)
{
  if (VAR_2 == VAR_0)
    {
      struct stat VAR_3;

      if (FUNC_2 (VAR_1, &VAR_3) < 0
   || FUNC_0 (VAR_3.st_mode))
 return -1;
    }

  return FUNC_1 (VAR_1, VAR_2);
}
