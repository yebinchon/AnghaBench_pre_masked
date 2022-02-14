
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_5__ {char* dn_spec; int * dn_desc; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_6__ {int pcb_sargv; int pcb_sargc; int pcb_pspec; int pcb_jmpbuf; int * pcb_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,char*,int ,int ,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int ,char*,char*,int ) ;
 TYPE_2__* VAR_3 ;

dt_node_t *
FUNC_8(char *VAR_4)
{
 dtrace_hdl_t *VAR_5 = VAR_3->pcb_hdl;
 dt_node_t *VAR_6;

 if (VAR_4 == ((void*)0))
  FUNC_5(VAR_3->pcb_jmpbuf, VAR_2);

 VAR_6 = FUNC_0(VAR_0);
 VAR_6->dn_spec = VAR_4;
 VAR_6->dn_desc = FUNC_6(sizeof (dtrace_probedesc_t));

 if (VAR_6->dn_desc == ((void*)0))
  FUNC_5(VAR_3->pcb_jmpbuf, VAR_2);

 if (FUNC_3(VAR_5, VAR_3->pcb_pspec, VAR_6->dn_spec,
     VAR_3->pcb_sargc, VAR_3->pcb_sargv, VAR_6->dn_desc) != 0) {
  FUNC_7(VAR_1, "invalid probe description \"%s\": %s\n",
      VAR_6->dn_spec, FUNC_1(VAR_5, FUNC_2(VAR_5)));
 }

 FUNC_4(VAR_6->dn_spec);
 VAR_6->dn_spec = ((void*)0);

 return (VAR_6);
}
