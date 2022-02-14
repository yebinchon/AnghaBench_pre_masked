
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


typedef int uint_t ;
typedef int n ;
struct TYPE_13__ {int dd_type; int * dd_ctfp; } ;
typedef TYPE_5__ dt_decl_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_12__ {int * ds_next; } ;
struct TYPE_14__ {scalar_t__ pcb_idepth; TYPE_4__ pcb_dstack; TYPE_3__* pcb_hdl; } ;
struct TYPE_11__ {TYPE_2__* dt_ddefs; TYPE_1__* dt_cdefs; } ;
struct TYPE_10__ {int * dm_ctfp; } ;
struct TYPE_9__ {int * dm_ctfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int VAR_7 ;
 TYPE_5__* FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int FUNC_8 (int ,char*,char*,...) ;
 TYPE_6__* VAR_8 ;

dt_decl_t *
FUNC_9(char *VAR_9)
{
 dt_decl_t *VAR_10 = FUNC_5(VAR_3, VAR_9);
 char VAR_11[VAR_4];
 ctf_file_t *VAR_12;
 ctf_id_t VAR_13;
 uint_t VAR_14;

 if (VAR_8->pcb_idepth != 0)
  VAR_12 = VAR_8->pcb_hdl->dt_cdefs->dm_ctfp;
 else
  VAR_12 = VAR_8->pcb_hdl->dt_ddefs->dm_ctfp;

 if (VAR_8->pcb_dstack.ds_next != ((void*)0))
  VAR_14 = VAR_0;
 else
  VAR_14 = VAR_1;

 (void) FUNC_7(VAR_11, sizeof (VAR_11), "enum %s", VAR_9 ? VAR_9 : "(anon)");

 if (VAR_9 != ((void*)0) && (VAR_13 = FUNC_4(VAR_12, VAR_11)) != VAR_2) {
  if (FUNC_1(VAR_12, VAR_13, VAR_7, ((void*)0)))
   FUNC_8(VAR_5, "type redeclared: %s\n", VAR_11);
 } else if ((VAR_13 = FUNC_0(VAR_12, VAR_14, VAR_9)) == VAR_2) {
  FUNC_8(VAR_6, "failed to define %s: %s\n",
      VAR_11, FUNC_2(FUNC_3(VAR_12)));
 }

 VAR_10->dd_ctfp = VAR_12;
 VAR_10->dd_type = VAR_13;

 FUNC_6(VAR_12, VAR_13);
 return (VAR_10);
}
