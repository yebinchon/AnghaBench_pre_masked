
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Libelf_Data {int * d_scn; } ;
typedef int Elf_Scn ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct _Libelf_Data* FUNC_1 (size_t,int) ;

struct _Libelf_Data *
FUNC_2(Elf_Scn *VAR_1)
{
 struct _Libelf_Data *VAR_2;

 if ((VAR_2 = FUNC_1((size_t) 1, sizeof(*VAR_2))) == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 VAR_2->d_scn = VAR_1;

 return (VAR_2);
}
