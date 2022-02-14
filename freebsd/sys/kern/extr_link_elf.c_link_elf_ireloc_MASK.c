
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_file {scalar_t__ address; int * dynamic; int modptr; } ;
typedef struct elf_file* elf_file_t ;
typedef int caddr_t ;
typedef int Elf_Dyn ;


 int VAR_0 ;
 int FUNC_0 (struct elf_file*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct elf_file*) ;
 int FUNC_2 (struct elf_file*) ;
 int FUNC_3 (struct elf_file*,int ,int ,int) ;

void
FUNC_4(caddr_t VAR_3)
{
 struct elf_file VAR_4;
 elf_file_t VAR_5;

 VAR_5 = &VAR_4;

 FUNC_0(VAR_5, sizeof(*VAR_5));

 VAR_5->modptr = VAR_3;
 VAR_5->dynamic = (Elf_Dyn *)&VAR_0;
 FUNC_2(VAR_5);
 VAR_5->address = 0;
 FUNC_1(VAR_5);
 FUNC_3(VAR_5, VAR_1, VAR_2, 1);
}
