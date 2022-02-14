
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct g_stripe_softc {size_t sc_ndisks; scalar_t__ sc_type; scalar_t__ sc_id; int sc_name; struct g_consumer** sc_disks; struct g_geom* sc_geom; } ;
struct g_stripe_metadata {scalar_t__ md_id; int md_name; int md_magic; } ;
struct g_provider {int name; } ;
struct g_geom {int consumer; } ;
struct g_consumer {int flags; size_t index; int ace; int acw; int acr; int * private; } ;


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
 int FUNC_4 (struct g_consumer*) ;
 int FUNC_5 (struct g_consumer*) ;
 struct g_consumer* FUNC_6 (struct g_geom*) ;
 int FUNC_7 (struct g_stripe_softc*) ;
 int FUNC_8 (struct g_consumer*,struct g_stripe_metadata*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct g_stripe_softc *VAR_6, struct g_provider *VAR_7, u_int VAR_8)
{
 struct g_consumer *VAR_9, *VAR_10;
 struct g_geom *VAR_11;
 int VAR_12;

 FUNC_9();

 if (VAR_8 >= VAR_6->sc_ndisks)
  return (VAR_1);


 if (VAR_6->sc_disks[VAR_8] != ((void*)0))
  return (VAR_0);

 VAR_11 = VAR_6->sc_geom;
 VAR_10 = FUNC_1(&VAR_11->consumer);

 VAR_9 = FUNC_6(VAR_11);
 VAR_9->flags |= VAR_3 | VAR_2;
 VAR_9->private = ((void*)0);
 VAR_9->index = VAR_8;
 VAR_12 = FUNC_3(VAR_9, VAR_7);
 if (VAR_12 != 0) {
  FUNC_4(VAR_9);
  return (VAR_12);
 }

 if (VAR_10 != ((void*)0) && (VAR_10->acr > 0 || VAR_10->acw > 0 || VAR_10->ace > 0)) {
  VAR_12 = FUNC_2(VAR_9, VAR_10->acr, VAR_10->acw, VAR_10->ace);
  if (VAR_12 != 0) {
   FUNC_5(VAR_9);
   FUNC_4(VAR_9);
   return (VAR_12);
  }
 }
 if (VAR_6->sc_type == VAR_5) {
  struct g_stripe_metadata VAR_13;


  VAR_12 = FUNC_8(VAR_9, &VAR_13);
  if (VAR_12 != 0)
   goto fail;

  if (FUNC_10(VAR_13.md_magic, VAR_4) != 0 ||
      FUNC_10(VAR_13.md_name, VAR_6->sc_name) != 0 ||
      VAR_13.md_id != VAR_6->sc_id) {
   FUNC_0(0, "Metadata on %s changed.", VAR_7->name);
   goto fail;
  }
 }

 VAR_6->sc_disks[VAR_8] = VAR_9;
 FUNC_0(0, "Disk %s attached to %s.", VAR_7->name, VAR_6->sc_name);
 FUNC_7(VAR_6);

 return (0);
fail:
 if (VAR_10 != ((void*)0) && (VAR_10->acr > 0 || VAR_10->acw > 0 || VAR_10->ace > 0))
  FUNC_2(VAR_9, -VAR_10->acr, -VAR_10->acw, -VAR_10->ace);
 FUNC_5(VAR_9);
 FUNC_4(VAR_9);
 return (VAR_12);
}
