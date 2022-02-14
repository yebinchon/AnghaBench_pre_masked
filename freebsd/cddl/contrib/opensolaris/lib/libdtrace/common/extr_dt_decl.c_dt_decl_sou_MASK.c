
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int n ;
struct TYPE_13__ {scalar_t__ dd_type; int * dd_ctfp; } ;
typedef TYPE_5__ dt_decl_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_12__ {int * ds_next; } ;
struct TYPE_14__ {scalar_t__ pcb_idepth; TYPE_4__ pcb_dstack; TYPE_3__* pcb_hdl; } ;
struct TYPE_11__ {TYPE_2__* dt_ddefs; TYPE_1__* dt_cdefs; } ;
struct TYPE_10__ {int * dm_ctfp; } ;
struct TYPE_9__ {int * dm_ctfp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_5__* FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (char*,int,char*,char*,char*) ;
 int FUNC_10 (int ,char*,char*,...) ;
 TYPE_6__* VAR_8 ;

dt_decl_t *
FUNC_11(uint_t VAR_9, char *VAR_10)
{
 dt_decl_t *VAR_11 = FUNC_7(VAR_9, VAR_10);
 char VAR_12[VAR_5];
 ctf_file_t *VAR_13;
 ctf_id_t VAR_14;
 uint_t VAR_15;

 if (VAR_8->pcb_idepth != 0)
  VAR_13 = VAR_8->pcb_hdl->dt_cdefs->dm_ctfp;
 else
  VAR_13 = VAR_8->pcb_hdl->dt_ddefs->dm_ctfp;

 if (VAR_8->pcb_dstack.ds_next != ((void*)0))
  VAR_15 = VAR_0;
 else
  VAR_15 = VAR_1;

 (void) FUNC_9(VAR_12, sizeof (VAR_12), "%s %s",
     VAR_9 == VAR_4 ? "struct" : "union",
     VAR_10 == ((void*)0) ? "(anon)" : VAR_10);

 if (VAR_10 != ((void*)0) && (VAR_14 = FUNC_4(VAR_13, VAR_12)) != VAR_2 &&
     FUNC_5(VAR_13, VAR_14) != VAR_3)
  FUNC_10(VAR_6, "type redeclared: %s\n", VAR_12);

 if (VAR_9 == VAR_4)
  VAR_14 = FUNC_0(VAR_13, VAR_15, VAR_10);
 else
  VAR_14 = FUNC_1(VAR_13, VAR_15, VAR_10);

 if (VAR_14 == VAR_2 || FUNC_6(VAR_13) == VAR_2) {
  FUNC_10(VAR_7, "failed to define %s: %s\n",
      VAR_12, FUNC_2(FUNC_3(VAR_13)));
 }

 VAR_11->dd_ctfp = VAR_13;
 VAR_11->dd_type = VAR_14;

 FUNC_8(VAR_13, VAR_14);
 return (VAR_11);
}
