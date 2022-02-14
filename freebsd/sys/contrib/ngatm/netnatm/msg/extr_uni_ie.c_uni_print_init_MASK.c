
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicx {int tabsiz; char* buf; size_t bufsiz; scalar_t__ doindent; scalar_t__ nprefix; scalar_t__ indent; scalar_t__ dont_init; } ;



void
FUNC_0(char *VAR_0, size_t VAR_1, struct unicx *VAR_2)
{
 if (VAR_2->dont_init)
  return;

 VAR_2->indent = 0;
 VAR_2->nprefix = 0;
 VAR_2->doindent = 0;
 if (VAR_2->tabsiz == 0)
  VAR_2->tabsiz = 4;
 VAR_2->buf = VAR_0;
 VAR_2->bufsiz = VAR_1;
}
