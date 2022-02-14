
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {struct wordent* next; int word; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const struct wordent *VAR_0, const struct wordent *VAR_1)
{
    const struct wordent *VAR_2 = VAR_0->next, *VAR_3 = VAR_1->next;

    for (;;) {
 if (FUNC_0(VAR_2->word, VAR_3->word) != 0)
     return 0;
 VAR_2 = VAR_2->next;
 VAR_3 = VAR_3->next;
 if (VAR_2 == VAR_0)
     return (VAR_3 == VAR_1) ? 1 : 0;
 if (VAR_3 == VAR_1)
     return 0;
    }
}
