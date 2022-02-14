
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int daemon_sc; int app_sc; int app_register_done; } ;
typedef TYPE_1__ hv_vss_sc ;
struct TYPE_7__ {int callout; TYPE_1__* sc; } ;
typedef TYPE_2__ hv_vss_req_internal ;


 int VAR_0 ;



 int FUNC_0 (int *,int,int ,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(hv_vss_req_internal *VAR_3, uint32_t VAR_4)
{
 hv_vss_sc *VAR_5 = VAR_3->sc;







 switch (VAR_4) {
 case 130:
 case 129:
  if (VAR_5->app_register_done)
   FUNC_1(&VAR_5->app_sc, VAR_3);
  else
   FUNC_1(&VAR_5->daemon_sc, VAR_3);
  FUNC_0(&VAR_3->callout, VAR_0 * VAR_2,
      VAR_1, VAR_3);
  break;
 case 128:
  FUNC_1(&VAR_5->daemon_sc, VAR_3);
  FUNC_0(&VAR_3->callout, VAR_0 * VAR_2,
      VAR_1, VAR_3);
  break;
 }
}
