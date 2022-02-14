
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_8__ {scalar_t__ r_offset; scalar_t__ r_info; } ;
struct TYPE_7__ {scalar_t__ st_size; scalar_t__ st_value; scalar_t__ st_name; } ;
struct TYPE_6__ {scalar_t__ strtab; TYPE_2__* symtab; scalar_t__ relocbase; } ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Rel ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,int,int,int,int,scalar_t__*,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (Obj_Entry *VAR_2, const Elf_Rel *VAR_3, u_long VAR_4)
{
    const Elf_Rel *VAR_5;
    const Elf_Rel *VAR_6;
    const Elf_Sym *VAR_7;
    Elf_Addr *VAR_8;

    FUNC_2(VAR_1);
    VAR_6 = (const Elf_Rel *)((const char *)VAR_3 + VAR_4);
    for (VAR_5 = VAR_3; VAR_5 < VAR_6; VAR_5++) {
 VAR_8 = (Elf_Addr *)(VAR_2->relocbase + VAR_5->r_offset);
        VAR_7 = VAR_2->symtab + FUNC_0(VAR_5->r_info);
        FUNC_1(VAR_0,
  VAR_2->strtab + VAR_7->st_name,
  (u_long)VAR_5->r_info, (u_long)VAR_5->r_offset,
  (u_long)VAR_7->st_value, (int)VAR_7->st_size,
  VAR_8, (u_long)*VAR_8);
    }
    return;
}
