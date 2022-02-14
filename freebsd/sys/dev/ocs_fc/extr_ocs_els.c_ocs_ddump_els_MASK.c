
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ocs_textbuf_t ;
struct TYPE_4__ {int els_active; int els_pend; int els_evtdepth; int els_req_free; } ;
typedef TYPE_1__ ocs_io_t ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,char*,int ) ;

void
FUNC_4(ocs_textbuf_t *VAR_0, ocs_io_t *VAR_1)
{
 FUNC_2(VAR_0, "els", -1);
 FUNC_3(VAR_0, "req_free", "%d", VAR_1->els_req_free);
 FUNC_3(VAR_0, "evtdepth", "%d", VAR_1->els_evtdepth);
 FUNC_3(VAR_0, "pend", "%d", VAR_1->els_pend);
 FUNC_3(VAR_0, "active", "%d", VAR_1->els_active);
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, "els", -1);
}
