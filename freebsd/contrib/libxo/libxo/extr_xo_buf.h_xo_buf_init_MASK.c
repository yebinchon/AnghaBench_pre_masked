
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xb_bufp; int xb_curp; int xb_size; } ;
typedef TYPE_1__ xo_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void
FUNC_1 (xo_buffer_t *VAR_1)
{
    VAR_1->xb_size = VAR_0;
    VAR_1->xb_bufp = FUNC_0(((void*)0), VAR_1->xb_size);
    VAR_1->xb_curp = VAR_1->xb_bufp;
}
