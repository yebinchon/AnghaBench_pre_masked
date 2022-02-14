
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_softc {struct g_raid_md_object* sc_md; } ;
struct g_raid_md_sii_object {int mdio_started; } ;
struct g_raid_md_object {int dummy; } ;


 int FUNC_0 (int ,struct g_raid_softc*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct g_raid_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct g_raid_softc *VAR_2;
 struct g_raid_md_object *VAR_3;
 struct g_raid_md_sii_object *VAR_4;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->sc_md;
 VAR_4 = (struct g_raid_md_sii_object *)VAR_3;
 if (!VAR_4->mdio_started) {
  FUNC_0(0, VAR_2, "Force array start due to timeout.");
  FUNC_1(VAR_2, VAR_0, 0);
 }
}
