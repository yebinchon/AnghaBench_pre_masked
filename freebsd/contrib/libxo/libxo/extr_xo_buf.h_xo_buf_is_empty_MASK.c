
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ xb_curp; scalar_t__ xb_bufp; } ;
typedef TYPE_1__ xo_buffer_t ;



__attribute__((used)) static inline int
FUNC_0 (xo_buffer_t *VAR_0)
{
    return (VAR_0->xb_curp == VAR_0->xb_bufp);
}
