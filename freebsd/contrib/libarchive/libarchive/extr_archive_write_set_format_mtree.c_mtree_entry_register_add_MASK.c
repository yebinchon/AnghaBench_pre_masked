
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mtree_entry** last; } ;
struct mtree_writer {TYPE_1__ file_list; } ;
struct mtree_entry {struct mtree_entry* next; } ;



__attribute__((used)) static void
FUNC_0(struct mtree_writer *VAR_0, struct mtree_entry *VAR_1)
{
        VAR_1->next = ((void*)0);
        *VAR_0->file_list.last = VAR_1;
        VAR_0->file_list.last = &(VAR_1->next);
}
