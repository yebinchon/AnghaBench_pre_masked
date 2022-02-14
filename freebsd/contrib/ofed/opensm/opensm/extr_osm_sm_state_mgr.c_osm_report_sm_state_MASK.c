
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int p_log; TYPE_1__* p_subn; } ;
typedef TYPE_2__ osm_sm_t ;
typedef int buf ;
struct TYPE_4__ {int sm_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,char*,char const*) ;
 int FUNC_3 (char*,int,char*,char const*) ;

void FUNC_4(osm_sm_t * VAR_3)
{
 char VAR_4[64];
 const char *VAR_5 = FUNC_1(VAR_3->p_subn->sm_state);

 FUNC_2(VAR_3->p_log, VAR_1, VAR_0, "Entering %s state\n", VAR_5);
 FUNC_3(VAR_4, sizeof(VAR_4), "ENTERING SM %s STATE", VAR_5);
 FUNC_0(VAR_3->p_log, VAR_2, VAR_4);
}
