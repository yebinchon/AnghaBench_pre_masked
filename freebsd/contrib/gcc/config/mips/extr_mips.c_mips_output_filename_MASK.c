
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (char,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ VAR_5 ;

void
FUNC_4 (FILE *VAR_6, const char *VAR_7)
{



  if (VAR_5 == VAR_1)
    return;
  else if (VAR_3)
    {
      VAR_3 = 0;
      VAR_4 += 1;
      VAR_2 = VAR_7;
      FUNC_0 (VAR_6, "\t.file\t%d ", VAR_4);
      FUNC_1 (VAR_6, VAR_7);
      FUNC_2 ('\n', VAR_6);
    }



  else if (VAR_5 == VAR_0)
    return;

  else if (VAR_7 != VAR_2
    && FUNC_3 (VAR_7, VAR_2) != 0)
    {
      VAR_4 += 1;
      VAR_2 = VAR_7;
      FUNC_0 (VAR_6, "\t.file\t%d ", VAR_4);
      FUNC_1 (VAR_6, VAR_7);
      FUNC_2 ('\n', VAR_6);
    }
}
