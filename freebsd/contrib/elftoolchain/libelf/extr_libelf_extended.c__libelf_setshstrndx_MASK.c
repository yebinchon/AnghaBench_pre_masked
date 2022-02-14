
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


struct TYPE_14__ {size_t e_shstrndx; } ;
struct TYPE_13__ {size_t e_shstrndx; } ;
struct TYPE_10__ {size_t sh_link; } ;
struct TYPE_9__ {size_t sh_link; } ;
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
 size_t VAR_5 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;

int
FUNC_3(Elf *VAR_6, void *VAR_7, int VAR_8, size_t VAR_9)
{
 Elf_Scn *VAR_10;

 if (VAR_9 >= VAR_3) {
  if ((VAR_10 = FUNC_0(VAR_6)) == ((void*)0))
   return (0);

  FUNC_1(VAR_10->s_ndx == VAR_4);

  if (VAR_8 == VAR_0)
   VAR_10->s_shdr.s_shdr32.sh_link = VAR_9;
  else
   VAR_10->s_shdr.s_shdr64.sh_link = VAR_9;

  (void) FUNC_2(VAR_10, VAR_1, VAR_2);

  VAR_9 = VAR_5;
 }

 if (VAR_8 == VAR_0)
  ((Elf32_Ehdr *) VAR_7)->e_shstrndx = VAR_9 & 0xFFFFU;
 else
  ((Elf64_Ehdr *) VAR_7)->e_shstrndx = VAR_9 & 0xFFFFU;

 return (1);
}
