
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int * VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (char,int *) ;
 scalar_t__ VAR_3 ;

int
FUNC_5 (FILE *VAR_4, rtx VAR_5)
{
  VAR_1 = VAR_4;
  VAR_3 = 0;
  if (! VAR_0
      || !FUNC_1 (VAR_5) || FUNC_0 (VAR_5) < 0)
    {
      FUNC_2 (VAR_2, VAR_1);
      FUNC_3 (VAR_5);
      FUNC_4 ('\n', VAR_4);
      return 1;
    }
  return 0;
}
