
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xe_handler; } ;
typedef TYPE_1__ xo_encoder_node_t ;
typedef int xo_encoder_func_t ;


 TYPE_1__* FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (char const*) ;
 int FUNC_2 () ;

void
FUNC_3 (const char *VAR_0, xo_encoder_func_t VAR_1)
{
    FUNC_2();

    xo_encoder_node_t *VAR_2 = FUNC_0(VAR_0);

    if (VAR_2)
 return;

    VAR_2 = FUNC_1(VAR_0);
    if (VAR_2)
 VAR_2->xe_handler = VAR_1;
}
