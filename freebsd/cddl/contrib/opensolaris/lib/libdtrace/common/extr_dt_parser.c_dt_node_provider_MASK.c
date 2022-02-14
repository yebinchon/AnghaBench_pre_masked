
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_9__ {char* dn_provname; TYPE_3__* dn_provider; struct TYPE_9__* dn_link; int dn_provred; struct TYPE_9__* dn_probes; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_11__ {TYPE_1__* pv_nodes; int pv_flags; } ;
struct TYPE_10__ {TYPE_1__* pcb_list; int pcb_jmpbuf; int * pcb_hdl; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,char*,...) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *,char*) ;
 TYPE_3__* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (char*,char) ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 TYPE_2__* VAR_7 ;

dt_node_t *
FUNC_9(char *VAR_8, dt_node_t *VAR_9)
{
 dtrace_hdl_t *VAR_10 = VAR_7->pcb_hdl;
 dt_node_t *VAR_11 = FUNC_1(VAR_2);
 dt_node_t *VAR_12;
 size_t VAR_13;

 VAR_11->dn_provname = VAR_8;
 VAR_11->dn_probes = VAR_9;

 if (FUNC_6(VAR_8, '`') != ((void*)0)) {
  FUNC_0(VAR_11, VAR_4, "provider name may not "
      "contain scoping operator: %s\n", VAR_8);
 }

 if ((VAR_13 = FUNC_7(VAR_8)) >= VAR_1) {
  FUNC_0(VAR_11, VAR_4, "provider name may not exceed %d "
      "characters: %s\n", VAR_1 - 1, VAR_8);
 }

 if (FUNC_4(VAR_8[VAR_13 - 1])) {
  FUNC_0(VAR_11, VAR_4, "provider name may not "
      "end with a digit: %s\n", VAR_8);
 }







 if ((VAR_11->dn_provider = FUNC_3(VAR_10, VAR_8)) != ((void*)0))
  VAR_11->dn_provred = VAR_0;
 else if ((VAR_11->dn_provider = FUNC_2(VAR_10, VAR_8)) == ((void*)0))
  FUNC_5(VAR_7->pcb_jmpbuf, VAR_5);
 else
  VAR_11->dn_provider->pv_flags |= VAR_3;
 for (VAR_12 = VAR_7->pcb_list; VAR_12->dn_link != ((void*)0); VAR_12 = VAR_12->dn_link)
  continue;

 VAR_12->dn_link = VAR_11->dn_provider->pv_nodes;
 VAR_11->dn_provider->pv_nodes = VAR_7->pcb_list;

 FUNC_8(VAR_6);
 return (VAR_11);
}
