
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_section_already_linked_hash_entry {struct bfd_section_already_linked* entry; } ;
struct bfd_section_already_linked {struct bfd_section_already_linked* next; int * sec; } ;
typedef int asection ;


 int VAR_0 ;
 struct bfd_section_already_linked* FUNC_0 (int *,int) ;

void
FUNC_1
  (struct bfd_section_already_linked_hash_entry *VAR_1,
   asection *VAR_2)
{
  struct bfd_section_already_linked *VAR_3;



  VAR_3 = FUNC_0 (&VAR_0, sizeof *VAR_3);
  VAR_3->sec = VAR_2;
  VAR_3->next = VAR_1->entry;
  VAR_1->entry = VAR_3;
}
