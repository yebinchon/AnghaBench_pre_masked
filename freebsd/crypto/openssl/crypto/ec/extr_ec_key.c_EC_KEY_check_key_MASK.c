
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* group; int * pub_key; } ;
struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* keycheck ) (TYPE_3__ const*) ;} ;
typedef TYPE_3__ EC_KEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__ const*) ;

int FUNC_2(const EC_KEY *VAR_3)
{
    if (VAR_3 == ((void*)0) || VAR_3->group == ((void*)0) || VAR_3->pub_key == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_3->group->meth->keycheck == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    return VAR_3->group->meth->keycheck(VAR_3);
}
