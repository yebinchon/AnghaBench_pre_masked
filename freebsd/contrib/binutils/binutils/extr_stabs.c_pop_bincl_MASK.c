
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {char const* main_filename; struct bincl_file* bincl_stack; int * file_types; } ;
struct bincl_file {size_t file; char const* name; int file_types; struct bincl_file* next_stack; } ;



__attribute__((used)) static const char *
FUNC_0 (struct stab_handle *VAR_0)
{
  struct bincl_file *VAR_1;

  VAR_1 = VAR_0->bincl_stack;
  if (VAR_1 == ((void*)0))
    return VAR_0->main_filename;
  VAR_0->bincl_stack = VAR_1->next_stack;

  VAR_1->file_types = VAR_0->file_types[VAR_1->file];

  if (VAR_0->bincl_stack == ((void*)0))
    return VAR_0->main_filename;
  return VAR_0->bincl_stack->name;
}
