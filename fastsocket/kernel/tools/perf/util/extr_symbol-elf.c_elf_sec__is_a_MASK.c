
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum map_type { ____Placeholder_map_type } map_type ;
typedef int GElf_Shdr ;
typedef int Elf_Data ;




 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(GElf_Shdr *VAR_0, Elf_Data *VAR_1,
     enum map_type VAR_2)
{
 switch (VAR_2) {
 case 129:
  return FUNC_1(VAR_0, VAR_1);
 case 128:
  return FUNC_0(VAR_0, VAR_1);
 default:
  return 0;
 }
}
