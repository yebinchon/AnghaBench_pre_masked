
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; int arg; int (* fn ) (TYPE_1__ const*,int ) ;} ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ OBJ_NAME ;
typedef TYPE_2__ OBJ_DOALL ;


 int FUNC_0 (TYPE_1__ const*,int ) ;

__attribute__((used)) static void FUNC_1(const OBJ_NAME *VAR_0, OBJ_DOALL *VAR_1)
{
    if (VAR_0->type == VAR_1->type)
        VAR_1->fn(VAR_0, VAR_1->arg);
}
