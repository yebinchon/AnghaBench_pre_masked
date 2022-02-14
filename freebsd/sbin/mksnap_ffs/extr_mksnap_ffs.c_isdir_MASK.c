
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, struct stat *VAR_1)
{

 if (FUNC_1(VAR_0, VAR_1) < 0)
  return (-1);
        if (!FUNC_0(VAR_1->st_mode))
  return (0);
 return (1);
}
