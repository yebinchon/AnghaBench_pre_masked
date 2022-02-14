
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {size_t e_phnum; } ;
struct TYPE_13__ {size_t e_phnum; } ;
struct TYPE_10__ {size_t sh_info; } ;
struct TYPE_9__ {size_t sh_info; } ;
struct TYPE_11__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_12__ {scalar_t__ s_ndx; TYPE_3__ s_shdr; } ;
typedef TYPE_4__ Elf_Scn ;
typedef TYPE_5__ Elf64_Ehdr ;
typedef TYPE_6__ Elf32_Ehdr ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;

int
FUNC_3(Elf *VAR_5, void *VAR_6, int VAR_7, size_t VAR_8)
{
 Elf_Scn *VAR_9;

 if (VAR_8 >= VAR_3) {
  if ((VAR_9 = FUNC_0(VAR_5)) == ((void*)0))
   return (0);

  FUNC_1(VAR_9->s_ndx == VAR_4);

  if (VAR_7 == VAR_0)
   VAR_9->s_shdr.s_shdr32.sh_info = VAR_8;
  else
   VAR_9->s_shdr.s_shdr64.sh_info = VAR_8;

  (void) FUNC_2(VAR_9, VAR_1, VAR_2);

  VAR_8 = VAR_3;
 }

 if (VAR_7 == VAR_0)
  ((Elf32_Ehdr *) VAR_6)->e_phnum = VAR_8 & 0xFFFFU;
 else
  ((Elf64_Ehdr *) VAR_6)->e_phnum = VAR_8 & 0xFFFFU;

 return (1);
}
