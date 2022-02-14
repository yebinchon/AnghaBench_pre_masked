
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct gctl_req {int dummy; } ;
struct g_provider {scalar_t__ mediasize; unsigned int sectorsize; char const* name; } ;
struct g_mirror_softc {int sc_flags; int sc_lock; } ;
struct g_mirror_metadata {char const* md_magic; char const* md_name; int md_all; int md_syncid; int md_balance; int md_mediasize; unsigned int md_sectorsize; unsigned int md_priority; void* md_did; scalar_t__ md_provsize; int md_provider; int md_mflags; scalar_t__ md_dflags; int md_slice; scalar_t__ md_sync_offset; scalar_t__ md_genid; void* md_mid; int md_version; } ;
struct g_geom {char const* name; struct g_mirror_softc* softc; int orphan; } ;
struct g_consumer {int dummy; } ;
struct g_class {int dummy; } ;
typedef int param ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct g_consumer*,int,int ,int ) ;
 int FUNC_5 (struct g_consumer*,struct g_provider*) ;
 int FUNC_6 (struct g_consumer*) ;
 int FUNC_7 (struct g_geom*) ;
 int FUNC_8 (struct g_consumer*) ;
 scalar_t__ FUNC_9 (struct g_mirror_softc*,struct g_provider*,struct g_mirror_metadata*) ;
 struct g_geom* FUNC_10 (struct g_class*,struct g_mirror_metadata*,int ) ;
 int VAR_9 ;
 int FUNC_11 (struct g_mirror_softc*,int ) ;
 struct g_consumer* FUNC_12 (struct g_geom*) ;
 struct g_geom* FUNC_13 (struct g_class*,char*,char const*) ;
 struct g_provider* FUNC_14 (char const*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (struct gctl_req*,char*,...) ;
 char* FUNC_18 (struct gctl_req*,char*) ;
 void* FUNC_19 (struct gctl_req*,char*,int) ;
 char const* FUNC_20 (struct sbuf*) ;
 int FUNC_21 (struct sbuf*) ;
 int FUNC_22 (struct sbuf*) ;
 struct sbuf* FUNC_23 () ;
 int FUNC_24 (struct sbuf*,char*,char const*) ;
 int FUNC_25 (char*,int,char*,unsigned int) ;
 int FUNC_26 (char const*,char const*,int) ;
 int FUNC_27 (char*) ;
 scalar_t__ FUNC_28 (char const*,char*,int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static void
FUNC_31(struct gctl_req *VAR_10, struct g_class *VAR_11)
{
 struct g_mirror_metadata VAR_12;
 struct g_geom *VAR_13;
 struct g_consumer *VAR_14;
 struct g_provider *VAR_15;
 struct g_mirror_softc *VAR_16;
 struct sbuf *VAR_17;
 const char *VAR_18;
 char VAR_19[16];
 int *VAR_20;
 intmax_t *VAR_21;
 int *VAR_22;
 const char *VAR_23;
 int VAR_24;
 unsigned VAR_25, VAR_26, VAR_27;
 off_t VAR_28;

 VAR_20 = FUNC_19(VAR_10, "nargs", sizeof(*VAR_20));
 if (VAR_20 == ((void*)0)) {
  FUNC_17(VAR_10, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_20 <= 2) {
  FUNC_17(VAR_10, "Too few arguments.");
  return;
 }

 FUNC_26(VAR_12.md_magic, VAR_5, sizeof(VAR_12.md_magic));
 VAR_12.md_version = VAR_7;
 VAR_18 = FUNC_18(VAR_10, "arg0");
 if (VAR_18 == ((void*)0)) {
  FUNC_17(VAR_10, "No 'arg%u' argument.", 0);
  return;
 }
 FUNC_26(VAR_12.md_name, VAR_18, sizeof(VAR_12.md_name));
 VAR_12.md_mid = FUNC_1();
 VAR_12.md_all = *VAR_20 - 1;
 VAR_12.md_genid = 0;
 VAR_12.md_syncid = 1;
 VAR_12.md_sync_offset = 0;
 VAR_21 = FUNC_19(VAR_10, "slice", sizeof(*VAR_21));
 if (VAR_21 == ((void*)0)) {
  FUNC_17(VAR_10, "No slice argument.");
  return;
 }
 VAR_12.md_slice = *VAR_21;
 VAR_23 = FUNC_18(VAR_10, "balance");
 if (VAR_23 == ((void*)0)) {
  FUNC_17(VAR_10, "No balance argument.");
  return;
 }
 VAR_24 = FUNC_2(VAR_23);
 if (VAR_24 < 0) {
  FUNC_17(VAR_10, "Invalid balance algorithm.");
  return;
 }
 VAR_12.md_balance = VAR_24;
 VAR_12.md_mflags = 0;
 VAR_12.md_dflags = 0;
 VAR_22 = FUNC_19(VAR_10, "noautosync", sizeof(*VAR_22));
 if (VAR_22 != ((void*)0) && *VAR_22)
  VAR_12.md_mflags |= VAR_2;
 VAR_22 = FUNC_19(VAR_10, "nofailsync", sizeof(*VAR_22));
 if (VAR_22 != ((void*)0) && *VAR_22)
  VAR_12.md_mflags |= VAR_3;

 FUNC_3(VAR_12.md_provider, sizeof(VAR_12.md_provider));
 VAR_12.md_provsize = 0;

 FUNC_15();
 VAR_28 = VAR_8;
 VAR_27 = 0;
 VAR_13 = FUNC_13(VAR_11, "%s", VAR_12.md_name);
 VAR_13->orphan = VAR_9;
 VAR_14 = FUNC_12(VAR_13);
 for (VAR_26 = 1; VAR_26 < *VAR_20; VAR_26++) {
  FUNC_25(VAR_19, sizeof(VAR_19), "arg%u", VAR_26);
  VAR_18 = FUNC_18(VAR_10, VAR_19);
  if (VAR_18 == ((void*)0)) {
   FUNC_17(VAR_10, "No 'arg%u' argument.", VAR_26);
err:
   FUNC_6(VAR_14);
   FUNC_7(VAR_13);
   FUNC_16();
   return;
  }
  if (FUNC_28(VAR_18, "/dev/", FUNC_27("/dev/")) == 0)
   VAR_18 += FUNC_27("/dev/");
  VAR_15 = FUNC_14(VAR_18);
  if (VAR_15 == ((void*)0)) {
   FUNC_0(1, "Disk %s is invalid.", VAR_18);
   FUNC_17(VAR_10, "Disk %s is invalid.", VAR_18);
   goto err;
  }
  FUNC_5(VAR_14, VAR_15);
  if (FUNC_4(VAR_14, 1, 0, 0) != 0) {
   FUNC_0(1, "Can't open disk %s.", VAR_18);
   FUNC_17(VAR_10, "Can't open disk %s.", VAR_18);
err2:
   FUNC_8(VAR_14);
   goto err;
  }
  if (VAR_15->mediasize == 0 || VAR_15->sectorsize == 0) {
   FUNC_0(1, "Disk %s has no media.", VAR_18);
   FUNC_17(VAR_10, "Disk %s has no media.", VAR_18);
   FUNC_4(VAR_14, -1, 0, 0);
   goto err2;
  }
  if (VAR_15->mediasize < VAR_28)
   VAR_28 = VAR_15->mediasize;
  if (VAR_15->sectorsize > VAR_27)
   VAR_27 = VAR_15->sectorsize;
  FUNC_4(VAR_14, -1, 0, 0);
  FUNC_8(VAR_14);
 }
 FUNC_6(VAR_14);
 FUNC_7(VAR_13);
 VAR_12.md_mediasize = VAR_28;
 VAR_12.md_sectorsize = VAR_27;
 VAR_12.md_mediasize -= (VAR_12.md_mediasize % VAR_12.md_sectorsize);

 VAR_13 = FUNC_10(VAR_11, &VAR_12, VAR_6);
 if (VAR_13 == ((void*)0)) {
  FUNC_17(VAR_10, "Can't create %s.", VAR_12.md_name);
  FUNC_16();
  return;
 }

 VAR_16 = VAR_13->softc;
 FUNC_16();
 FUNC_29(&VAR_16->sc_lock);
 VAR_16->sc_flags |= VAR_4;
 VAR_17 = FUNC_23();
 FUNC_24(VAR_17, "Can't attach disk(s) to %s:", VAR_13->name);
 for (VAR_25 = 0, VAR_26 = 1; VAR_26 < *VAR_20; VAR_26++) {
  FUNC_25(VAR_19, sizeof(VAR_19), "arg%u", VAR_26);
  VAR_18 = FUNC_18(VAR_10, VAR_19);
  if (FUNC_28(VAR_18, "/dev/", FUNC_27("/dev/")) == 0)
   VAR_18 += FUNC_27("/dev/");
  VAR_15 = FUNC_14(VAR_18);
  if (VAR_15 == ((void*)0)) {
   FUNC_0(1, "Provider %s disappear?!", VAR_18);
   FUNC_24(VAR_17, " %s", VAR_18);
   continue;
  }
  VAR_12.md_did = FUNC_1();
  VAR_12.md_priority = VAR_26 - 1;
  if (FUNC_9(VAR_16, VAR_15, &VAR_12) != 0) {
   FUNC_0(1, "Disk %u (%s) not attached to %s.",
       VAR_26, VAR_15->name, VAR_13->name);
   FUNC_24(VAR_17, " %s", VAR_15->name);
   continue;
  }
  VAR_25++;
 }
 FUNC_22(VAR_17);
 VAR_16->sc_flags &= ~VAR_4;
 if (VAR_12.md_all != VAR_25 ||
     (VAR_16->sc_flags & VAR_1) != 0) {
  FUNC_11(VAR_13->softc, VAR_0);
  FUNC_17(VAR_10, "%s", FUNC_20(VAR_17));
 } else
  FUNC_30(&VAR_16->sc_lock);
 FUNC_21(VAR_17);
}
