
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dl_phdr_info {int dummy; } ;
typedef int RtldLockState ;
typedef int Obj_Entry ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (void const*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int const*,struct dl_phdr_info*) ;

int
FUNC_5(const void *VAR_1, struct dl_phdr_info *VAR_2)
{
    const Obj_Entry *VAR_3;
    RtldLockState VAR_4;

    FUNC_3(VAR_0, &VAR_4);
    VAR_3 = FUNC_2(VAR_1);
    if (VAR_3 == ((void*)0)) {
        FUNC_0("No shared object contains address");
 FUNC_1(VAR_0, &VAR_4);
        return (0);
    }
    FUNC_4(VAR_3, VAR_2);
    FUNC_1(VAR_0, &VAR_4);
    return (1);
}
