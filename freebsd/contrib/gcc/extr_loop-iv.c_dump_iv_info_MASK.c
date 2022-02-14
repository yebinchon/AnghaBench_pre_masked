
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {scalar_t__ base; scalar_t__ step; scalar_t__ mode; scalar_t__ extend_mode; size_t extend; scalar_t__ mult; scalar_t__ delta; scalar_t__ first_special; } ;
typedef int FILE ;


 char* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,scalar_t__) ;
 char** VAR_2 ;

void
FUNC_3 (FILE *VAR_3, struct rtx_iv *VAR_4)
{
  if (!VAR_4->base)
    {
      FUNC_1 (VAR_3, "not simple");
      return;
    }

  if (VAR_4->step == VAR_0
      && !VAR_4->first_special)
    FUNC_1 (VAR_3, "invariant ");

  FUNC_2 (VAR_3, VAR_4->base);
  if (VAR_4->step != VAR_0)
    {
      FUNC_1 (VAR_3, " + ");
      FUNC_2 (VAR_3, VAR_4->step);
      FUNC_1 (VAR_3, " * iteration");
    }
  FUNC_1 (VAR_3, " (in %s)", FUNC_0 (VAR_4->mode));

  if (VAR_4->mode != VAR_4->extend_mode)
    FUNC_1 (VAR_3, " %s to %s",
      VAR_2[VAR_4->extend],
      FUNC_0 (VAR_4->extend_mode));

  if (VAR_4->mult != VAR_1)
    {
      FUNC_1 (VAR_3, " * ");
      FUNC_2 (VAR_3, VAR_4->mult);
    }
  if (VAR_4->delta != VAR_0)
    {
      FUNC_1 (VAR_3, " + ");
      FUNC_2 (VAR_3, VAR_4->delta);
    }
  if (VAR_4->first_special)
    FUNC_1 (VAR_3, " (first special)");
}
