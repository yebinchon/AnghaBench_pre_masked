
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {struct expr* child; struct expr* next; } ;


 int FUNC_0 (struct expr*) ;

__attribute__((used)) static void
FUNC_1(struct expr *VAR_0)
{
 if (VAR_0->next != ((void*)0))
  FUNC_1(VAR_0->next);
 if (VAR_0->child != ((void*)0))
  FUNC_1(VAR_0->child);
 FUNC_0(VAR_0);
}
