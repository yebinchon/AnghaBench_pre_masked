
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_21__ {int active_ios_lock; int els_io_pend_list; int io_alloc_failed_count; int io_alloc_enabled; struct TYPE_21__* xport; struct TYPE_21__* ocs; } ;
typedef TYPE_3__ ocs_xport_t ;
typedef TYPE_3__ ocs_t ;
typedef TYPE_3__ ocs_node_t ;
struct TYPE_23__ {TYPE_6__* app; } ;
struct TYPE_20__ {scalar_t__ size; } ;
struct TYPE_19__ {scalar_t__ size; } ;
struct TYPE_22__ {char* display_name; int els_pend; scalar_t__ els_active; scalar_t__ els_evtdepth; int els_retries_remaining; TYPE_8__ els_sm; TYPE_2__ els_rsp; TYPE_1__ els_req; int io_type; TYPE_3__* node; TYPE_3__* ocs; int * hio; void* cmd_tgt; void* cmd_ini; int ref; } ;
typedef TYPE_6__ ocs_io_t ;
typedef int ocs_els_role_e ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_6__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_4 (int *,TYPE_6__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,char*,...) ;
 int FUNC_8 (TYPE_8__*,int ,int) ;
 int FUNC_9 (int *,int ,TYPE_6__*) ;
 int FUNC_10 (int *) ;

ocs_io_t *
FUNC_11(ocs_node_t *VAR_7, uint32_t VAR_8, uint32_t VAR_9, ocs_els_role_e VAR_10)
{

 ocs_t *VAR_11;
 ocs_xport_t *VAR_12;
 ocs_io_t *VAR_13;
 FUNC_0(VAR_7, ((void*)0));
 FUNC_0(VAR_7->ocs, ((void*)0));
 VAR_11 = VAR_7->ocs;
 FUNC_0(VAR_11->xport, ((void*)0));
 VAR_12 = VAR_11->xport;

 FUNC_5(&VAR_7->active_ios_lock);
  if (!VAR_7->io_alloc_enabled) {
   FUNC_6(VAR_11, "called with io_alloc_enabled = FALSE\n");
   FUNC_10(&VAR_7->active_ios_lock);
   return ((void*)0);
  }

  VAR_13 = FUNC_2(VAR_11);
  if (VAR_13 == ((void*)0)) {
   FUNC_1(&VAR_12->io_alloc_failed_count, 1);
   FUNC_10(&VAR_7->active_ios_lock);
   return ((void*)0);
  }


  FUNC_9(&VAR_13->ref, VAR_6, VAR_13);

  switch (VAR_10) {
  case 129:
   VAR_13->cmd_ini = VAR_5;
   VAR_13->cmd_tgt = VAR_0;
   break;
  case 128:
   VAR_13->cmd_ini = VAR_0;
   VAR_13->cmd_tgt = VAR_5;
   break;
  }


  if (VAR_13->hio != ((void*)0)) {
   FUNC_7(VAR_11, "assertion failed.  HIO is not null\n");
   FUNC_3(VAR_11, VAR_13);
   FUNC_10(&VAR_7->active_ios_lock);
   return ((void*)0);
  }


  VAR_13->ocs = VAR_11;
  VAR_13->node = VAR_7;


  VAR_13->io_type = VAR_4;
  VAR_13->display_name = "pending";

  if (VAR_8 > VAR_2) {
   FUNC_7(VAR_11, "ELS command request len greater than allocated\n");
   FUNC_3(VAR_11, VAR_13);
   FUNC_10(&VAR_7->active_ios_lock);
   return ((void*)0);
  }

  if (VAR_9 > VAR_1) {
   FUNC_7(VAR_11, "ELS command response len: %d "
    "greater than allocated\n", VAR_9);
   FUNC_3(VAR_11, VAR_13);
   FUNC_10(&VAR_7->active_ios_lock);
   return ((void*)0);
  }

  VAR_13->els_req.size = VAR_8;
  VAR_13->els_rsp.size = VAR_9;

  if (VAR_13 != ((void*)0)) {
   FUNC_8(&VAR_13->els_sm, 0, sizeof(VAR_13->els_sm));
   VAR_13->els_sm.app = VAR_13;


   VAR_13->els_retries_remaining = VAR_3;
   VAR_13->els_evtdepth = 0;
   VAR_13->els_pend = 0;
   VAR_13->els_active = 0;


   FUNC_4(&VAR_7->els_io_pend_list, VAR_13);
   VAR_13->els_pend = 1;
  }
 FUNC_10(&VAR_7->active_ios_lock);
 return VAR_13;
}
