
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int FILE ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *,int) ;

void
FUNC_9 (FILE *VAR_5, tree VAR_6, int VAR_7)
{
  if (FUNC_6 (VAR_6) == VAR_0)
    {
      if (FUNC_2 (VAR_6))
 {
   FUNC_8 (VAR_5, VAR_7 + 3);
   FUNC_7 (VAR_5, " mutable ");
 }
      return;
    }

  if (!FUNC_0 (FUNC_6 (VAR_6), VAR_2)
      || !FUNC_1 (VAR_6))
    return;
  FUNC_8 (VAR_5, VAR_7 + 3);
  if (FUNC_6 (VAR_6) == VAR_1
      && FUNC_3 (VAR_6))
    FUNC_7 (VAR_5, " pending-inline-info %p",
      (void *) FUNC_3 (VAR_6));
  if (FUNC_6 (VAR_6) == VAR_3
      && FUNC_4 (VAR_6))
    FUNC_7 (VAR_5, " sorted-fields %p",
      (void *) FUNC_4 (VAR_6));
  if ((FUNC_6 (VAR_6) == VAR_1 || FUNC_6 (VAR_6) == VAR_4)
      && FUNC_5 (VAR_6))
    FUNC_7 (VAR_5, " template-info %p",
      (void *) FUNC_5 (VAR_6));
}
