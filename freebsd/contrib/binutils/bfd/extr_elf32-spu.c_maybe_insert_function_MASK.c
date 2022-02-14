
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spu_elf_stack_info {int num_fun; int max_fun; struct function_info* fun; } ;
struct TYPE_9__ {void* sym; void* h; } ;
struct function_info {scalar_t__ lo; scalar_t__ hi; int stack; TYPE_4__ u; int * sec; void* global; void* is_func; } ;
struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_7__ {TYPE_1__ def; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct elf_link_hash_entry {scalar_t__ size; TYPE_3__ root; } ;
struct _spu_elf_section_data {struct spu_elf_stack_info* stack_info; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef void* bfd_boolean ;
typedef int asection ;
struct TYPE_10__ {scalar_t__ st_value; scalar_t__ st_size; } ;
typedef TYPE_5__ Elf_Internal_Sym ;


 void* VAR_0 ;
 struct spu_elf_stack_info* FUNC_0 (int *,int) ;
 struct spu_elf_stack_info* FUNC_1 (struct spu_elf_stack_info*,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct function_info*,struct function_info*,int) ;
 int FUNC_4 (char*,int ,int) ;
 struct _spu_elf_section_data* FUNC_5 (int *) ;

__attribute__((used)) static struct function_info *
FUNC_6 (asection *VAR_1,
         void *VAR_2,
         bfd_boolean VAR_3,
         bfd_boolean VAR_4)
{
  struct _spu_elf_section_data *VAR_5 = FUNC_5 (VAR_1);
  struct spu_elf_stack_info *VAR_6 = VAR_5->stack_info;
  int VAR_7;
  bfd_vma VAR_8, VAR_9;

  if (VAR_6 == ((void*)0))
    {
      VAR_6 = FUNC_0 (VAR_1, 20);
      if (VAR_6 == ((void*)0))
 return ((void*)0);
    }

  if (!VAR_3)
    {
      Elf_Internal_Sym *VAR_10 = VAR_2;
      VAR_8 = VAR_10->st_value;
      VAR_9 = VAR_10->st_size;
    }
  else
    {
      struct elf_link_hash_entry *VAR_11 = VAR_2;
      VAR_8 = VAR_11->root.u.def.value;
      VAR_9 = VAR_11->size;
    }

  for (VAR_7 = VAR_6->num_fun; --VAR_7 >= 0; )
    if (VAR_6->fun[VAR_7].lo <= VAR_8)
      break;

  if (VAR_7 >= 0)
    {


      if (VAR_6->fun[VAR_7].lo == VAR_8)
 {

   if (VAR_3 && !VAR_6->fun[VAR_7].global)
     {
       VAR_6->fun[VAR_7].global = VAR_0;
       VAR_6->fun[VAR_7].u.h = VAR_2;
     }
   if (VAR_4)
     VAR_6->fun[VAR_7].is_func = VAR_0;
   return &VAR_6->fun[VAR_7];
 }

      else if (VAR_6->fun[VAR_7].hi > VAR_8 && VAR_9 == 0)
 return &VAR_6->fun[VAR_7];
    }

  if (++VAR_7 < VAR_6->num_fun)
    FUNC_3 (&VAR_6->fun[VAR_7 + 1], &VAR_6->fun[VAR_7],
      (VAR_6->num_fun - VAR_7) * sizeof (VAR_6->fun[VAR_7]));
  else if (VAR_7 >= VAR_6->max_fun)
    {
      bfd_size_type VAR_12 = sizeof (struct spu_elf_stack_info);
      bfd_size_type VAR_13 = VAR_12;

      VAR_13 += (VAR_6->max_fun - 1) * sizeof (struct function_info);
      VAR_6->max_fun += 20 + (VAR_6->max_fun >> 1);
      VAR_12 += (VAR_6->max_fun - 1) * sizeof (struct function_info);
      VAR_6 = FUNC_1 (VAR_6, VAR_12);
      if (VAR_6 == ((void*)0))
 return ((void*)0);
      FUNC_4 ((char *) VAR_6 + VAR_13, 0, VAR_12 - VAR_13);
      VAR_5->stack_info = VAR_6;
    }
  VAR_6->fun[VAR_7].is_func = VAR_4;
  VAR_6->fun[VAR_7].global = VAR_3;
  VAR_6->fun[VAR_7].sec = VAR_1;
  if (VAR_3)
    VAR_6->fun[VAR_7].u.h = VAR_2;
  else
    VAR_6->fun[VAR_7].u.sym = VAR_2;
  VAR_6->fun[VAR_7].lo = VAR_8;
  VAR_6->fun[VAR_7].hi = VAR_8 + VAR_9;
  VAR_6->fun[VAR_7].stack = -FUNC_2 (VAR_1, VAR_8);
  VAR_6->num_fun += 1;
  return &VAR_6->fun[VAR_7];
}
