
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int name; } ;
struct g_mirror_softc {scalar_t__ sc_genid; int sc_name; } ;
struct g_mirror_metadata {scalar_t__ md_genid; scalar_t__ md_version; } ;
struct g_mirror_disk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct g_mirror_softc*,struct g_provider*,struct g_mirror_metadata*) ;
 int FUNC_2 (struct g_mirror_disk*,int ,int ) ;
 struct g_mirror_disk* FUNC_3 (struct g_mirror_softc*,struct g_provider*,struct g_mirror_metadata*,int*) ;
 int FUNC_4 (struct g_mirror_softc*,struct g_provider*,struct g_mirror_metadata*) ;
 int FUNC_5 (struct g_mirror_disk*) ;
 int FUNC_6 () ;

int
FUNC_7(struct g_mirror_softc *VAR_4, struct g_provider *VAR_5,
    struct g_mirror_metadata *VAR_6)
{
 struct g_mirror_disk *VAR_7;
 int VAR_8;

 FUNC_6();
 FUNC_0(2, "Adding disk %s.", VAR_5->name);

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);

 if (VAR_6->md_genid < VAR_4->sc_genid) {
  FUNC_0(0, "Component %s (device %s) broken, skipping.",
      VAR_5->name, VAR_4->sc_name);
  return (VAR_0);
 }





 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6, &VAR_8);
 if (VAR_7 == ((void*)0))
  return (VAR_8);
 VAR_8 = FUNC_2(VAR_7, VAR_1,
     VAR_2);
 if (VAR_8 != 0)
  return (VAR_8);
 if (VAR_6->md_version < VAR_3) {
  FUNC_0(0, "Upgrading metadata on %s (v%d->v%d).",
      VAR_5->name, VAR_6->md_version, VAR_3);
  FUNC_5(VAR_7);
 }
 return (0);
}
