
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dt_buffered_size; scalar_t__ dt_buffered_offs; int * dt_buffered_buf; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(dtrace_hdl_t *VAR_0)
{
 FUNC_0(VAR_0->dt_buffered_buf);
 VAR_0->dt_buffered_buf = ((void*)0);
 VAR_0->dt_buffered_offs = 0;
 VAR_0->dt_buffered_size = 0;
}
