
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,...) ;

void
FUNC_10 (tree VAR_2)
{
  if (VAR_2 == 0)
    return;

  if (FUNC_1 (VAR_2))
    FUNC_9 ("%qs is unavailable (declared at %s:%d)",
    FUNC_4 (FUNC_0 (VAR_2)),
    FUNC_2 (VAR_2), FUNC_3 (VAR_2));
  else if (FUNC_7 (VAR_2))
    {
      const char *VAR_3 = ((void*)0);
      tree VAR_4 = FUNC_8 (VAR_2);

      if (FUNC_5 (FUNC_6 (VAR_2)) == VAR_0)
 VAR_3 = FUNC_4 (FUNC_6 (VAR_2));
      else if (FUNC_5 (FUNC_6 (VAR_2)) == VAR_1
        && FUNC_0 (FUNC_6 (VAR_2)))
 VAR_3 = FUNC_4 (FUNC_0 (FUNC_6 (VAR_2)));

      if (VAR_3)
 {
   if (VAR_4)
     FUNC_9 ("%qs is unavailable (declared at %s:%d)", VAR_3,
     FUNC_2 (VAR_4), FUNC_3 (VAR_4));
   else
     FUNC_9 ("%qs is unavailable", VAR_3);
 }
      else if (VAR_4)
 FUNC_9 ("type is unavailable (declared at %s:%d)",
        FUNC_2 (VAR_4), FUNC_3 (VAR_4));
      else
 FUNC_9 ("type is unavailable");
    }
}
