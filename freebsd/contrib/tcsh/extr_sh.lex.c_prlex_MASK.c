
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {char* word; struct wordent* next; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char) ;

void
FUNC_2(struct wordent *VAR_0)
{
    struct wordent *VAR_1 = VAR_0->next;

    for (;;) {
 FUNC_0("%S", VAR_1->word);
 VAR_1 = VAR_1->next;
 if (VAR_1 == VAR_0)
     break;
 if (VAR_1->word[0] != '\n')
     FUNC_1(' ');
    }
}
