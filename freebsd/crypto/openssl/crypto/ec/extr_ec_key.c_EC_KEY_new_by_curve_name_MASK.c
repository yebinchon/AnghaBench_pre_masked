
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * group; TYPE_1__* meth; } ;
struct TYPE_7__ {scalar_t__ (* set_group ) (TYPE_2__*,int *) ;} ;
typedef TYPE_2__ EC_KEY ;


 int * FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;

EC_KEY *FUNC_4(int VAR_0)
{
    EC_KEY *VAR_1 = FUNC_2();
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    VAR_1->group = FUNC_0(VAR_0);
    if (VAR_1->group == ((void*)0)) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }
    if (VAR_1->meth->set_group != ((void*)0)
        && VAR_1->meth->set_group(VAR_1, VAR_1->group) == 0) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
