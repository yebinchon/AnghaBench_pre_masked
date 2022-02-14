
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ xe_dlhandle; } ;
typedef TYPE_1__ xo_encoder_node_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void
FUNC_6 (void)
{
    xo_encoder_node_t *VAR_3;

    FUNC_3();

    for (;;) {
 VAR_3 = FUNC_0(&VAR_2);
        if (VAR_3 == ((void*)0))
            break;

        FUNC_1(&VAR_2, VAR_3, VAR_0);

 if (VAR_3->xe_dlhandle)
     FUNC_2(VAR_3->xe_dlhandle);

 FUNC_4(VAR_3);
    }

    FUNC_5(&VAR_1);
}
