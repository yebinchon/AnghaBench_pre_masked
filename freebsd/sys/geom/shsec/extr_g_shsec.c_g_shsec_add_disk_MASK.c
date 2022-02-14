
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct g_shsec_softc {size_t sc_ndisks; scalar_t__ sc_id; int sc_name; struct g_consumer** sc_disks; struct g_geom* sc_geom; } ;
struct g_shsec_metadata {scalar_t__ md_id; int md_name; int md_magic; } ;
struct g_provider {int name; } ;
struct g_geom {int consumer; } ;
struct g_consumer {size_t index; int ace; int acw; int acr; struct g_shsec_softc* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_2 ;
 struct g_consumer* FUNC_1 (int *) ;
 int FUNC_2 (struct g_consumer*,int ,int ,int ) ;
 int FUNC_3 (struct g_consumer*,struct g_provider*) ;
 int FUNC_4 (struct g_consumer*) ;
 int FUNC_5 (struct g_consumer*) ;
 struct g_consumer* FUNC_6 (struct g_geom*) ;
 int FUNC_7 (struct g_shsec_softc*) ;
 int FUNC_8 (struct g_consumer*,struct g_shsec_metadata*) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct g_shsec_softc *VAR_3, struct g_provider *VAR_4, u_int VAR_5)
{
 struct g_consumer *VAR_6, *VAR_7;
 struct g_geom *VAR_8;
 struct g_shsec_metadata VAR_9;
 int VAR_10;


 if (VAR_5 >= VAR_3->sc_ndisks)
  return (VAR_1);


 if (VAR_3->sc_disks[VAR_5] != ((void*)0))
  return (VAR_0);

 VAR_8 = VAR_3->sc_geom;
 VAR_7 = FUNC_1(&VAR_8->consumer);

 VAR_6 = FUNC_6(VAR_8);
 VAR_10 = FUNC_3(VAR_6, VAR_4);
 if (VAR_10 != 0) {
  FUNC_4(VAR_6);
  return (VAR_10);
 }

 if (VAR_7 != ((void*)0) && (VAR_7->acr > 0 || VAR_7->acw > 0 || VAR_7->ace > 0)) {
  VAR_10 = FUNC_2(VAR_6, VAR_7->acr, VAR_7->acw, VAR_7->ace);
  if (VAR_10 != 0) {
   FUNC_5(VAR_6);
   FUNC_4(VAR_6);
   return (VAR_10);
  }
 }


 VAR_10 = FUNC_8(VAR_6, &VAR_9);
 if (VAR_10 != 0)
  goto fail;

 if (FUNC_9(VAR_9.md_magic, VAR_2) != 0 ||
     FUNC_9(VAR_9.md_name, VAR_3->sc_name) != 0 || VAR_9.md_id != VAR_3->sc_id) {
  FUNC_0(0, "Metadata on %s changed.", VAR_4->name);
  goto fail;
 }

 VAR_6->private = VAR_3;
 VAR_6->index = VAR_5;
 VAR_3->sc_disks[VAR_5] = VAR_6;

 FUNC_0(0, "Disk %s attached to %s.", VAR_4->name, VAR_3->sc_name);

 FUNC_7(VAR_3);

 return (0);
fail:
 if (VAR_7 != ((void*)0) && (VAR_7->acr > 0 || VAR_7->acw > 0 || VAR_7->ace > 0))
  FUNC_2(VAR_6, -VAR_7->acr, -VAR_7->acw, -VAR_7->ace);
 FUNC_5(VAR_6);
 FUNC_4(VAR_6);
 return (VAR_10);
}
