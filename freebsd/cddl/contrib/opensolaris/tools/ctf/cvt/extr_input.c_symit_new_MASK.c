
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sh_link; int sh_size; int sh_entsize; } ;
struct TYPE_5__ {int si_nument; TYPE_4__ si_shdr; int * si_strd; int * si_symd; } ;
typedef TYPE_1__ symit_data_t ;
typedef int Elf_Scn ;
typedef int Elf ;


 void* FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char const*,char*) ;
 int * FUNC_4 (int *,TYPE_4__*) ;
 TYPE_1__* FUNC_5 (int) ;

symit_data_t *
FUNC_6(Elf *VAR_0, const char *VAR_1)
{
 symit_data_t *VAR_2;
 Elf_Scn *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_3(VAR_0, VAR_1, ".symtab")) < 0)
  return (((void*)0));

 VAR_2 = FUNC_5(sizeof (symit_data_t));

 if ((VAR_3 = FUNC_1(VAR_0, VAR_4)) == ((void*)0) ||
     FUNC_4(VAR_3, &VAR_2->si_shdr) == ((void*)0) ||
     (VAR_2->si_symd = FUNC_0(VAR_3, ((void*)0))) == ((void*)0))
  FUNC_2(VAR_1, "Cannot read .symtab");

 if ((VAR_3 = FUNC_1(VAR_0, VAR_2->si_shdr.sh_link)) == ((void*)0) ||
     (VAR_2->si_strd = FUNC_0(VAR_3, ((void*)0))) == ((void*)0))
  FUNC_2(VAR_1, "Cannot read strings for .symtab");

 VAR_2->si_nument = VAR_2->si_shdr.sh_size / VAR_2->si_shdr.sh_entsize;

 return (VAR_2);
}
