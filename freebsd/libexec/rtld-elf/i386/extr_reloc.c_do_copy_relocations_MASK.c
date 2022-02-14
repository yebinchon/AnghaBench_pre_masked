
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
    const Elf_Rel *VAR_3;
    const Elf_Rel *VAR_4;

    FUNC_3(VAR_2->mainprog);

    VAR_3 = (const Elf_Rel *)((const char *)VAR_2->rel + VAR_2->relsize);
    for (VAR_4 = VAR_2->rel; VAR_4 < VAR_3; VAR_4++) {
 if (FUNC_1(VAR_4->r_info) == VAR_0) {
     void *VAR_5;
     const Elf_Sym *VAR_6;
     const char *VAR_7;
     size_t VAR_8;
     const void *VAR_9;
     const Elf_Sym *VAR_10;
     const Obj_Entry *VAR_11, *VAR_12;
     SymLook VAR_13;
     int VAR_14;

     VAR_5 = (void *)(VAR_2->relocbase + VAR_4->r_offset);
     VAR_6 = VAR_2->symtab + FUNC_0(VAR_4->r_info);
     VAR_7 = VAR_2->strtab + VAR_6->st_name;
     VAR_8 = VAR_6->st_size;
     FUNC_7(&VAR_13, VAR_7);
     VAR_13.ventry = FUNC_4(VAR_2, FUNC_0(VAR_4->r_info));
     VAR_13.flags = VAR_1;

     for (VAR_11 = FUNC_5(VAR_2); VAR_11 != ((void*)0);
       VAR_11 = FUNC_5(VAR_11)) {
  VAR_14 = FUNC_8(&VAR_13, VAR_11);
  if (VAR_14 == 0) {
      VAR_10 = VAR_13.sym_out;
      VAR_12 = VAR_13.defobj_out;
      break;
  }
     }

     if (VAR_11 == ((void*)0)) {
  FUNC_2("Undefined symbol \"%s\" referenced from COPY"
    " relocation in %s", VAR_7, VAR_2->path);
  return -1;
     }

     VAR_9 = (const void *)(VAR_12->relocbase + VAR_10->st_value);
     FUNC_6(VAR_5, VAR_9, VAR_8);
 }
    }

    return 0;
}
