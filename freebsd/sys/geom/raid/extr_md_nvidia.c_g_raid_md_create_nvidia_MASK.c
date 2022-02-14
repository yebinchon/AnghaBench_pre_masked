
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_softc {struct g_geom* sc_geom; } ;
struct g_raid_md_object {struct g_raid_softc* mdo_softc; } ;
struct g_raid_md_nvidia_object {int mdio_volume_id; } ;
struct g_geom {int dummy; } ;
struct g_class {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int) ;
 struct g_raid_softc* FUNC_2 (struct g_class*,char*,struct g_raid_md_object*) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct g_raid_md_object *VAR_3, struct g_class *VAR_4,
    struct g_geom **VAR_5)
{
 struct g_raid_softc *VAR_6;
 struct g_raid_md_nvidia_object *VAR_7;
 char VAR_8[32];

 VAR_7 = (struct g_raid_md_nvidia_object *)VAR_3;
 FUNC_0(&VAR_7->mdio_volume_id, 16, 0);
 FUNC_3(VAR_8, sizeof(VAR_8), "NVIDIA-%d",
     FUNC_1(&VAR_2, 1));
 VAR_6 = FUNC_2(VAR_4, VAR_8, VAR_3);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_3->mdo_softc = VAR_6;
 *VAR_5 = VAR_6->sc_geom;
 return (VAR_1);
}
