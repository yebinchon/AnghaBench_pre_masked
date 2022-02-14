
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ xb_bufp; scalar_t__ xb_curp; } ;
struct TYPE_6__ {TYPE_2__ xo_color_buf; } ;
typedef TYPE_1__ xo_handle_t ;
typedef TYPE_2__ xo_buffer_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (xo_handle_t *VAR_0)
{




    if (!FUNC_0(&VAR_0->xo_color_buf)) {
 xo_buffer_t *VAR_1 = &VAR_0->xo_color_buf;

 FUNC_1(VAR_0, VAR_1->xb_bufp, VAR_1->xb_curp - VAR_1->xb_bufp);
    }
}
