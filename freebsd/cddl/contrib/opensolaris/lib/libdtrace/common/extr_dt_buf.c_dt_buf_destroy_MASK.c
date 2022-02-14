
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong_t ;
typedef int dtrace_hdl_t ;
struct TYPE_3__ {int dbu_buf; int dbu_resizes; scalar_t__ dbu_len; int dbu_name; } ;
typedef TYPE_1__ dt_buf_t ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(dtrace_hdl_t *VAR_0, dt_buf_t *VAR_1)
{
 FUNC_0("dt_buf_destroy(%s): size=%lu resizes=%u\n",
     VAR_1->dbu_name, (ulong_t)VAR_1->dbu_len, VAR_1->dbu_resizes);

 FUNC_1(VAR_0, VAR_1->dbu_buf);
}
