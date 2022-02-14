
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,char,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_2)
{
  int VAR_3;
  char VAR_4;

  if ((VAR_3 = FUNC_0 (VAR_2)) != ' ')
    {
      FUNC_1 (VAR_2, "Sync error skipping blank during write to gdb", ' ',
    VAR_3);
    }
  while ((VAR_3 = FUNC_0 (VAR_2)) != VAR_0)
    {
      VAR_4 = VAR_3;
      FUNC_2 (VAR_1, &VAR_4, 1);
    }
}
