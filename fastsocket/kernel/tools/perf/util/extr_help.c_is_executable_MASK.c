
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1)
{
 struct stat VAR_2;

 if (FUNC_1(VAR_1, &VAR_2) ||
     !FUNC_0(VAR_2.st_mode))
  return 0;

 return VAR_2.st_mode & VAR_0;
}
