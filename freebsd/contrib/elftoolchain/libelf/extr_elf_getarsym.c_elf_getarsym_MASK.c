
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t e_symtabsz; scalar_t__ e_rawsymtab; int * e_symtab; } ;
struct TYPE_8__ {TYPE_1__ e_ar; } ;
struct TYPE_9__ {scalar_t__ e_kind; int e_flags; TYPE_2__ e_u; } ;
typedef int Elf_Arsym ;
typedef TYPE_3__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (TYPE_3__*,size_t*) ;
 int * FUNC_2 (TYPE_3__*,size_t*) ;

Elf_Arsym *
FUNC_3(Elf *VAR_4, size_t *VAR_5)
{
 size_t VAR_6;
 Elf_Arsym *VAR_7;

 VAR_6 = 0;
 VAR_7 = ((void*)0);

 if (VAR_4 == ((void*)0) || VAR_4->e_kind != VAR_2)
  FUNC_0(VAR_1, 0);
 else if ((VAR_7 = VAR_4->e_u.e_ar.e_symtab) != ((void*)0))
  VAR_6 = VAR_4->e_u.e_ar.e_symtabsz;
 else if (VAR_4->e_u.e_ar.e_rawsymtab)
  VAR_7 = (VAR_4->e_flags & VAR_3) ?
      FUNC_2(VAR_4, &VAR_6) :
      FUNC_1(VAR_4, &VAR_6);
 else
  FUNC_0(VAR_0, 0);

 if (VAR_5)
  *VAR_5 = VAR_6;
 return (VAR_7);
}
