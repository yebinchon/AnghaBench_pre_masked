
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RtldLockState ;
typedef scalar_t__ Elf_Addr ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__* FUNC_5 (int,int) ;

__attribute__((used)) static void *
FUNC_6(Elf_Addr **VAR_3, int VAR_4, size_t VAR_5)
{
    Elf_Addr *VAR_6, *VAR_7;
    RtldLockState VAR_8;
    int VAR_9;

    VAR_7 = *VAR_3;

    if (VAR_7[0] != VAR_1) {
 FUNC_4(VAR_0, &VAR_8);
 VAR_6 = FUNC_5(VAR_2 + 2, sizeof(Elf_Addr));
 VAR_9 = VAR_7[1];
 if (VAR_9 > VAR_2)
     VAR_9 = VAR_2;
 FUNC_3(&VAR_6[2], &VAR_7[2], VAR_9 * sizeof(Elf_Addr));
 VAR_6[0] = VAR_1;
 VAR_6[1] = VAR_2;
 FUNC_1(VAR_7);
 FUNC_2(VAR_0, &VAR_8);
 VAR_7 = *VAR_3 = VAR_6;
    }


    if (VAR_7[VAR_4 + 1] == 0) {

 FUNC_4(VAR_0, &VAR_8);
 if (!VAR_7[VAR_4 + 1])
     VAR_7[VAR_4 + 1] = (Elf_Addr)FUNC_0(VAR_4);
 FUNC_2(VAR_0, &VAR_8);
    }
    return ((void *)(VAR_7[VAR_4 + 1] + VAR_5));
}
