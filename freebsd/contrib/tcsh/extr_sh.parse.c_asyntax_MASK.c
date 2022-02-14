
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {struct wordent* next; int * word; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct wordent*,struct wordent*) ;

__attribute__((used)) static int
FUNC_2(struct wordent *VAR_0, struct wordent *VAR_1)
{
    while (VAR_0 != VAR_1) {
 if (!FUNC_0(";&\n", VAR_0->word[0]))
     return FUNC_1(VAR_0, VAR_1);
 VAR_0 = VAR_0->next;
    }
    return 0;
}
