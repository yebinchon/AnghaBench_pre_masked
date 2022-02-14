
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(int VAR_3)
{
 GElf_Ehdr VAR_4;
 Elf *VAR_5;
 int VAR_6;

 VAR_6 = VAR_1;

 if ((VAR_5 = FUNC_0(VAR_3, VAR_2, ((void*)0))) == ((void*)0))
  goto out;
 if (FUNC_2(VAR_5, &VAR_4) == ((void*)0))
  goto out;
 VAR_6 = VAR_4.e_ident[VAR_0];
out:
 (void)FUNC_1(VAR_5);
 return (VAR_6);
}
