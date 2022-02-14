
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int,unsigned char) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_2)
{
  int VAR_3;
  unsigned char VAR_4;

  if ((VAR_3 = FUNC_0 (VAR_2)) != ' ')
    {
      FUNC_2 (VAR_2, "Sync error during gdb read of leading blank", ' ',
    VAR_3);
    }
  do
    {
      VAR_3 = FUNC_0 (VAR_2);
      if (VAR_3 == VAR_0)
 {
   break;
 }
      FUNC_1 (VAR_1, &VAR_4, 1);
    }
  while (VAR_3 == VAR_4);
  if (VAR_3 != VAR_0)
    {
      FUNC_2 (VAR_2, "Sync error during read of gdb packet", VAR_3,
    VAR_4);
    }
}
