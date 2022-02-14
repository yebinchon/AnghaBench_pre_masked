
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct g_eli_metadata {int md_keys; struct g_eli_metadata* md_mkeys; } ;
typedef struct g_eli_metadata u_char ;
struct gctl_req {int dummy; } ;
struct g_provider {int sectorsize; int name; scalar_t__ mediasize; } ;
struct g_eli_softc {int sc_flags; int sc_nkey; TYPE_1__* sc_geom; } ;
struct g_consumer {struct g_provider* provider; } ;
struct g_class {int dummy; } ;
typedef int md ;
typedef int intmax_t ;
struct TYPE_2__ {int consumer; } ;


 int FUNC_0 (int,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct g_consumer* FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct g_eli_metadata*,size_t,int ) ;
 int FUNC_3 (struct g_eli_metadata*,struct g_eli_metadata*) ;
 int FUNC_4 (struct g_eli_metadata*,int) ;
 int FUNC_5 (struct g_eli_metadata*,int ) ;
 struct g_eli_softc* FUNC_6 (struct g_class*,char const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (struct g_class*,struct g_provider*,struct g_eli_metadata*) ;
 int FUNC_8 (struct g_consumer*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct g_consumer*,scalar_t__,struct g_eli_metadata*,int) ;
 int FUNC_11 (struct gctl_req*,char*,...) ;
 char* FUNC_12 (struct gctl_req*,char*) ;
 int* FUNC_13 (struct gctl_req*,char*,int) ;
 struct g_eli_metadata* FUNC_14 (int,int ,int) ;

__attribute__((used)) static void
FUNC_15(struct gctl_req *VAR_7, struct g_class *VAR_8)
{
 struct g_eli_softc *VAR_9;
 struct g_eli_metadata VAR_10;
 struct g_provider *VAR_11;
 struct g_consumer *VAR_12;
 const char *VAR_13;
 u_char *VAR_14, *VAR_15;
 intmax_t *VAR_16;
 size_t VAR_17;
 int VAR_18, VAR_19, *VAR_20, *VAR_21;
 u_int VAR_22;

 FUNC_9();

 VAR_19 = 0;

 VAR_13 = FUNC_12(VAR_7, "arg0");
 if (VAR_13 == ((void*)0)) {
  FUNC_11(VAR_7, "No 'arg%u' argument.", 0);
  return;
 }
 VAR_9 = FUNC_6(VAR_8, VAR_13);
 if (VAR_9 == ((void*)0)) {
  FUNC_11(VAR_7, "Provider %s is invalid.", VAR_13);
  return;
 }
 if (VAR_9->sc_flags & VAR_0) {
  FUNC_11(VAR_7, "Cannot delete keys for read-only provider.");
  return;
 }
 VAR_12 = FUNC_1(&VAR_9->sc_geom->consumer);
 VAR_11 = VAR_12->provider;

 VAR_18 = FUNC_7(VAR_8, VAR_11, &VAR_10);
 if (VAR_18 != 0) {
  FUNC_11(VAR_7, "Cannot read metadata from %s (error=%d).",
      VAR_13, VAR_18);
  return;
 }

 VAR_20 = FUNC_13(VAR_7, "all", sizeof(*VAR_20));
 if (VAR_20 == ((void*)0)) {
  FUNC_11(VAR_7, "No '%s' argument.", "all");
  return;
 }

 if (*VAR_20) {
  VAR_14 = VAR_10.md_mkeys;
  VAR_17 = sizeof(VAR_10.md_mkeys);
 } else {
  VAR_21 = FUNC_13(VAR_7, "force", sizeof(*VAR_21));
  if (VAR_21 == ((void*)0)) {
   FUNC_11(VAR_7, "No '%s' argument.", "force");
   return;
  }

  VAR_16 = FUNC_13(VAR_7, "keyno", sizeof(*VAR_16));
  if (VAR_16 == ((void*)0)) {
   FUNC_11(VAR_7, "No '%s' argument.", "keyno");
   return;
  }
  if (*VAR_16 != -1)
   VAR_19 = *VAR_16;
  else
   VAR_19 = VAR_9->sc_nkey;
  if (VAR_19 < 0 || VAR_19 >= VAR_1) {
   FUNC_11(VAR_7, "Invalid '%s' argument.", "keyno");
   return;
  }
  if (!(VAR_10.md_keys & (1 << VAR_19)) && !*VAR_21) {
   FUNC_11(VAR_7, "Master Key %u is not set.", VAR_19);
   return;
  }
  VAR_10.md_keys &= ~(1 << VAR_19);
  if (VAR_10.md_keys == 0 && !*VAR_21) {
   FUNC_11(VAR_7, "This is the last Master Key. Use '-f' "
       "flag if you really want to remove it.");
   return;
  }
  VAR_14 = VAR_10.md_mkeys + VAR_19 * VAR_2;
  VAR_17 = VAR_2;
 }

 VAR_15 = FUNC_14(VAR_11->sectorsize, VAR_3, VAR_4 | VAR_5);
 for (VAR_22 = 0; VAR_22 <= VAR_6; VAR_22++) {
  if (VAR_22 == VAR_6)
   FUNC_4(VAR_14, VAR_17);
  else
   FUNC_2(VAR_14, VAR_17, 0);

  FUNC_3(&VAR_10, VAR_15);
  VAR_18 = FUNC_10(VAR_12, VAR_11->mediasize - VAR_11->sectorsize, VAR_15,
      VAR_11->sectorsize);
  if (VAR_18 != 0) {
   FUNC_0(0, "Cannot store metadata on %s "
       "(error=%d).", VAR_11->name, VAR_18);
  }




  (void)FUNC_8(VAR_12);
 }
 FUNC_4(&VAR_10, sizeof(VAR_10));
 FUNC_4(VAR_15, VAR_11->sectorsize);
 FUNC_5(VAR_15, VAR_3);
 if (*VAR_20)
  FUNC_0(1, "All keys removed from %s.", VAR_11->name);
 else
  FUNC_0(1, "Key %d removed from %s.", VAR_19, VAR_11->name);
}
