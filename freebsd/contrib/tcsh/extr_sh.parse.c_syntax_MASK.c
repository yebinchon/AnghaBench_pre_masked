
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {struct wordent* next; int * word; } ;
struct command {int dummy; } ;


 scalar_t__ FUNC_0 (char*,int ) ;
 struct command* FUNC_1 (struct wordent const*,struct wordent const*,int) ;

struct command *
FUNC_2(const struct wordent *VAR_0, const struct wordent *VAR_1, int VAR_2)
{

    while (VAR_0 != VAR_1)
 if (FUNC_0(";&\n", VAR_0->word[0]))
     VAR_0 = VAR_0->next;
 else
     return (FUNC_1(VAR_0, VAR_1, VAR_2));
    return (0);
}
