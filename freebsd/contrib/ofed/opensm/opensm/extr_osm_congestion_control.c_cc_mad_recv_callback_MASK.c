
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int osm_madw_t ;
struct TYPE_2__ {int log; int mad_pool; int cc_disp_h; } ;
typedef TYPE_1__ osm_congestion_control_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(osm_madw_t * VAR_3, void *VAR_4,
     osm_madw_t * VAR_5)
{
 osm_congestion_control_t *VAR_6 = VAR_4;

 FUNC_2(VAR_6->log);

 FUNC_0(VAR_3);


 FUNC_0(VAR_5 != ((void*)0));

 FUNC_6(VAR_3, VAR_5);
 FUNC_5(VAR_6->mad_pool, VAR_5);



 if (FUNC_4(VAR_6->cc_disp_h, VAR_2,
    VAR_3, ((void*)0), ((void*)0)) != VAR_0) {
  FUNC_1(VAR_6->log, VAR_1, "ERR C105: "
   "Congestion Control Dispatcher post failed\n");
  FUNC_5(VAR_6->mad_pool, VAR_3);
 }

 FUNC_3(VAR_6->log);
}
