
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct gctl_req {int dummy; } ;
struct g_raid3_softc {size_t sc_ndisks; int sc_sectorsize; int sc_mediasize; int sc_lock; struct g_raid3_disk* sc_disks; } ;
struct g_raid3_metadata {int md_provsize; int md_provider; scalar_t__ md_dflags; scalar_t__ md_syncid; } ;
struct g_raid3_disk {scalar_t__ d_state; } ;
struct g_provider {size_t name; int sectorsize; int mediasize; } ;
struct g_geom {int orphan; } ;
struct g_consumer {scalar_t__ acw; int * provider; } ;
struct g_class {int dummy; } ;
typedef int off_t ;
typedef size_t intmax_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct g_consumer*,int ,int,int) ;
 int FUNC_2 (struct g_consumer*,struct g_provider*) ;
 int FUNC_3 (struct g_consumer*) ;
 int FUNC_4 (struct g_geom*) ;
 int FUNC_5 (struct g_consumer*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,int ) ;
 struct g_consumer* FUNC_8 (struct g_geom*) ;
 struct g_geom* FUNC_9 (struct g_class*,char*) ;
 struct g_provider* FUNC_10 (char const*) ;
 int VAR_2 ;
 int FUNC_11 (struct g_raid3_disk*,struct g_raid3_metadata*) ;
 struct g_raid3_softc* FUNC_12 (struct g_class*,char const*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct g_consumer*,int,int *,int) ;
 int FUNC_16 (struct gctl_req*,char*,...) ;
 char* FUNC_17 (struct gctl_req*,char*) ;
 int * FUNC_18 (struct gctl_req*,char*,int *) ;
 void* FUNC_19 (struct gctl_req*,char*,int) ;
 int FUNC_20 (struct g_raid3_metadata*,int *) ;
 int FUNC_21 (int ,size_t,int) ;
 scalar_t__ FUNC_22 (char const*,char*,int) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static void
FUNC_24(struct gctl_req *VAR_3, struct g_class *VAR_4)
{
 struct g_raid3_metadata VAR_5;
 struct g_raid3_softc *VAR_6;
 struct g_raid3_disk *VAR_7;
 struct g_geom *VAR_8;
 struct g_provider *VAR_9;
 struct g_consumer *VAR_10;
 const char *VAR_11;
 u_char *VAR_12;
 off_t VAR_13;
 intmax_t *VAR_14;
 int *VAR_15, *VAR_16, VAR_17, VAR_18;

 VAR_16 = FUNC_19(VAR_3, "nargs", sizeof(*VAR_16));
 if (VAR_16 == ((void*)0)) {
  FUNC_16(VAR_3, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_16 != 2) {
  FUNC_16(VAR_3, "Invalid number of arguments.");
  return;
 }
 VAR_15 = FUNC_19(VAR_3, "hardcode", sizeof(*VAR_15));
 if (VAR_15 == ((void*)0)) {
  FUNC_16(VAR_3, "No '%s' argument.", "hardcode");
  return;
 }
 VAR_11 = FUNC_17(VAR_3, "arg1");
 if (VAR_11 == ((void*)0)) {
  FUNC_16(VAR_3, "No 'arg%u' argument.", 1);
  return;
 }
 if (FUNC_18(VAR_3, "number", ((void*)0)) != ((void*)0))
  VAR_14 = FUNC_19(VAR_3, "number", sizeof(*VAR_14));
 else
  VAR_14 = ((void*)0);
 if (FUNC_22(VAR_11, "/dev/", 5) == 0)
  VAR_11 += 5;
 FUNC_13();
 VAR_9 = FUNC_10(VAR_11);
 if (VAR_9 == ((void*)0)) {
  FUNC_14();
  FUNC_16(VAR_3, "Invalid provider.");
  return;
 }
 VAR_8 = FUNC_9(VAR_4, "raid3:insert");
 VAR_8->orphan = VAR_2;
 VAR_10 = FUNC_8(VAR_8);
 VAR_17 = FUNC_2(VAR_10, VAR_9);
 if (VAR_17 != 0) {
  FUNC_14();
  FUNC_16(VAR_3, "Cannot attach to %s.", VAR_9->name);
  goto end;
 }
 VAR_17 = FUNC_1(VAR_10, 0, 1, 1);
 if (VAR_17 != 0) {
  FUNC_14();
  FUNC_16(VAR_3, "Cannot access %s.", VAR_9->name);
  goto end;
 }
 FUNC_14();
 VAR_11 = FUNC_17(VAR_3, "arg0");
 if (VAR_11 == ((void*)0)) {
  FUNC_16(VAR_3, "No 'arg%u' argument.", 0);
  goto end;
 }
 VAR_6 = FUNC_12(VAR_4, VAR_11);
 if (VAR_6 == ((void*)0)) {
  FUNC_16(VAR_3, "No such device: %s.", VAR_11);
  goto end;
 }
 if (VAR_14 != ((void*)0)) {
  if (*VAR_14 < 0 || *VAR_14 >= VAR_6->sc_ndisks) {
   FUNC_23(&VAR_6->sc_lock);
   FUNC_16(VAR_3, "Invalid component number.");
   goto end;
  }
  VAR_7 = &VAR_6->sc_disks[*VAR_14];
  if (VAR_7->d_state != VAR_0) {
   FUNC_23(&VAR_6->sc_lock);
   FUNC_16(VAR_3, "Component %jd is already connected.",
       *VAR_14);
   goto end;
  }
 } else {
  VAR_7 = ((void*)0);
  for (VAR_18 = 0; VAR_18 < VAR_6->sc_ndisks && VAR_7 == ((void*)0); VAR_18++)
   if (VAR_6->sc_disks[VAR_18].d_state ==
       VAR_0)
    VAR_7 = &VAR_6->sc_disks[VAR_18];
  if (VAR_7 == ((void*)0)) {
   FUNC_23(&VAR_6->sc_lock);
   FUNC_16(VAR_3, "No disconnected components.");
   goto end;
  }
 }
 if (((VAR_6->sc_sectorsize / (VAR_6->sc_ndisks - 1)) % VAR_9->sectorsize) != 0) {
  FUNC_23(&VAR_6->sc_lock);
  FUNC_16(VAR_3,
      "Cannot insert provider %s, because of its sector size.",
      VAR_9->name);
  goto end;
 }
 VAR_13 = VAR_6->sc_mediasize / (VAR_6->sc_ndisks - 1);
 if (VAR_13 > VAR_9->mediasize - VAR_9->sectorsize) {
  FUNC_23(&VAR_6->sc_lock);
  FUNC_16(VAR_3, "Provider %s too small.", VAR_9->name);
  goto end;
 }
 if (VAR_13 < VAR_9->mediasize - VAR_9->sectorsize) {
  FUNC_16(VAR_3,
      "warning: %s: only %jd bytes from %jd bytes used.",
      VAR_9->name, (intmax_t)VAR_13,
      (intmax_t)(VAR_9->mediasize - VAR_9->sectorsize));
 }
 FUNC_11(VAR_7, &VAR_5);
 FUNC_23(&VAR_6->sc_lock);
 VAR_5.md_syncid = 0;
 VAR_5.md_dflags = 0;
 if (*VAR_15)
  FUNC_21(VAR_5.md_provider, VAR_9->name, sizeof(VAR_5.md_provider));
 else
  FUNC_0(VAR_5.md_provider, sizeof(VAR_5.md_provider));
 VAR_5.md_provsize = VAR_9->mediasize;
 VAR_12 = FUNC_7(VAR_9->sectorsize, VAR_1);
 FUNC_20(&VAR_5, VAR_12);
 VAR_17 = FUNC_15(VAR_10, VAR_9->mediasize - VAR_9->sectorsize, VAR_12,
     VAR_9->sectorsize);
 FUNC_6(VAR_12);
 if (VAR_17 != 0)
  FUNC_16(VAR_3, "Cannot store metadata on %s.", VAR_9->name);
end:
 FUNC_13();
 if (VAR_10->acw > 0)
  FUNC_1(VAR_10, 0, -1, -1);
 if (VAR_10->provider != ((void*)0))
  FUNC_5(VAR_10);
 FUNC_3(VAR_10);
 FUNC_4(VAR_8);
 FUNC_14();
}
