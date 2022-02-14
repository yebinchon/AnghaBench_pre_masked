
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_raid_softc {int dummy; } ;
struct g_raid_md_object {struct g_raid_softc* mdo_softc; } ;
struct g_raid_disk {int dummy; } ;



 int VAR_0 ;
 int FUNC_0 (struct g_raid_disk*,int ) ;
 int FUNC_1 (struct g_raid_disk*) ;
 int FUNC_2 (struct g_raid_softc*,int ) ;
 int FUNC_3 (struct g_raid_softc*) ;
 int FUNC_4 (struct g_raid_softc*) ;
 int FUNC_5 (struct g_raid_md_object*,int *,int *,int *) ;
 int FUNC_6 (struct g_raid_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct g_raid_md_object *VAR_1,
    struct g_raid_disk *VAR_2, u_int VAR_3)
{
 struct g_raid_softc *VAR_4;

 VAR_4 = VAR_1->mdo_softc;
 if (VAR_2 == ((void*)0))
  return (-1);
 switch (VAR_3) {
 case 128:

  FUNC_0(VAR_2, VAR_0);
  FUNC_1(VAR_2);
  FUNC_3(VAR_4);


  FUNC_5(VAR_1, ((void*)0), ((void*)0), ((void*)0));


  if (FUNC_6(VAR_4, -1) == 0)
   FUNC_2(VAR_4, 0);
  else
   FUNC_4(VAR_4);
  return (0);
 }
 return (-2);
}
