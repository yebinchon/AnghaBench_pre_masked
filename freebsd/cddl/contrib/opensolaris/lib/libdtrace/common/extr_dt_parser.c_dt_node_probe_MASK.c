
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int dt_gen; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_14__ {int * dn_ident; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_15__ {int pcb_jmpbuf; TYPE_1__* pcb_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,char*,int) ;
 int * FUNC_2 (char*,int ,int ,int ,int ,int ,int *,int *,int ) ;
 int VAR_12 ;
 TYPE_2__* FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_1__*,int *,int,TYPE_2__*,int,TYPE_2__*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,size_t,char*,char*) ;
 int * FUNC_8 (char*,char) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*,...) ;
 TYPE_3__* VAR_13 ;

dt_node_t *
FUNC_12(char *VAR_14, int VAR_15, dt_node_t *VAR_16, dt_node_t *VAR_17)
{
 dtrace_hdl_t *VAR_18 = VAR_13->pcb_hdl;
 int VAR_19, VAR_20;
 dt_node_t *VAR_21;

 size_t VAR_22 = FUNC_10(VAR_14) + 3;
 char *VAR_23 = FUNC_0(VAR_22);

 (void) FUNC_7(VAR_23, VAR_22, "::%s", VAR_14);
 (void) FUNC_9(VAR_23);
 FUNC_5(VAR_14);

 if (FUNC_8(VAR_23, '`') != ((void*)0)) {
  FUNC_11(VAR_7, "probe name may not "
      "contain scoping operator: %s\n", VAR_23);
 }

 if (FUNC_10(VAR_23) - 2 >= VAR_1) {
  FUNC_11(VAR_7, "probe name may not exceed %d "
      "characters: %s\n", VAR_1 - 1, VAR_23);
 }

 VAR_21 = FUNC_3(VAR_6);

 VAR_21->dn_ident = FUNC_2(VAR_23, VAR_4,
     VAR_5, VAR_0, VAR_11, 0,
     &VAR_12, ((void*)0), VAR_18->dt_gen);

 VAR_19 = FUNC_1(VAR_16, VAR_16,
     "probe input", VAR_3 | VAR_2);

 VAR_20 = FUNC_1(VAR_17, VAR_16,
     "probe output", VAR_3);

 if (VAR_19 > VAR_10) {
  FUNC_11(VAR_8, "probe %s input prototype exceeds %u "
      "parameters: %d params used\n", VAR_23, VAR_10, VAR_19);
 }

 if (VAR_20 > VAR_10) {
  FUNC_11(VAR_8, "probe %s output prototype exceeds %u "
      "parameters: %d params used\n", VAR_23, VAR_10, VAR_20);
 }

 if (VAR_21->dn_ident == ((void*)0) || FUNC_4(VAR_18,
     VAR_21->dn_ident, VAR_15, VAR_16, VAR_19, VAR_17, VAR_20) == ((void*)0))
  FUNC_6(VAR_13->pcb_jmpbuf, VAR_9);

 return (VAR_21);
}
