
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int location_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int *,char const*) ;

void
FUNC_5 (bool VAR_6, tree VAR_7, int VAR_8)
{
  const char *VAR_9;
  location_t VAR_10;

  FUNC_2 (VAR_4 > 0);
  --VAR_4;
  if (VAR_4 > 0)
    {
      if (VAR_3 != ((void*)0)
   && VAR_8 != 0
   && VAR_8 < (int) VAR_2)
 VAR_2 = VAR_8;
      return;
    }

  VAR_9 = VAR_3;
  VAR_3 = ((void*)0);

  if (!VAR_6 || VAR_9 == ((void*)0))
    return;



  if (VAR_8 == 0 || VAR_8 > (int) VAR_2)
    VAR_8 = VAR_2;

  if (!FUNC_3 (VAR_8))
    return;

  if (VAR_7 == VAR_0 || !FUNC_0 (VAR_7))
    VAR_10 = VAR_5;
  else
    VAR_10 = FUNC_1 (VAR_7);
  FUNC_4 (VAR_1, "%H%s", &VAR_10, VAR_9);
}
