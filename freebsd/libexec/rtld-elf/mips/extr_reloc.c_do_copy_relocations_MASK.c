
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_14__ {int st_name; size_t st_size; scalar_t__ st_value; } ;
struct TYPE_13__ {int relsize; char* strtab; scalar_t__ relocbase; int path; TYPE_3__* symtab; TYPE_4__* rel; int mainprog; } ;
struct TYPE_12__ {TYPE_2__ const* defobj_out; TYPE_3__* sym_out; int flags; int ventry; } ;
typedef TYPE_1__ SymLook ;
typedef TYPE_2__ const Obj_Entry ;
typedef TYPE_3__ Elf_Sym ;
typedef TYPE_4__ Elf_Rel ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__ const*,int) ;
 TYPE_2__ const* FUNC_5 (TYPE_2__ const*) ;
 int FUNC_6 (void*,void const*,size_t) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__ const*) ;

int
FUNC_9(Obj_Entry *VAR_2)
{
 const Obj_Entry *VAR_3, *VAR_4;
 const Elf_Rel *VAR_5;
 const Elf_Rel *VAR_6;
 const Elf_Sym *VAR_7;
 const Elf_Sym *VAR_8;
 const void *VAR_9;
 const char *VAR_10;
 void *VAR_11;
 SymLook VAR_12;
 size_t VAR_13;
 int VAR_14;




 FUNC_3(VAR_2->mainprog);

 VAR_5 = (const Elf_Rel *)((const char *)VAR_2->rel + VAR_2->relsize);
 for (VAR_6 = VAR_2->rel; VAR_6 < VAR_5; VAR_6++) {
  if (FUNC_1(VAR_6->r_info) != VAR_0)
   continue;

  VAR_11 = (void *)(VAR_2->relocbase + VAR_6->r_offset);
  VAR_8 = VAR_2->symtab + FUNC_0(VAR_6->r_info);
  VAR_10 = VAR_2->strtab + VAR_8->st_name;
  VAR_13 = VAR_8->st_size;

  FUNC_7(&VAR_12, VAR_10);
  VAR_12.ventry = FUNC_4(VAR_2, FUNC_0(VAR_6->r_info));
  VAR_12.flags = VAR_1;

  for (VAR_3 = FUNC_5(VAR_2); VAR_3 != ((void*)0);
       VAR_3 = FUNC_5(VAR_3)) {
   VAR_14 = FUNC_8(&VAR_12, VAR_3);
   if (VAR_14 == 0) {
    VAR_7 = VAR_12.sym_out;
    VAR_4 = VAR_12.defobj_out;
    break;
   }
  }
  if (VAR_3 == ((void*)0)) {
   FUNC_2(
"Undefined symbol \"%s\" referenced from COPY relocation in %s",
       VAR_10, VAR_2->path);
   return (-1);
  }

  VAR_9 = (const void *)(VAR_4->relocbase + VAR_7->st_value);
  FUNC_6(VAR_11, VAR_9, VAR_13);
 }

 return (0);
}
