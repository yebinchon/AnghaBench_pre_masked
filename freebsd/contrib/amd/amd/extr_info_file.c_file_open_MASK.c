
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_mtime; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;

__attribute__((used)) static FILE *
FUNC_4(char *VAR_0, time_t *VAR_1)
{
  FILE *VAR_2 = FUNC_2(VAR_0, "r");

  if (VAR_2 && VAR_1) {
    struct stat VAR_3;
    if (FUNC_3(FUNC_1(VAR_2), &VAR_3) < 0)
      *VAR_1 = FUNC_0(((void*)0));
    else
      *VAR_1 = VAR_3.st_mtime;
  }
  return VAR_2;
}
