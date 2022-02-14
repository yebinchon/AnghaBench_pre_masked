
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * info; int * id; } ;
typedef TYPE_1__ SRP_user_pwd ;


 void* FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(SRP_user_pwd *VAR_0, const char *VAR_1,
                                const char *VAR_2)
{
    if (VAR_1 != ((void*)0) && ((void*)0) == (VAR_0->id = FUNC_0(VAR_1)))
        return 0;
    return (VAR_2 == ((void*)0) || ((void*)0) != (VAR_0->info = FUNC_0(VAR_2)));
}
