
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct menu {struct menu* next; int lineno; int file; int parent; struct symbol* sym; } ;


 struct menu* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct menu** VAR_3 ;
 struct menu* FUNC_0 (int) ;
 int FUNC_1 (struct menu*,int ,int) ;
 int FUNC_2 () ;

void FUNC_3(struct symbol *VAR_4)
{
 struct menu *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5));
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->sym = VAR_4;
 VAR_5->parent = VAR_2;
 VAR_5->file = VAR_1;
 VAR_5->lineno = FUNC_2();

 *VAR_3 = VAR_5;
 VAR_3 = &VAR_5->next;
 VAR_0 = VAR_5;
}
