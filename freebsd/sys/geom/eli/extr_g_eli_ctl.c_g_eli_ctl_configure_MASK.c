
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct g_eli_metadata {int md_flags; } ;
typedef struct g_eli_metadata u_char ;
struct gctl_req {int dummy; } ;
struct g_provider {int sectorsize; scalar_t__ mediasize; } ;
struct g_eli_softc {int sc_flags; TYPE_1__* sc_geom; } ;
struct g_consumer {struct g_provider* provider; } ;
struct g_class {int dummy; } ;
typedef int param ;
typedef int md ;
struct TYPE_2__ {int consumer; } ;


 int FUNC_0 (int,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct g_consumer* FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct g_eli_metadata*,struct g_eli_metadata*) ;
 int FUNC_3 (struct g_eli_metadata*,int) ;
 int FUNC_4 (struct g_eli_metadata*,int ) ;
 struct g_eli_softc* FUNC_5 (struct g_class*,char const*) ;
 int FUNC_6 (struct g_class*,struct g_provider*,struct g_eli_metadata*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct g_consumer*,scalar_t__,struct g_eli_metadata*,int) ;
 int FUNC_9 (struct gctl_req*,char*,...) ;
 char* FUNC_10 (struct gctl_req*,char*) ;
 int* FUNC_11 (struct gctl_req*,char*,int) ;
 struct g_eli_metadata* FUNC_12 (int,int ,int) ;
 int FUNC_13 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_14(struct gctl_req *VAR_10, struct g_class *VAR_11)
{
 struct g_eli_softc *VAR_12;
 struct g_eli_metadata VAR_13;
 struct g_provider *VAR_14;
 struct g_consumer *VAR_15;
 char VAR_16[16];
 const char *VAR_17;
 u_char *VAR_18;
 int *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 int *VAR_26, *VAR_27, *VAR_28, *VAR_29;
 int VAR_30, VAR_31, VAR_32;
 u_int VAR_33;

 FUNC_7();

 VAR_32 = 0;
 VAR_30 = 0;

 VAR_19 = FUNC_11(VAR_10, "nargs", sizeof(*VAR_19));
 if (VAR_19 == ((void*)0)) {
  FUNC_9(VAR_10, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_19 <= 0) {
  FUNC_9(VAR_10, "Missing device(s).");
  return;
 }

 VAR_20 = FUNC_11(VAR_10, "boot", sizeof(*VAR_20));
 if (VAR_20 == ((void*)0))
  VAR_20 = &VAR_30;
 VAR_21 = FUNC_11(VAR_10, "noboot", sizeof(*VAR_21));
 if (VAR_21 == ((void*)0))
  VAR_21 = &VAR_30;
 if (*VAR_20 && *VAR_21) {
  FUNC_9(VAR_10, "Options -b and -B are mutually exclusive.");
  return;
 }
 if (*VAR_20 || *VAR_21)
  VAR_32 = 1;

 VAR_22 = FUNC_11(VAR_10, "trim", sizeof(*VAR_22));
 if (VAR_22 == ((void*)0))
  VAR_22 = &VAR_30;
 VAR_23 = FUNC_11(VAR_10, "notrim", sizeof(*VAR_23));
 if (VAR_23 == ((void*)0))
  VAR_23 = &VAR_30;
 if (*VAR_22 && *VAR_23) {
  FUNC_9(VAR_10, "Options -t and -T are mutually exclusive.");
  return;
 }
 if (*VAR_22 || *VAR_23)
  VAR_32 = 1;

 VAR_24 = FUNC_11(VAR_10, "geliboot", sizeof(*VAR_24));
 if (VAR_24 == ((void*)0))
  VAR_24 = &VAR_30;
 VAR_25 = FUNC_11(VAR_10, "nogeliboot", sizeof(*VAR_25));
 if (VAR_25 == ((void*)0))
  VAR_25 = &VAR_30;
 if (*VAR_24 && *VAR_25) {
  FUNC_9(VAR_10, "Options -g and -G are mutually exclusive.");
  return;
 }
 if (*VAR_24 || *VAR_25)
  VAR_32 = 1;

 VAR_26 = FUNC_11(VAR_10, "displaypass", sizeof(*VAR_26));
 if (VAR_26 == ((void*)0))
  VAR_26 = &VAR_30;
 VAR_27 = FUNC_11(VAR_10, "nodisplaypass", sizeof(*VAR_27));
 if (VAR_27 == ((void*)0))
  VAR_27 = &VAR_30;
 if (*VAR_26 && *VAR_27) {
  FUNC_9(VAR_10, "Options -d and -D are mutually exclusive.");
  return;
 }
 if (*VAR_26 || *VAR_27)
  VAR_32 = 1;

 VAR_28 = FUNC_11(VAR_10, "autoresize", sizeof(*VAR_28));
 if (VAR_28 == ((void*)0))
  VAR_28 = &VAR_30;
 VAR_29 = FUNC_11(VAR_10, "noautoresize",
     sizeof(*VAR_29));
 if (VAR_29 == ((void*)0))
  VAR_29 = &VAR_30;
 if (*VAR_28 && *VAR_29) {
  FUNC_9(VAR_10, "Options -r and -R are mutually exclusive.");
  return;
 }
 if (*VAR_28 || *VAR_29)
  VAR_32 = 1;

 if (!VAR_32) {
  FUNC_9(VAR_10, "No option given.");
  return;
 }

 for (VAR_33 = 0; VAR_33 < *VAR_19; VAR_33++) {
  FUNC_13(VAR_16, sizeof(VAR_16), "arg%d", VAR_33);
  VAR_17 = FUNC_10(VAR_10, VAR_16);
  if (VAR_17 == ((void*)0)) {
   FUNC_9(VAR_10, "No 'arg%d' argument.", VAR_33);
   return;
  }
  VAR_12 = FUNC_5(VAR_11, VAR_17);
  if (VAR_12 == ((void*)0)) {




   FUNC_0(1, "Skipping configuration of not attached "
       "provider %s.", VAR_17);
   continue;
  }
  if (VAR_12->sc_flags & VAR_6) {
   FUNC_9(VAR_10, "Cannot change configuration of "
       "read-only provider %s.", VAR_17);
   continue;
  }

  if (*VAR_20 && (VAR_12->sc_flags & VAR_1)) {
   FUNC_0(1, "BOOT flag already configured for %s.",
       VAR_17);
   continue;
  } else if (*VAR_21 && !(VAR_12->sc_flags & VAR_1)) {
   FUNC_0(1, "BOOT flag not configured for %s.",
       VAR_17);
   continue;
  }

  if (*VAR_23 && (VAR_12->sc_flags & VAR_4)) {
   FUNC_0(1, "TRIM disable flag already configured for %s.",
       VAR_17);
   continue;
  } else if (*VAR_22 && !(VAR_12->sc_flags & VAR_4)) {
   FUNC_0(1, "TRIM disable flag not configured for %s.",
       VAR_17);
   continue;
  }

  if (*VAR_24 && (VAR_12->sc_flags & VAR_2)) {
   FUNC_0(1, "GELIBOOT flag already configured for %s.",
       VAR_17);
   continue;
  } else if (*VAR_25 && !(VAR_12->sc_flags & VAR_2)) {
   FUNC_0(1, "GELIBOOT flag not configured for %s.",
       VAR_17);
   continue;
  }

  if (*VAR_26 && (VAR_12->sc_flags & VAR_3)) {
   FUNC_0(1, "GELIDISPLAYPASS flag already configured for %s.",
       VAR_17);
   continue;
  } else if (*VAR_27 &&
      !(VAR_12->sc_flags & VAR_3)) {
   FUNC_0(1, "GELIDISPLAYPASS flag not configured for %s.",
       VAR_17);
   continue;
  }

  if (*VAR_28 && (VAR_12->sc_flags & VAR_0)) {
   FUNC_0(1, "AUTORESIZE flag already configured for %s.",
       VAR_17);
   continue;
  } else if (*VAR_29 &&
      !(VAR_12->sc_flags & VAR_0)) {
   FUNC_0(1, "AUTORESIZE flag not configured for %s.",
       VAR_17);
   continue;
  }

  if (!(VAR_12->sc_flags & VAR_5)) {







   VAR_15 = FUNC_1(&VAR_12->sc_geom->consumer);
   VAR_14 = VAR_15->provider;
   VAR_31 = FUNC_6(VAR_11, VAR_14, &VAR_13);
   if (VAR_31 != 0) {
       FUNC_9(VAR_10,
    "Cannot read metadata from %s (error=%d).",
    VAR_17, VAR_31);
       continue;
   }
  }

  if (*VAR_20) {
   VAR_13.md_flags |= VAR_1;
   VAR_12->sc_flags |= VAR_1;
  } else if (*VAR_21) {
   VAR_13.md_flags &= ~VAR_1;
   VAR_12->sc_flags &= ~VAR_1;
  }

  if (*VAR_23) {
   VAR_13.md_flags |= VAR_4;
   VAR_12->sc_flags |= VAR_4;
  } else if (*VAR_22) {
   VAR_13.md_flags &= ~VAR_4;
   VAR_12->sc_flags &= ~VAR_4;
  }

  if (*VAR_24) {
   VAR_13.md_flags |= VAR_2;
   VAR_12->sc_flags |= VAR_2;
  } else if (*VAR_25) {
   VAR_13.md_flags &= ~VAR_2;
   VAR_12->sc_flags &= ~VAR_2;
  }

  if (*VAR_26) {
   VAR_13.md_flags |= VAR_3;
   VAR_12->sc_flags |= VAR_3;
  } else if (*VAR_27) {
   VAR_13.md_flags &= ~VAR_3;
   VAR_12->sc_flags &= ~VAR_3;
  }

  if (*VAR_28) {
   VAR_13.md_flags |= VAR_0;
   VAR_12->sc_flags |= VAR_0;
  } else if (*VAR_29) {
   VAR_13.md_flags &= ~VAR_0;
   VAR_12->sc_flags &= ~VAR_0;
  }

  if (VAR_12->sc_flags & VAR_5) {

   continue;
  }

  VAR_18 = FUNC_12(VAR_14->sectorsize, VAR_7, VAR_8 | VAR_9);
  FUNC_2(&VAR_13, VAR_18);
  VAR_31 = FUNC_8(VAR_15, VAR_14->mediasize - VAR_14->sectorsize, VAR_18,
      VAR_14->sectorsize);
  if (VAR_31 != 0) {
   FUNC_9(VAR_10,
       "Cannot store metadata on %s (error=%d).",
       VAR_17, VAR_31);
  }
  FUNC_3(&VAR_13, sizeof(VAR_13));
  FUNC_3(VAR_18, VAR_14->sectorsize);
  FUNC_4(VAR_18, VAR_7);
 }
}
