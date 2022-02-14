
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_3__ {size_t dbu_len; char const* dbu_name; scalar_t__ dbu_resizes; scalar_t__ dbu_err; int * dbu_buf; int * dbu_ptr; } ;
typedef TYPE_1__ dt_buf_t ;


 size_t VAR_0 ;
 int * FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(dtrace_hdl_t *VAR_1, dt_buf_t *VAR_2, const char *VAR_3, size_t VAR_4)
{
 if (VAR_4 == 0)
  VAR_4 = VAR_0;

 VAR_2->dbu_buf = VAR_2->dbu_ptr = FUNC_0(VAR_1, VAR_4);
 VAR_2->dbu_len = VAR_4;

 if (VAR_2->dbu_buf == ((void*)0))
  VAR_2->dbu_err = FUNC_1(VAR_1);
 else
  VAR_2->dbu_err = 0;

 VAR_2->dbu_resizes = 0;
 VAR_2->dbu_name = VAR_3;
}
