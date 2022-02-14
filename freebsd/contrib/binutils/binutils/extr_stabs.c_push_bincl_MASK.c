
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_types {int dummy; } ;
struct stab_handle {int files; struct stab_types** file_types; struct bincl_file* bincl_stack; struct bincl_file* bincl_list; } ;
struct bincl_file {char const* name; int file; int * file_types; int hash; struct bincl_file* next_stack; struct bincl_file* next; } ;
typedef int bfd_vma ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct stab_types**,int) ;

__attribute__((used)) static void
FUNC_2 (struct stab_handle *VAR_0, const char *VAR_1, bfd_vma VAR_2)
{
  struct bincl_file *VAR_3;

  VAR_3 = (struct bincl_file *) FUNC_0 (sizeof *VAR_3);
  VAR_3->next = VAR_0->bincl_list;
  VAR_3->next_stack = VAR_0->bincl_stack;
  VAR_3->name = VAR_1;
  VAR_3->hash = VAR_2;
  VAR_3->file = VAR_0->files;
  VAR_3->file_types = ((void*)0);
  VAR_0->bincl_list = VAR_3;
  VAR_0->bincl_stack = VAR_3;

  ++VAR_0->files;
  VAR_0->file_types = ((struct stab_types **)
        FUNC_1 (VAR_0->file_types,
    (VAR_0->files
     * sizeof *VAR_0->file_types)));
  VAR_0->file_types[VAR_3->file] = ((void*)0);
}
