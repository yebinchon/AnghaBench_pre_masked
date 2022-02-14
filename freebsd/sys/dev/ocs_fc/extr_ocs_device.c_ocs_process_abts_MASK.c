
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* uint16_t ;
typedef int ocs_t ;
struct TYPE_15__ {int * ocs; } ;
typedef TYPE_2__ ocs_node_t ;
struct TYPE_14__ {int lun; } ;
struct TYPE_16__ {char* display_name; int ref; TYPE_1__ tgt_io; int tmf_cmd; void* abort_rx_id; void* init_task_tag; TYPE_2__* node; } ;
typedef TYPE_3__ ocs_io_t ;
typedef int int32_t ;
struct TYPE_17__ {int rx_id; int ox_id; } ;
typedef TYPE_4__ fc_header_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,void*,void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 TYPE_3__* FUNC_3 (int *,TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ,int ,TYPE_3__*,int ) ;

__attribute__((used)) static int32_t
FUNC_7(ocs_io_t *VAR_1, fc_header_t *VAR_2)
{
 ocs_node_t *VAR_3 = VAR_1->node;
 ocs_t *VAR_4 = VAR_3->ocs;
 uint16_t VAR_5 = FUNC_1(VAR_2->ox_id);
 uint16_t VAR_6 = FUNC_1(VAR_2->rx_id);
 ocs_io_t *VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_3, VAR_5, VAR_6);


 if (VAR_7 != ((void*)0) && (FUNC_4(&VAR_7->ref) != 0)) {


  FUNC_0(VAR_3, "Abort request: ox_id [%04x] rx_id [%04x]\n",
       VAR_5, VAR_6);





  VAR_1->display_name = "abts";
  VAR_1->init_task_tag = VAR_5;






  VAR_1->abort_rx_id = VAR_6;


  VAR_1->tmf_cmd = VAR_0;
  FUNC_6(VAR_1, VAR_7->tgt_io.lun, VAR_0, VAR_7, 0);





  FUNC_5(&VAR_7->ref);
 } else {




  FUNC_0(VAR_3, "Abort request: ox_id [%04x], IO not found (exists=%d)\n",
       VAR_5, (VAR_7 != ((void*)0)));


  FUNC_2(VAR_1, VAR_2);
 }
 return 0;
}
