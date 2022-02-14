
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html {size_t col; scalar_t__ noindent; int indent; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1(struct html *VAR_1)
{
 size_t VAR_2;

 if (VAR_1->col)
  return;

 if (VAR_1->noindent == 0) {
  VAR_1->col = VAR_1->indent * 2;
  for (VAR_2 = 0; VAR_2 < VAR_1->col; VAR_2++)
   FUNC_0(' ');
 }
 VAR_1->flags &= ~VAR_0;
}
