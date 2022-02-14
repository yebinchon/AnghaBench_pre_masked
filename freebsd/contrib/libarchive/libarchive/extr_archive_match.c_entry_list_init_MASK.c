
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_list {scalar_t__ count; int * first; int ** last; } ;



__attribute__((used)) static void
FUNC_0(struct entry_list *VAR_0)
{
 VAR_0->first = ((void*)0);
 VAR_0->last = &(VAR_0->first);
 VAR_0->count = 0;
}
