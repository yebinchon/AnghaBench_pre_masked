
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int members; struct TYPE_3__* subtype; } ;
typedef TYPE_1__ Type ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static void FUNC_1(Type *VAR_0, const char *VAR_1)
{
    for(; VAR_0; VAR_0 = VAR_0->subtype)
 FUNC_0(VAR_0->members, VAR_1);
}
