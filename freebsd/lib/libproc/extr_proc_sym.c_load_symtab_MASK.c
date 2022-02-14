
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int ;
struct symtab {int* index; int nsyms; int stridx; int * data; } ;
struct symsort_thunk {struct symtab* symtab; int * e; } ;
struct TYPE_3__ {scalar_t__ sh_type; int sh_size; int sh_entsize; int sh_link; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int GElf_Ehdr ;
typedef int Elf_Scn ;
typedef int Elf ;


 int* FUNC_0 (int,int) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int*,int,int,struct symsort_thunk*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(Elf *VAR_1, struct symtab *VAR_2, u_long VAR_3)
{
 GElf_Ehdr VAR_4;
 GElf_Shdr VAR_5;
 struct symsort_thunk VAR_6;
 Elf_Scn *VAR_7;
 u_int VAR_8;

 if (FUNC_3(VAR_1, &VAR_4) == ((void*)0))
  return (-1);

 VAR_7 = ((void*)0);
 while ((VAR_7 = FUNC_2(VAR_1, VAR_7)) != ((void*)0)) {
  (void)FUNC_4(VAR_7, &VAR_5);
  if (VAR_5.sh_type == VAR_3)
   break;
 }
 if (VAR_7 == ((void*)0))
  return (-1);

 VAR_8 = VAR_5.sh_size / VAR_5.sh_entsize;
 if (VAR_8 > (1 << 20))
  return (-1);

 if ((VAR_2->data = FUNC_1(VAR_7, ((void*)0))) == ((void*)0))
  return (-1);

 VAR_2->index = FUNC_0(VAR_8, sizeof(u_int));
 if (VAR_2->index == ((void*)0))
  return (-1);
 for (u_int VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  VAR_2->index[VAR_9] = VAR_9;
 VAR_2->nsyms = VAR_8;
 VAR_2->stridx = VAR_5.sh_link;

 VAR_6.e = VAR_1;
 VAR_6.symtab = VAR_2;
 FUNC_5(VAR_2->index, VAR_8, sizeof(u_int), &VAR_6, VAR_0);

 return (0);
}
