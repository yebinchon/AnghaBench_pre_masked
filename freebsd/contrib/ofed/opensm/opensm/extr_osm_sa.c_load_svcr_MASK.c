
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int modified_time; int lease_period; } ;
typedef TYPE_2__ osm_svcr_t ;
struct TYPE_7__ {int sr_timer; } ;
struct TYPE_9__ {int lock; TYPE_1__ sa; int log; int subn; } ;
typedef TYPE_3__ osm_opensm_t ;
typedef int ib_service_record_t ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(osm_opensm_t * VAR_3, ib_service_record_t * VAR_4,
       uint32_t VAR_5, uint32_t VAR_6)
{
 osm_svcr_t *VAR_7;
 int VAR_8 = 0;

 FUNC_1(&VAR_3->lock);

 if (FUNC_4(&VAR_3->subn, &VAR_3->log, VAR_4)) {
  FUNC_0(&VAR_3->log, VAR_2,
   "ServiceRecord already exists\n");
  goto _out;
 }

 if (!(VAR_7 = FUNC_6(VAR_4))) {
  FUNC_0(&VAR_3->log, VAR_1,
   "cannot allocate new service struct\n");
  VAR_8 = -1;
  goto _out;
 }

 VAR_7->modified_time = VAR_5;
 VAR_7->lease_period = VAR_6;

 FUNC_0(&VAR_3->log, VAR_0, "adding ServiceRecord...\n");

 FUNC_5(&VAR_3->subn, &VAR_3->log, VAR_7);

 if (VAR_6 != 0xffffffff)
  FUNC_3(&VAR_3->sa.sr_timer, 1000);

_out:
 FUNC_2(&VAR_3->lock);

 return VAR_8;
}
