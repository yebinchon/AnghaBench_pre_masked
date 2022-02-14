
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Obj_Entry ;
typedef int Elf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (int *,int ,int,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,void**) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (uintptr_t) ;

void
FUNC_4(Obj_Entry *VAR_7)
{
 void *VAR_8;






 VAR_6 = VAR_5 + VAR_3;

 VAR_8 = FUNC_1(VAR_7, 0, 3 * sizeof(Elf_Addr), sizeof(Elf_Addr));
 if (FUNC_0() >= VAR_2 &&
     (VAR_4 & VAR_1) != 0)
  FUNC_3((uintptr_t)VAR_8);
 else
  FUNC_2(VAR_0, &VAR_8);
}
