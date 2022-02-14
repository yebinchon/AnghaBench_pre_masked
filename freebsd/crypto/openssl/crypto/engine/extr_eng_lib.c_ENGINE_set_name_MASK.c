
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; } ;
typedef TYPE_1__ ENGINE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

int FUNC_1(ENGINE *VAR_2, const char *VAR_3)
{
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_2->name = VAR_3;
    return 1;
}
