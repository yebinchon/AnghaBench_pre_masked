
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ value; } ;
typedef TYPE_1__ ocs_xport_stats_t ;
struct TYPE_10__ {int domain; int xport; } ;
typedef TYPE_2__ ocs_t ;
struct TYPE_11__ {TYPE_4__* tgt_data; int is_vport; TYPE_2__* ocs; } ;
typedef TYPE_3__ ocs_sport_t ;
struct TYPE_12__ {scalar_t__ role; TYPE_6__* vport; } ;
typedef TYPE_4__ ocs_fcport ;
struct TYPE_13__ {int * sport; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ,TYPE_6__*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

void
FUNC_3(ocs_sport_t *VAR_2)
{
 ocs_t *VAR_3 = VAR_2->ocs;
 ocs_fcport *VAR_4 = ((void*)0);

 ocs_xport_stats_t VAR_5;

 if (!VAR_2->is_vport) {
  return;
 }

 VAR_4 = VAR_2->tgt_data;

 FUNC_2(VAR_3->xport, VAR_1, &VAR_5);

 if (VAR_5.value == 0) {
  FUNC_0(VAR_3, "PORT offline,.. skipping\n");
  return;
 }

 if ((VAR_4->role != VAR_0)) {
  if(VAR_4->vport->sport != ((void*)0)) {
   FUNC_0(VAR_3,"sport is not NULL, skipping\n");
   return;
  }

  FUNC_1(VAR_3->domain, VAR_4->vport);
  return;
 }

}
