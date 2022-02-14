
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct score_got_info {unsigned long assigned_gotno; int * global_gotsym; scalar_t__ next; } ;
struct score_elf_link_hash_table {int dummy; } ;
struct score_elf_hash_sort_data {unsigned long max_unref_got_dynindx; unsigned long min_got_dynindx; unsigned long max_non_got_dynindx; int * low; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {unsigned long dynsymcount; int * dynobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct bfd_link_info*) ;
 struct score_got_info* FUNC_2 (int *,int *) ;
 int FUNC_3 (struct score_elf_link_hash_table*,int ,struct score_elf_hash_sort_data*) ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct bfd_link_info *VAR_2,
      unsigned long VAR_3)
{
  struct score_elf_hash_sort_data VAR_4;
  struct score_got_info *VAR_5;
  bfd *VAR_6;

  VAR_6 = FUNC_1 (VAR_2)->dynobj;

  VAR_5 = FUNC_2 (VAR_6, ((void*)0));

  VAR_4.low = ((void*)0);
  VAR_4.max_unref_got_dynindx =
    VAR_4.min_got_dynindx = FUNC_1 (VAR_2)->dynsymcount







    - (VAR_5->next ? VAR_5->assigned_gotno : 0);
  VAR_4.max_non_got_dynindx = VAR_3;
  FUNC_3 (((struct score_elf_link_hash_table *)
     FUNC_1 (VAR_2)),
            VAR_1,
            &VAR_4);



  FUNC_0 (VAR_4.max_non_got_dynindx <= VAR_4.min_got_dynindx);
  FUNC_0 ((unsigned long)VAR_4.max_unref_got_dynindx
       <= FUNC_1 (VAR_2)->dynsymcount);



  VAR_5->global_gotsym = VAR_4.low;

  return VAR_0;
}
