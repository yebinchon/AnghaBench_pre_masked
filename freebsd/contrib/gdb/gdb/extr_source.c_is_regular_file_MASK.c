
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_2)
{
  struct stat VAR_3;
  const int VAR_4 = FUNC_1 (VAR_2, &VAR_3);






  if (VAR_4 != 0)
    return (VAR_1 != VAR_0);

  return FUNC_0 (VAR_3.st_mode);
}
