
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {long flags; TYPE_1__* meth; } ;
struct TYPE_5__ {long (* dso_ctrl ) (TYPE_2__*,int,long,void*) ;} ;
typedef TYPE_2__ DSO ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 long FUNC_1 (TYPE_2__*,int,long,void*) ;

long FUNC_2(DSO *VAR_3, int VAR_4, long VAR_5, void *VAR_6)
{
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return -1;
    }




    switch (VAR_4) {
    case 130:
        return VAR_3->flags;
    case 128:
        VAR_3->flags = (int)VAR_5;
        return 0;
    case 129:
        VAR_3->flags |= (int)VAR_5;
        return 0;
    default:
        break;
    }
    if ((VAR_3->meth == ((void*)0)) || (VAR_3->meth->dso_ctrl == ((void*)0))) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }
    return VAR_3->meth->dso_ctrl(VAR_3, VAR_4, VAR_5, VAR_6);
}
