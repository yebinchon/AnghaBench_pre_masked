
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtree_entry {struct mtree_entry* buff; int resolver; int contents_name; int current_dir; int line; int options; struct mtree_entry* name; struct mtree_entry* next; struct mtree_entry* entries; } ;
struct mtree {struct mtree* buff; int resolver; int contents_name; int current_dir; int line; int options; struct mtree* name; struct mtree* next; struct mtree* entries; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtree_entry*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_1)
{
 struct mtree *VAR_2;
 struct mtree_entry *VAR_3, *VAR_4;

 VAR_2 = (struct mtree *)(VAR_1->format->data);

 VAR_3 = VAR_2->entries;
 while (VAR_3 != ((void*)0)) {
  VAR_4 = VAR_3->next;
  FUNC_2(VAR_3->name);
  FUNC_3(VAR_3->options);
  FUNC_2(VAR_3);
  VAR_3 = VAR_4;
 }
 FUNC_1(&VAR_2->line);
 FUNC_1(&VAR_2->current_dir);
 FUNC_1(&VAR_2->contents_name);
 FUNC_0(VAR_2->resolver);

 FUNC_2(VAR_2->buff);
 FUNC_2(VAR_2);
 (VAR_1->format->data) = ((void*)0);
 return (VAR_0);
}
