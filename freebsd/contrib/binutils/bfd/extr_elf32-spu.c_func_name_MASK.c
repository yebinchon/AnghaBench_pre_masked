
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_7__* sym; TYPE_3__* h; } ;
struct function_info {TYPE_4__ u; TYPE_5__* sec; scalar_t__ global; struct function_info* start; } ;
typedef int bfd ;
struct TYPE_13__ {char* name; int * owner; } ;
typedef TYPE_5__ asection ;
struct TYPE_15__ {scalar_t__ st_name; scalar_t__ st_value; } ;
struct TYPE_14__ {int symtab_hdr; } ;
struct TYPE_9__ {char const* string; } ;
struct TYPE_10__ {TYPE_1__ root; } ;
struct TYPE_11__ {TYPE_2__ root; } ;
typedef int Elf_Internal_Shdr ;


 char const* FUNC_0 (int *,int *,TYPE_7__*,TYPE_5__*) ;
 char* FUNC_1 (size_t) ;
 TYPE_6__* FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char*,unsigned long) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static const char *
FUNC_5 (struct function_info *VAR_0)
{
  asection *VAR_1;
  bfd *VAR_2;
  Elf_Internal_Shdr *VAR_3;

  while (VAR_0->start != ((void*)0))
    VAR_0 = VAR_0->start;

  if (VAR_0->global)
    return VAR_0->u.h->root.root.string;

  VAR_1 = VAR_0->sec;
  if (VAR_0->u.sym->st_name == 0)
    {
      size_t VAR_4 = FUNC_4 (VAR_1->name);
      char *VAR_5 = FUNC_1 (VAR_4 + 10);
      if (VAR_5 == ((void*)0))
 return "(null)";
      FUNC_3 (VAR_5, "%s+%lx", VAR_1->name,
        (unsigned long) VAR_0->u.sym->st_value & 0xffffffff);
      return VAR_5;
    }
  VAR_2 = VAR_1->owner;
  VAR_3 = &FUNC_2 (VAR_2)->symtab_hdr;
  return FUNC_0 (VAR_2, VAR_3, VAR_0->u.sym, VAR_1);
}
