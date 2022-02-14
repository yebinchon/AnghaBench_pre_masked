
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid3_softc {scalar_t__ sc_state; scalar_t__ sc_genid; int sc_name; } ;
struct g_raid3_metadata {scalar_t__ md_genid; scalar_t__ md_version; } ;
struct g_raid3_disk {int dummy; } ;
struct g_provider {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct g_raid3_softc*,struct g_provider*,struct g_raid3_metadata*) ;
 int FUNC_2 (struct g_raid3_disk*,int ,int ) ;
 struct g_raid3_disk* FUNC_3 (struct g_raid3_softc*,struct g_provider*,struct g_raid3_metadata*,int*) ;
 int FUNC_4 (struct g_raid3_disk*) ;
 int FUNC_5 () ;

int
FUNC_6(struct g_raid3_softc *VAR_5, struct g_provider *VAR_6,
    struct g_raid3_metadata *VAR_7)
{
 struct g_raid3_disk *VAR_8;
 int VAR_9;

 FUNC_5();
 FUNC_0(2, "Adding disk %s.", VAR_6->name);

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);
 if (VAR_5->sc_state != VAR_1 &&
     VAR_7->md_genid < VAR_5->sc_genid) {
  FUNC_0(0, "Component %s (device %s) broken, skipping.",
      VAR_6->name, VAR_5->sc_name);
  return (VAR_0);
 }
 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7, &VAR_9);
 if (VAR_8 == ((void*)0))
  return (VAR_9);
 VAR_9 = FUNC_2(VAR_8, VAR_2,
     VAR_3);
 if (VAR_9 != 0)
  return (VAR_9);
 if (VAR_7->md_version < VAR_4) {
  FUNC_0(0, "Upgrading metadata on %s (v%d->v%d).",
      VAR_6->name, VAR_7->md_version, VAR_4);
  FUNC_4(VAR_8);
 }
 return (0);
}
