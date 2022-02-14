
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int name; } ;
typedef TYPE_1__ OBJ_NAME ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(OBJ_NAME *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;

    if (VAR_0 < 0 || VAR_0 == VAR_1->type)
        FUNC_0(VAR_1->name, VAR_1->type);
}
