
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_softc {struct g_geom* sc_geom; } ;
struct g_raid_md_sii_object {int* mdio_timestamp; scalar_t__ mdio_generation; void* mdio_location; } ;
struct g_raid_md_object {struct g_raid_softc* mdo_softc; } ;
struct g_geom {int dummy; } ;
struct g_class {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 () ;
 struct g_raid_softc* FUNC_1 (struct g_class*,char*,struct g_raid_md_object*) ;
 int FUNC_2 (char*,int,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct g_raid_md_object *VAR_2, struct g_class *VAR_3,
    struct g_geom **VAR_4)
{
 struct g_raid_softc *VAR_5;
 struct g_raid_md_sii_object *VAR_6;
 char VAR_7[32];

 VAR_6 = (struct g_raid_md_sii_object *)VAR_2;
 VAR_6->mdio_timestamp[5] = FUNC_0();
 VAR_6->mdio_timestamp[4] = FUNC_0();
 VAR_6->mdio_timestamp[3] = FUNC_0();
 VAR_6->mdio_timestamp[2] = FUNC_0();
 VAR_6->mdio_timestamp[1] = FUNC_0();
 VAR_6->mdio_timestamp[0] = FUNC_0();
 VAR_6->mdio_location = FUNC_0();
 VAR_6->mdio_generation = 0;
 FUNC_2(VAR_7, sizeof(VAR_7), "SiI-%02x%02x%02x%02x%02x%02x",
     VAR_6->mdio_timestamp[5], VAR_6->mdio_timestamp[4],
     VAR_6->mdio_timestamp[3], VAR_6->mdio_timestamp[2],
     VAR_6->mdio_timestamp[1], VAR_6->mdio_timestamp[0]);
 VAR_5 = FUNC_1(VAR_3, VAR_7, VAR_2);
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 VAR_2->mdo_softc = VAR_5;
 *VAR_4 = VAR_5->sc_geom;
 return (VAR_1);
}
