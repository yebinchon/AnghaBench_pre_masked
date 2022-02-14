
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicx {scalar_t__ nprefix; char const** prefix; } ;


 scalar_t__ VAR_0 ;

void
FUNC_0(const char *VAR_1, struct unicx *VAR_2)
{
 if (VAR_2->nprefix < VAR_0)
  VAR_2->prefix[VAR_2->nprefix++] = VAR_1;
}
