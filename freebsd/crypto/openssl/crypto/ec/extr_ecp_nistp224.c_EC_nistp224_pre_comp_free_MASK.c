
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int references; } ;
typedef TYPE_1__ NISTP224_PRE_COMP ;


 int FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int VAR_0 ;

void FUNC_5(NISTP224_PRE_COMP *VAR_1)
{
    int VAR_2;

    if (VAR_1 == ((void*)0))
        return;

    FUNC_0(&VAR_1->references, &VAR_2, VAR_1->lock);
    FUNC_4("EC_nistp224", VAR_0);
    if (VAR_2 > 0)
        return;
    FUNC_3(VAR_2 < 0);

    FUNC_1(VAR_1->lock);
    FUNC_2(VAR_1);
}
