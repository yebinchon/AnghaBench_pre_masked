
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int h_bind; } ;
struct TYPE_11__ {TYPE_1__ mad_ctrl; } ;
struct TYPE_12__ {int lock; int log; int subn; TYPE_2__ sa; } ;
typedef TYPE_3__ osm_opensm_t ;
typedef int osm_mad_addr_t ;
struct TYPE_13__ {int inform_record; int report_addr; TYPE_2__* sa; int h_bind; } ;
typedef TYPE_4__ osm_infr_t ;
typedef int ib_inform_info_record_t ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_4__*) ;
 int FUNC_4 (int *,int *,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(osm_opensm_t * VAR_3, ib_inform_info_record_t * VAR_4,
       osm_mad_addr_t * VAR_5)
{
 osm_infr_t VAR_6, *VAR_7;
 int VAR_8 = 0;

 VAR_6.h_bind = VAR_3->sa.mad_ctrl.h_bind;
 VAR_6.sa = &VAR_3->sa;


 VAR_6.report_addr = *VAR_5;
 VAR_6.inform_record = *VAR_4;

 FUNC_1(&VAR_3->lock);
 if (FUNC_3(&VAR_3->subn, &VAR_3->log, &VAR_6)) {
  FUNC_0(&VAR_3->log, VAR_2,
   "InformInfo Record already exists\n");
  goto _out;
 }

 if (!(VAR_7 = FUNC_5(&VAR_6))) {
  FUNC_0(&VAR_3->log, VAR_1,
   "cannot allocate new infr struct\n");
  VAR_8 = -1;
  goto _out;
 }

 FUNC_0(&VAR_3->log, VAR_0, "adding InformInfo Record...\n");

 FUNC_4(&VAR_3->subn, &VAR_3->log, VAR_7);

_out:
 FUNC_2(&VAR_3->lock);

 return VAR_8;
}
