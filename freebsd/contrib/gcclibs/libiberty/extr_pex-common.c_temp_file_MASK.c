
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_obj {int * tempbase; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;

__attribute__((used)) static char *
FUNC_8 (struct pex_obj *VAR_1, int VAR_2, char *VAR_3)
{
  if (VAR_3 == ((void*)0))
    {
      if (VAR_1->tempbase == ((void*)0))
        {
          VAR_3 = FUNC_3 (((void*)0));
        }
      else
        {
          int VAR_4 = FUNC_6 (VAR_1->tempbase);
          int VAR_5;

          if (VAR_4 >= 6
              && FUNC_5 (VAR_1->tempbase + VAR_4 - 6, "XXXXXX") == 0)
            VAR_3 = FUNC_7 (VAR_1->tempbase);
          else
            VAR_3 = FUNC_1 (VAR_1->tempbase, "XXXXXX", ((void*)0));

          VAR_5 = FUNC_4 (VAR_3, 0);
          if (VAR_5 < 0)
            {
              FUNC_2 (VAR_3);
              return ((void*)0);
            }





          FUNC_0 (VAR_5);
        }
    }
  else if ((VAR_2 & VAR_0) != 0)
    {
      if (VAR_1->tempbase == ((void*)0))
        VAR_3 = FUNC_3 (VAR_3);
      else
        VAR_3 = FUNC_1 (VAR_1->tempbase, VAR_3, ((void*)0));
    }

  return VAR_3;
}
