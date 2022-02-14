
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {struct wordent* prev; struct wordent* word; struct wordent* next; } ;


 int FUNC_0 (struct wordent*) ;

void
FUNC_1(struct wordent *VAR_0)
{
    struct wordent *VAR_1;

    while (VAR_0->next != VAR_0) {
 VAR_1 = VAR_0->next;
 VAR_0->next = VAR_1->next;
 FUNC_0(VAR_1->word);
 FUNC_0(VAR_1);
    }
    VAR_0->prev = VAR_0;
}
