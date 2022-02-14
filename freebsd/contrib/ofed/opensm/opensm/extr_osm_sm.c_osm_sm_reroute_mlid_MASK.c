
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* mlids_req; size_t mlids_req_max; int p_log; } ;
typedef TYPE_1__ osm_sm_t ;
typedef size_t ib_net16_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(osm_sm_t * VAR_3, ib_net16_t VAR_4)
{
 VAR_4 = FUNC_1(VAR_4) - VAR_0;
 VAR_3->mlids_req[VAR_4] = 1;
 if (VAR_3->mlids_req_max < VAR_4)
  VAR_3->mlids_req_max = VAR_4;
 FUNC_2(VAR_3, VAR_2);
 FUNC_0(VAR_3->p_log, VAR_1, "rerouting requested for MLID 0x%x\n",
  VAR_4 + VAR_0);
}
