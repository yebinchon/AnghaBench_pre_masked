
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct bfd_link_info {int relocatable; } ;
typedef int bfd ;
struct TYPE_12__ {scalar_t__ output_offset; } ;
typedef TYPE_1__ asection ;
struct TYPE_14__ {int r_addend; int r_info; } ;
struct TYPE_13__ {int st_info; } ;
typedef TYPE_2__ Elf_Internal_Sym ;
typedef TYPE_3__ Elf_Internal_Rela ;


 unsigned int FUNC_0 (int *,int ) ;
 unsigned int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_1__**,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*,TYPE_1__**,int ) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_6, struct bfd_link_info *VAR_7,
   bfd *VAR_8, Elf_Internal_Sym *VAR_9,
   asection **VAR_10, Elf_Internal_Rela *VAR_11)
{
  unsigned int VAR_12, VAR_13;
  Elf_Internal_Sym *VAR_14;
  asection *VAR_15;

  if (FUNC_5 (VAR_8, VAR_11, VAR_10, VAR_0))
    {
      VAR_12 = FUNC_1 (VAR_6, VAR_11->r_info);
      if (VAR_12 == VAR_1
   || VAR_12 == VAR_2
   || VAR_12 == VAR_3
   || VAR_12 == VAR_4)
 {
   VAR_11->r_addend += FUNC_4 (VAR_8);
   VAR_11->r_addend -= FUNC_4 (VAR_6);
 }

      VAR_13 = FUNC_0 (VAR_6, VAR_11->r_info);
      VAR_14 = VAR_9 + VAR_13;


      if (!VAR_7->relocatable)
 {
   VAR_15 = VAR_10[VAR_13];
   FUNC_3 (VAR_6, VAR_14, &VAR_15, VAR_11);
 }


      if (FUNC_2 (VAR_14->st_info) == VAR_5)
 VAR_11->r_addend += VAR_10[VAR_13]->output_offset;
    }
}
