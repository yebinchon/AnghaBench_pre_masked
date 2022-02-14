
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_12__ {scalar_t__ fc_type; } ;
typedef TYPE_2__ ocs_t ;
struct TYPE_13__ {scalar_t__ fc_type; void* shutdown_reason; TYPE_1__* sport; } ;
typedef TYPE_3__ ocs_node_t ;
struct TYPE_14__ {TYPE_3__* node; TYPE_2__* ocs; } ;
typedef TYPE_4__ ocs_io_t ;
struct TYPE_11__ {scalar_t__ enable_tgt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_4__*,int ,scalar_t__,int *,int *) ;

void
FUNC_5(ocs_io_t *VAR_6, uint16_t VAR_7)
{
 ocs_t *VAR_8 = VAR_6->ocs;
 ocs_node_t *VAR_9 = VAR_6->node;


 if (VAR_8->fc_type != VAR_9->fc_type) {
  FUNC_0(VAR_9, "PRLI rejected by target-server, fc-type not supported\n");
  FUNC_3(VAR_6, VAR_7, VAR_2,
    VAR_1, 0, ((void*)0), ((void*)0));
  VAR_9->shutdown_reason = VAR_3;
  FUNC_1(VAR_9, VAR_5, ((void*)0));
 }


 if (VAR_9->sport->enable_tgt && (FUNC_2(VAR_9) == 0)) {
  FUNC_0(VAR_9, "PRLI rejected by target-server\n");
  FUNC_3(VAR_6, VAR_7, VAR_2,
    VAR_0, 0, ((void*)0), ((void*)0));
  VAR_9->shutdown_reason = VAR_3;
  FUNC_1(VAR_9, VAR_5, ((void*)0));
 } else {

  FUNC_4(VAR_6, VAR_7, VAR_8->fc_type, ((void*)0), ((void*)0));




  FUNC_1(VAR_9, VAR_4, ((void*)0));
 }
}
