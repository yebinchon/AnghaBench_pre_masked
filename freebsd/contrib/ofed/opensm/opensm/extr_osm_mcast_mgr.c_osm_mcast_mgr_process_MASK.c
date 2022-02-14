
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int mlids_req_max; int p_log; int p_lock; TYPE_1__* p_subn; scalar_t__* mlids_req; } ;
typedef TYPE_2__ osm_sm_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {unsigned int max_mcast_lid_ho; int p_osm; scalar_t__* mboxes; int sw_guid_tbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,unsigned int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;

int FUNC_10(osm_sm_t * VAR_3, boolean_t VAR_4)
{
 int VAR_5 = 0;
 unsigned VAR_6;
 unsigned VAR_7;

 FUNC_3(VAR_3->p_log);

 FUNC_0(VAR_3->p_lock);


 if (FUNC_6(&VAR_3->p_subn->sw_guid_tbl) == 0) {
  FUNC_2(VAR_3->p_log, VAR_1,
   "No switches in subnet. Nothing to do\n");
  goto exit;
 }

 if (FUNC_5(VAR_3)) {
  FUNC_2(VAR_3->p_log, VAR_2,
   "ERR 0A09: alloc_mfts failed\n");
  VAR_5 = -1;
  goto exit;
 }

 VAR_7 = VAR_4 ? VAR_3->p_subn->max_mcast_lid_ho
   - VAR_0 : VAR_3->mlids_req_max;
 for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++) {
  if (VAR_3->mlids_req[VAR_6] ||
      (VAR_4 && VAR_3->p_subn->mboxes[VAR_6])) {
   VAR_3->mlids_req[VAR_6] = 0;
   FUNC_7(VAR_3, VAR_6 + VAR_0);
  }
 }

 VAR_3->mlids_req_max = 0;

 VAR_5 = FUNC_8(VAR_3);

 FUNC_9(VAR_3->p_subn->p_osm);

exit:
 FUNC_1(VAR_3->p_lock);
 FUNC_4(VAR_3->p_log);
 return VAR_5;
}
