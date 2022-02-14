
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int xo_xof_flags_t ;
typedef void* xo_style_t ;
struct TYPE_7__ {void* xo_style; } ;
typedef TYPE_1__ xo_handle_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int) ;

xo_handle_t *
FUNC_4 (xo_style_t VAR_0, xo_xof_flags_t VAR_1)
{
    xo_handle_t *VAR_2 = FUNC_3(((void*)0), sizeof(*VAR_2));

    if (VAR_2) {
 FUNC_1(VAR_2, sizeof(*VAR_2));

 VAR_2->xo_style = VAR_0;
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_2);
 VAR_2->xo_style = VAR_0;
    }

    return VAR_2;
}
