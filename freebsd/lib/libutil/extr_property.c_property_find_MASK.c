
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* properties ;
struct TYPE_3__ {char* value; struct TYPE_3__* next; int * name; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;

char *
FUNC_1(properties VAR_0, const char *VAR_1)
{
    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || !VAR_1[0])
 return (((void*)0));
    while (VAR_0 != ((void*)0)) {
 if (VAR_0->name != ((void*)0) && FUNC_0(VAR_0->name, VAR_1) == 0)
     return (VAR_0->value);
 VAR_0 = VAR_0->next;
    }
    return (((void*)0));
}
