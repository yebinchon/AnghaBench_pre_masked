
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {int ifm_active; int ifm_status; } ;
struct adapter {int link_speed; int link_active; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;




 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_8, struct ifmediareq * VAR_9)
{
 struct adapter *VAR_10 = FUNC_2(VAR_8);

 FUNC_0("ixv_media_status: begin");

 FUNC_1(VAR_8);

 VAR_9->ifm_status = VAR_5;
 VAR_9->ifm_active = VAR_6;

 if (!VAR_10->link_active)
  return;

 VAR_9->ifm_status |= VAR_4;

 switch (VAR_10->link_speed) {
  case 128:
   VAR_9->ifm_active |= VAR_0 | VAR_7;
   break;
  case 130:
   VAR_9->ifm_active |= VAR_2 | VAR_7;
   break;
  case 131:
   VAR_9->ifm_active |= VAR_1 | VAR_7;
   break;
  case 129:
   VAR_9->ifm_active |= VAR_3 | VAR_7;
   break;
 }
}
