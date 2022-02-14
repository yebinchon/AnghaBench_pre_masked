
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_raid_volume {scalar_t__ v_provider_open; scalar_t__ v_stopping; int * v_rootmount; scalar_t__ v_starting; int v_tr; int * v_provider; int v_name; struct g_raid_softc* v_softc; } ;
struct g_raid_softc {int sc_md; int sc_lock; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int *,...) ;
 int FUNC_1 (int ,struct g_raid_volume*,int) ;
 int FUNC_2 (int ) ;



 int VAR_0 ;
 int FUNC_3 (struct g_raid_volume*) ;
 int FUNC_4 (struct g_raid_volume*) ;
 int FUNC_5 (struct g_raid_volume*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct g_raid_volume *VAR_1, u_int VAR_2)
{
 struct g_raid_softc *VAR_3;

 VAR_3 = VAR_1->v_softc;
 FUNC_8(&VAR_3->sc_lock, VAR_0);

 FUNC_0(2, VAR_3, "Event %s for volume %s.",
     FUNC_6(VAR_2),
     VAR_1->v_name);
 switch (VAR_2) {
 case 130:
  if (VAR_1->v_provider != ((void*)0))
   FUNC_3(VAR_1);
  break;
 case 128:
  if (VAR_1->v_provider == ((void*)0))
   FUNC_5(VAR_1);
  break;
 case 129:
  if (VAR_1->v_tr)
   FUNC_2(VAR_1->v_tr);
  return (0);
 default:
  if (VAR_3->sc_md)
   FUNC_1(VAR_3->sc_md, VAR_1, VAR_2);
  return (0);
 }


 if (VAR_1->v_starting) {
  VAR_1->v_starting = 0;
  FUNC_0(1, VAR_3, "root_mount_rel %p", VAR_1->v_rootmount);
  FUNC_7(VAR_1->v_rootmount);
  VAR_1->v_rootmount = ((void*)0);
 }
 if (VAR_1->v_stopping && VAR_1->v_provider_open == 0)
  FUNC_4(VAR_1);
 return (0);
}
