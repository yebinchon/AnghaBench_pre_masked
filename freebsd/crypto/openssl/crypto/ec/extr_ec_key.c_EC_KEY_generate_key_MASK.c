
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; int * group; } ;
struct TYPE_5__ {int (* keygen ) (TYPE_2__*) ;} ;
typedef TYPE_2__ EC_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(EC_KEY *VAR_3)
{
    if (VAR_3 == ((void*)0) || VAR_3->group == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    if (VAR_3->meth->keygen != ((void*)0))
        return VAR_3->meth->keygen(VAR_3);
    FUNC_0(VAR_0, VAR_1);
    return 0;
}
