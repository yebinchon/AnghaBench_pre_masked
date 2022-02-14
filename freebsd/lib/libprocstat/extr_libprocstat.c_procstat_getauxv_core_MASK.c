
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_core {int dummy; } ;
typedef int Elf_Auxinfo ;


 int VAR_0 ;
 int * FUNC_0 (struct procstat_core*,int ,int *,size_t*) ;

__attribute__((used)) static Elf_Auxinfo *
FUNC_1(struct procstat_core *VAR_1, unsigned int *VAR_2)
{
 Elf_Auxinfo *VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_0, ((void*)0), &VAR_4);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 *VAR_2 = VAR_4 / sizeof(Elf_Auxinfo);
 return (VAR_3);
}
