
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {char* word; struct wordent* next; struct wordent* prev; } ;


 char* FUNC_0 (char*) ;
 struct wordent* FUNC_1 (int) ;

void
FUNC_2(struct wordent *VAR_0, struct wordent *VAR_1)
{
    struct wordent *VAR_2;

    VAR_2 = VAR_0;
    VAR_1 = VAR_1->next;
    do {
 struct wordent *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 VAR_3->word = ((void*)0);
 VAR_3->prev = VAR_2;
 VAR_3->next = VAR_0;
 VAR_2->next = VAR_3;
 VAR_0->prev = VAR_3;
 VAR_2 = VAR_3;
 VAR_2->word = FUNC_0(VAR_1->word);
 VAR_1 = VAR_1->next;
    } while (VAR_2->word[0] != '\n');
}
