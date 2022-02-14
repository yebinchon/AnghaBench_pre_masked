
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ w_fename; int w_start; int * w_fe; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_5(void)
{

    if (VAR_1->w_fename == 0) {
 FUNC_1(&VAR_1->w_start);
 return;
    }





    if (!VAR_1->w_fe[1]) {
 FUNC_2(((void*)0), ((void*)0));
 return;
    }
    FUNC_4(VAR_1->w_fename, FUNC_3(FUNC_0(*VAR_1->w_fe++)), VAR_0);
    FUNC_1(&VAR_1->w_start);
}
