
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {struct wordent* next; struct wordent* prev; int word; } ;


 int VAR_0 ;

void
FUNC_0(struct wordent *VAR_1)
{
 VAR_1->word = VAR_0;
 VAR_1->prev = VAR_1;
 VAR_1->next = VAR_1;
}
