
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_3__ {scalar_t__ dbu_err; scalar_t__ dbu_len; int * dbu_ptr; void* dbu_buf; } ;
typedef TYPE_1__ dt_buf_t ;


 int FUNC_0 (int *,void*) ;

void *
FUNC_1(dtrace_hdl_t *VAR_0, dt_buf_t *VAR_1)
{
 void *VAR_2 = VAR_1->dbu_buf;

 if (VAR_1->dbu_err != 0) {
  FUNC_0(VAR_0, VAR_2);
  VAR_2 = ((void*)0);
 }

 VAR_1->dbu_buf = VAR_1->dbu_ptr = ((void*)0);
 VAR_1->dbu_len = 0;

 return (VAR_2);
}
