
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct sparse_block {scalar_t__ remaining; struct sparse_block* next; int is_hole; } ;
struct pax {scalar_t__ entry_bytes_remaining; scalar_t__ entry_padding; struct sparse_block* sparse_list; } ;
struct archive_write {scalar_t__ format_data; } ;


 int FUNC_0 (struct archive_write*,size_t) ;
 int FUNC_1 (struct sparse_block*) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_0)
{
 struct pax *VAR_1;
 uint64_t VAR_2;
 int VAR_3;

 VAR_1 = (struct pax *)VAR_0->format_data;
 VAR_2 = VAR_1->entry_bytes_remaining;
 if (VAR_2 == 0) {
  while (VAR_1->sparse_list) {
   struct sparse_block *VAR_4;
   if (!VAR_1->sparse_list->is_hole)
    VAR_2 += VAR_1->sparse_list->remaining;
   VAR_4 = VAR_1->sparse_list->next;
   FUNC_1(VAR_1->sparse_list);
   VAR_1->sparse_list = VAR_4;
  }
 }
 VAR_3 = FUNC_0(VAR_0, (size_t)(VAR_2 + VAR_1->entry_padding));
 VAR_1->entry_bytes_remaining = VAR_1->entry_padding = 0;
 return (VAR_3);
}
