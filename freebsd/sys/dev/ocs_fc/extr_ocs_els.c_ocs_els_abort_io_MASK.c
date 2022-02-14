
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {char* display_name; int send_abts; int ref; struct TYPE_14__* io_to_abort; int io_type; int cmd_ini; struct TYPE_14__* node; struct TYPE_14__* ocs; int * hio; int io_alloc_failed_count; struct TYPE_14__* xport; } ;
typedef TYPE_1__ ocs_xport_t ;
typedef TYPE_1__ ocs_t ;
typedef TYPE_1__ ocs_io_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static ocs_io_t *
FUNC_9(ocs_io_t *VAR_3, int VAR_4)
{
 ocs_t *VAR_5;
 ocs_xport_t *VAR_6;
 int32_t VAR_7;
 ocs_io_t *VAR_8 = ((void*)0);

 FUNC_0(VAR_3, ((void*)0));
 FUNC_0(VAR_3->node, ((void*)0));
 FUNC_0(VAR_3->node->ocs, ((void*)0));

 VAR_5 = VAR_3->node->ocs;
 FUNC_0(VAR_5->xport, ((void*)0));
 VAR_6 = VAR_5->xport;


 if ((FUNC_6(&VAR_3->ref) == 0)) {

  FUNC_4(VAR_5, "els no longer active\n");
  return ((void*)0);
 }


 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(&VAR_6->io_alloc_failed_count, 1);
 } else {
  FUNC_0(VAR_8->hio == ((void*)0), ((void*)0));


  VAR_8->ocs = VAR_5;
  VAR_8->node = VAR_3->node;
  VAR_8->cmd_ini = VAR_1;


  VAR_8->io_type = VAR_0;
  VAR_8->display_name = "abort_els";
  VAR_8->io_to_abort = VAR_3;
  VAR_8->send_abts = VAR_4;


  if ((VAR_7 = FUNC_8(VAR_8, VAR_2))) {
   FUNC_5(VAR_5, "ocs_scsi_io_dispatch failed: %d\n", VAR_7);
   FUNC_3(VAR_5, VAR_8);
   VAR_8 = ((void*)0);
  }
 }


 if (VAR_8 == ((void*)0)) {
  FUNC_7(&VAR_3->ref);
 }
 return VAR_8;
}
