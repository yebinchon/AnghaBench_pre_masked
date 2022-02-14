
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
typedef int u_longlong_t ;
typedef int dtrace_probedesc_t ;
typedef int dtrace_id_t ;
typedef int dtrace_hdl_t ;
struct TYPE_5__ {int * dn_desc; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_6__ {size_t pcb_pspec; int pcb_jmpbuf; int * pcb_hdl; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 (int ) ;
 char const* const FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ,...) ;
 TYPE_2__* VAR_5 ;

dt_node_t *
FUNC_7(uintmax_t VAR_6)
{
 static const char *const VAR_7[] = {
  "providers", "modules", "functions"
 };

 dtrace_hdl_t *VAR_8 = VAR_5->pcb_hdl;
 dt_node_t *VAR_9 = FUNC_0(VAR_1);

 if ((VAR_9->dn_desc = FUNC_5(sizeof (dtrace_probedesc_t))) == ((void*)0))
  FUNC_4(VAR_5->pcb_jmpbuf, VAR_3);

 if (VAR_6 > VAR_4) {
  FUNC_6(VAR_2, "identifier %llu exceeds maximum "
      "probe id\n", (u_longlong_t)VAR_6);
 }

 if (VAR_5->pcb_pspec != VAR_0) {
  FUNC_6(VAR_2, "probe identifier %llu not permitted "
      "when specifying %s\n", (u_longlong_t)VAR_6,
      VAR_7[VAR_5->pcb_pspec]);
 }

 if (FUNC_3(VAR_8, (dtrace_id_t)VAR_6, VAR_9->dn_desc) != 0) {
  FUNC_6(VAR_2, "invalid probe identifier %llu: %s\n",
      (u_longlong_t)VAR_6, FUNC_1(VAR_8, FUNC_2(VAR_8)));
 }

 return (VAR_9);
}
