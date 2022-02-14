
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objid {char const* label; int value; int * next; } ;


 struct objid* FUNC_0 (int) ;

__attribute__((used)) static struct objid *
FUNC_1(const char *VAR_0, int VAR_1)
{
    struct objid *VAR_2;
    VAR_2 = FUNC_0(sizeof(*VAR_2));
    VAR_2->label = VAR_0;
    VAR_2->value = VAR_1;
    VAR_2->next = ((void*)0);
    return VAR_2;
}
