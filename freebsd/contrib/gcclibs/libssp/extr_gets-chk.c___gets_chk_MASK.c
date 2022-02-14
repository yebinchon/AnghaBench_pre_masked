
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,char*,size_t) ;
 int VAR_1 ;
 size_t FUNC_7 (char*) ;

char *
FUNC_8 (char *VAR_2, size_t VAR_3)
{
  char *VAR_4, *VAR_5;

  if (VAR_3 >= (size_t) VAR_0)
    return FUNC_4 (VAR_2);

  if (VAR_3 <= 8192)
    VAR_5 = FUNC_1 (VAR_3 + 1);
  else
    VAR_5 = FUNC_5 (VAR_3 + 1);
  if (VAR_5 == ((void*)0))
    return FUNC_4 (VAR_2);

  VAR_4 = FUNC_2 (VAR_5, (int) (VAR_3 + 1), VAR_1);
  if (VAR_4 != ((void*)0))
    {
      size_t VAR_6 = FUNC_7 (VAR_5);
      if (VAR_6 > 0 && VAR_5[VAR_6 - 1] == '\n')
        --VAR_6;
      if (VAR_6 == VAR_3)
        FUNC_0 ();
      FUNC_6 (VAR_2, VAR_5, VAR_6);
      VAR_2[VAR_6] = '\0';
      VAR_4 = VAR_2;
    }

  if (VAR_3 > 8192)
    FUNC_3 (VAR_5);
  return VAR_4;
}
