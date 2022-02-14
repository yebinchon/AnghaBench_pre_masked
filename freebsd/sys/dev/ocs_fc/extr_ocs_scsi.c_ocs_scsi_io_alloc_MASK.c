
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int active_ios_lock; int active_ios; struct TYPE_13__* ocs; int io_alloc_failed_count; int io_alloc_enabled; struct TYPE_13__* xport; } ;
typedef TYPE_1__ ocs_xport_t ;
typedef TYPE_1__ ocs_t ;
typedef int ocs_scsi_io_role_e ;
typedef TYPE_1__ ocs_node_t ;
struct TYPE_14__ {char* display_name; void* cmd_tgt; void* cmd_ini; int io_type; TYPE_1__* node; TYPE_1__* ocs; int * hio; int ref; } ;
typedef TYPE_4__ ocs_io_t ;


 void* VAR_0 ;
 int VAR_1 ;


 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_4__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int *,int ,TYPE_4__*) ;
 int FUNC_7 (int *) ;

ocs_io_t *
FUNC_8(ocs_node_t *VAR_4, ocs_scsi_io_role_e VAR_5)
{
 ocs_t *VAR_6;
 ocs_xport_t *VAR_7;
 ocs_io_t *VAR_8;

 FUNC_0(VAR_4, ((void*)0));
 FUNC_0(VAR_4->ocs, ((void*)0));

 VAR_6 = VAR_4->ocs;
 FUNC_0(VAR_6->xport, ((void*)0));
 VAR_7 = VAR_6->xport;

 FUNC_4(&VAR_4->active_ios_lock);

  if (!VAR_4->io_alloc_enabled) {
   FUNC_7(&VAR_4->active_ios_lock);
   return ((void*)0);
  }

  VAR_8 = FUNC_2(VAR_6);
  if (VAR_8 == ((void*)0)) {
   FUNC_1(&VAR_7->io_alloc_failed_count, 1);
   FUNC_7(&VAR_4->active_ios_lock);
   return ((void*)0);
  }


  FUNC_6(&VAR_8->ref, VAR_3, VAR_8);

  if (VAR_8->hio != ((void*)0)) {
   FUNC_5(VAR_4->ocs, "assertion failed: io->hio is not NULL\n");
   FUNC_7(&VAR_4->active_ios_lock);
   return ((void*)0);
  }


  VAR_8->ocs = VAR_6;
  VAR_8->node = VAR_4;


  VAR_8->io_type = VAR_1;
  VAR_8->display_name = "scsi_io";

  switch (VAR_5) {
  case 129:
   VAR_8->cmd_ini = VAR_2;
   VAR_8->cmd_tgt = VAR_0;
   break;
  case 128:
   VAR_8->cmd_ini = VAR_0;
   VAR_8->cmd_tgt = VAR_2;
   break;
  }


  FUNC_3(&VAR_4->active_ios, VAR_8);

 FUNC_7(&VAR_4->active_ios_lock);

 return VAR_8;
}
