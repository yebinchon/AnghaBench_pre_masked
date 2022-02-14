
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct symtab {int nsyms; int stridx; int * index; int * data; } ;
struct TYPE_4__ {uintptr_t st_value; uintptr_t st_size; int st_name; } ;
typedef TYPE_1__ GElf_Sym ;
typedef int Elf_Data ;
typedef int Elf ;


 int VAR_0 ;
 char* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(Elf *VAR_1, struct symtab *VAR_2, uintptr_t VAR_3,
    const char **VAR_4, GElf_Sym *VAR_5)
{
 GElf_Sym VAR_6;
 Elf_Data *VAR_7;
 const char *VAR_8;
 u_int VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_2->nsyms == 0)
  return (VAR_0);

 VAR_7 = VAR_2->data;
 VAR_10 = 0;
 VAR_11 = VAR_2->nsyms - 1;

 while (VAR_10 <= VAR_11) {
  VAR_12 = (VAR_11 + VAR_10) / 2;
  (void)FUNC_1(VAR_7, VAR_2->index[VAR_12], &VAR_6);
  if (VAR_3 >= VAR_6.st_value && VAR_3 < VAR_6.st_value + VAR_6.st_size)
   break;

  if (VAR_3 < VAR_6.st_value)
   VAR_11 = VAR_12 - 1;
  else
   VAR_10 = VAR_12 + 1;
 }
 if (VAR_10 > VAR_11)
  return (VAR_0);




 for (VAR_9 = VAR_12; VAR_9 < VAR_2->nsyms; VAR_9++) {
  (void)FUNC_1(VAR_7, VAR_2->index[VAR_9], &VAR_6);
  if (VAR_3 < VAR_6.st_value || VAR_3 >= VAR_6.st_value + VAR_6.st_size)
   break;
 }
 (void)FUNC_1(VAR_7, VAR_2->index[VAR_9 - 1], VAR_5);
 VAR_8 = FUNC_0(VAR_1, VAR_2->stridx, VAR_5->st_name);
 if (VAR_8 != ((void*)0) && VAR_4 != ((void*)0))
  *VAR_4 = VAR_8;
 return (0);
}
