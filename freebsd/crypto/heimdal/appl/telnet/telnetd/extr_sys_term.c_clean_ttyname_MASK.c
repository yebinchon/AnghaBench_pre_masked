
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_2 (char *VAR_1)
{
  char *VAR_2 = VAR_1;

  if (FUNC_1 (VAR_2, VAR_0, FUNC_0(VAR_0)) == 0)
    VAR_2 += FUNC_0(VAR_0);
  if (FUNC_1 (VAR_2, "pty/", 4) == 0)
    VAR_2 += 4;
  if (FUNC_1 (VAR_2, "ptym/", 5) == 0)
    VAR_2 += 5;
  return VAR_2;
}
