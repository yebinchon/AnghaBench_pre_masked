
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mtree_entry* first; } ;
struct mtree_writer {TYPE_1__ file_list; } ;
struct mtree_entry {struct mtree_entry* next; } ;


 int FUNC_0 (struct mtree_entry*) ;

__attribute__((used)) static void
FUNC_1(struct mtree_writer *VAR_0)
{
 struct mtree_entry *VAR_1, *VAR_2;

 VAR_1 = VAR_0->file_list.first;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
