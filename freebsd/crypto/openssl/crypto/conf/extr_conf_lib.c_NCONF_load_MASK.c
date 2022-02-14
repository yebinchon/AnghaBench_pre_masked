
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* load ) (TYPE_2__*,char const*,long*) ;} ;
typedef TYPE_2__ CONF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,char const*,long*) ;

int FUNC_2(CONF *VAR_2, const char *VAR_3, long *VAR_4)
{
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return VAR_2->meth->load(VAR_2, VAR_3, VAR_4);
}
