
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct g_provider {int name; } ;
struct g_geom {int consumer; } ;
struct g_consumer {int flags; int ace; int acw; int acr; struct g_concat_disk* private; } ;
struct g_concat_softc {size_t sc_ndisks; scalar_t__ sc_type; scalar_t__ sc_id; int sc_name; struct g_geom* sc_geom; struct g_concat_disk* sc_disks; } ;
struct g_concat_metadata {scalar_t__ md_id; int md_name; int md_magic; } ;
struct g_concat_disk {scalar_t__ d_removed; scalar_t__ d_end; scalar_t__ d_start; struct g_concat_softc* d_softc; struct g_consumer* d_consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct g_consumer* FUNC_1 (int *) ;
 int FUNC_2 (struct g_consumer*,int ,int ,int ) ;
 int FUNC_3 (struct g_consumer*,struct g_provider*) ;
 int FUNC_4 (struct g_concat_softc*) ;
 int FUNC_5 (struct g_consumer*,struct g_concat_metadata*) ;
 int FUNC_6 (struct g_consumer*) ;
 int FUNC_7 (struct g_consumer*) ;
 struct g_consumer* FUNC_8 (struct g_geom*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct g_concat_softc *VAR_6, struct g_provider *VAR_7, u_int VAR_8)
{
 struct g_concat_disk *VAR_9;
 struct g_consumer *VAR_10, *VAR_11;
 struct g_geom *VAR_12;
 int VAR_13;

 FUNC_9();

 if (VAR_8 >= VAR_6->sc_ndisks)
  return (VAR_1);

 VAR_9 = &VAR_6->sc_disks[VAR_8];

 if (VAR_9->d_consumer != ((void*)0))
  return (VAR_0);

 VAR_12 = VAR_6->sc_geom;
 VAR_11 = FUNC_1(&VAR_12->consumer);

 VAR_10 = FUNC_8(VAR_12);
 VAR_10->flags |= VAR_3 | VAR_2;
 VAR_13 = FUNC_3(VAR_10, VAR_7);
 if (VAR_13 != 0) {
  FUNC_6(VAR_10);
  return (VAR_13);
 }

 if (VAR_11 != ((void*)0) && (VAR_11->acr > 0 || VAR_11->acw > 0 || VAR_11->ace > 0)) {
  VAR_13 = FUNC_2(VAR_10, VAR_11->acr, VAR_11->acw, VAR_11->ace);
  if (VAR_13 != 0) {
   FUNC_7(VAR_10);
   FUNC_6(VAR_10);
   return (VAR_13);
  }
 }
 if (VAR_6->sc_type == VAR_5) {
  struct g_concat_metadata VAR_14;


  VAR_13 = FUNC_5(VAR_10, &VAR_14);
  if (VAR_13 != 0)
   goto fail;

  if (FUNC_10(VAR_14.md_magic, VAR_4) != 0 ||
      FUNC_10(VAR_14.md_name, VAR_6->sc_name) != 0 ||
      VAR_14.md_id != VAR_6->sc_id) {
   FUNC_0(0, "Metadata on %s changed.", VAR_7->name);
   goto fail;
  }
 }

 VAR_10->private = VAR_9;
 VAR_9->d_consumer = VAR_10;
 VAR_9->d_softc = VAR_6;
 VAR_9->d_start = 0;
 VAR_9->d_end = 0;
 VAR_9->d_removed = 0;

 FUNC_0(0, "Disk %s attached to %s.", VAR_7->name, VAR_6->sc_name);

 FUNC_4(VAR_6);

 return (0);
fail:
 if (VAR_11 != ((void*)0) && (VAR_11->acr > 0 || VAR_11->acw > 0 || VAR_11->ace > 0))
  FUNC_2(VAR_10, -VAR_11->acr, -VAR_11->acw, -VAR_11->ace);
 FUNC_7(VAR_10);
 FUNC_6(VAR_10);
 return (VAR_13);
}
