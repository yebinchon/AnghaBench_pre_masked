
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objid {struct objid* next; } ;



__attribute__((used)) static void
FUNC_0(struct objid *VAR_0, struct objid *VAR_1)
{
    struct objid *VAR_2;
    VAR_2 = VAR_0;
    while (VAR_2->next)
 VAR_2 = VAR_2->next;
    VAR_2->next = VAR_1;
}
