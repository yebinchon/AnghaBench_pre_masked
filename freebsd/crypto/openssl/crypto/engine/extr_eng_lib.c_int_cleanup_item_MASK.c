
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cb; } ;
typedef TYPE_1__ ENGINE_CLEANUP_ITEM ;
typedef int ENGINE_CLEANUP_CB ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static ENGINE_CLEANUP_ITEM *FUNC_2(ENGINE_CLEANUP_CB *VAR_2)
{
    ENGINE_CLEANUP_ITEM *VAR_3;

    if ((VAR_3 = FUNC_1(sizeof(*VAR_3))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_3->cb = VAR_2;
    return VAR_3;
}
