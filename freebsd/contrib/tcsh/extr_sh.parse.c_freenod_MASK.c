
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {struct wordent* prev; struct wordent* next; struct wordent* word; } ;


 int FUNC_0 (struct wordent*) ;

__attribute__((used)) static struct wordent *
FUNC_1(struct wordent *VAR_0, struct wordent *VAR_1)
{
    struct wordent *VAR_2 = VAR_0->prev;

    while (VAR_0 != VAR_1) {
 FUNC_0(VAR_0->word);
 VAR_0 = VAR_0->next;
 FUNC_0(VAR_0->prev);
    }
    VAR_2->next = VAR_1;
    VAR_1->prev = VAR_2;
    return (VAR_2);
}
