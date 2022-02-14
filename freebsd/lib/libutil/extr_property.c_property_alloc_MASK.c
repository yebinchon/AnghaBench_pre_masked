
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _property {int dummy; } ;
typedef TYPE_1__* properties ;
struct TYPE_4__ {int * value; struct TYPE_4__* name; int * next; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (char*) ;

__attribute__((used)) static properties
FUNC_3(char *VAR_0, char *VAR_1)
{
    properties VAR_2;

    if ((VAR_2 = (properties)FUNC_1(sizeof(struct _property))) == ((void*)0))
 return (((void*)0));
    VAR_2->next = ((void*)0);
    if (VAR_0 != ((void*)0)) {
 if ((VAR_2->name = FUNC_2(VAR_0)) == ((void*)0)) {
     FUNC_0(VAR_2);
     return (((void*)0));
 }
    } else
 VAR_2->name = ((void*)0);
    if (VAR_1 != ((void*)0)) {
 if ((VAR_2->value = FUNC_2(VAR_1)) == ((void*)0)) {
     FUNC_0(VAR_2->name);
     FUNC_0(VAR_2);
     return (((void*)0));
 }
    } else
 VAR_2->value = ((void*)0);
    return (VAR_2);
}
