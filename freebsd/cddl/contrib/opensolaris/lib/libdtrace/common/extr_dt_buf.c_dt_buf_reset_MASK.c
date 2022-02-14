
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_4__ {int dbu_len; int dbu_name; scalar_t__ dbu_err; int * dbu_buf; int * dbu_ptr; } ;
typedef TYPE_1__ dt_buf_t ;


 int FUNC_0 (int *,TYPE_1__*,int ,int ) ;

void
FUNC_1(dtrace_hdl_t *VAR_0, dt_buf_t *VAR_1)
{
 if ((VAR_1->dbu_ptr = VAR_1->dbu_buf) != ((void*)0))
  VAR_1->dbu_err = 0;
 else
  FUNC_0(VAR_0, VAR_1, VAR_1->dbu_name, VAR_1->dbu_len);
}
