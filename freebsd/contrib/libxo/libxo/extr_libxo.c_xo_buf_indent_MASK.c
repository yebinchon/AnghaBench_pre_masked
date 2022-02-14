
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int xb_curp; } ;
struct TYPE_6__ {TYPE_2__ xo_data; } ;
typedef TYPE_1__ xo_handle_t ;
typedef TYPE_2__ xo_buffer_t ;


 int FUNC_0 (int,char,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (xo_handle_t *VAR_0, int VAR_1)
{
    xo_buffer_t *VAR_2 = &VAR_0->xo_data;

    if (VAR_1 <= 0)
 VAR_1 = FUNC_2(VAR_0);

    if (!FUNC_1(VAR_2, VAR_1))
 return;

    FUNC_0(VAR_2->xb_curp, ' ', VAR_1);
    VAR_2->xb_curp += VAR_1;
}
