
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_5__ {scalar_t__ dbu_err; scalar_t__ dbu_buf; scalar_t__ dbu_ptr; } ;
typedef TYPE_1__ dt_buf_t ;


 int FUNC_0 (int *,TYPE_1__*,scalar_t__,size_t,size_t) ;
 int FUNC_1 (int *,scalar_t__) ;

void
FUNC_2(dtrace_hdl_t *VAR_0, dt_buf_t *VAR_1,
    const dt_buf_t *VAR_2, size_t VAR_3)
{
 if (VAR_1->dbu_err == 0 && VAR_2->dbu_err != 0) {
  (void) FUNC_1(VAR_0, VAR_2->dbu_err);
  VAR_1->dbu_err = VAR_2->dbu_err;
 } else {
  FUNC_0(VAR_0, VAR_1, VAR_2->dbu_buf,
      (size_t)(VAR_2->dbu_ptr - VAR_2->dbu_buf), VAR_3);
 }
}
