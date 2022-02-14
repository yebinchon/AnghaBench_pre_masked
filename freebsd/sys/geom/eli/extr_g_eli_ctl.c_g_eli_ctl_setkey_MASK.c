
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_eli_metadata {int md_iterations; int md_keys; int md_keylen; int md_ealgo; struct g_eli_metadata* md_mkeys; } ;
typedef struct g_eli_metadata u_char ;
struct gctl_req {int dummy; } ;
struct g_provider {int sectorsize; char const* name; scalar_t__ mediasize; } ;
struct g_eli_softc {int sc_flags; int sc_nkey; int sc_mkey; TYPE_1__* sc_geom; } ;
struct g_consumer {struct g_provider* provider; } ;
struct g_class {int dummy; } ;
typedef int md ;
typedef int intmax_t ;
struct TYPE_2__ {int consumer; } ;


 int FUNC_0 (int,char*,int,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct g_consumer* FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,struct g_eli_metadata*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct g_eli_metadata*,struct g_eli_metadata*) ;
 int FUNC_5 (struct g_eli_metadata*,int) ;
 int FUNC_6 (struct g_eli_metadata*,int ) ;
 struct g_eli_softc* FUNC_7 (struct g_class*,char const*) ;
 int FUNC_8 (int ,struct g_eli_metadata*,int ,struct g_eli_metadata*) ;
 int FUNC_9 (struct g_class*,struct g_provider*,struct g_eli_metadata*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct g_consumer*,scalar_t__,struct g_eli_metadata*,int) ;
 int FUNC_12 (struct gctl_req*,char*,...) ;
 char* FUNC_13 (struct gctl_req*,char*) ;
 struct g_eli_metadata* FUNC_14 (struct gctl_req*,char*,int*) ;
 int* FUNC_15 (struct gctl_req*,char*,int) ;
 struct g_eli_metadata* FUNC_16 (int,int ,int) ;

__attribute__((used)) static void
FUNC_17(struct gctl_req *VAR_7, struct g_class *VAR_8)
{
 struct g_eli_softc *VAR_9;
 struct g_eli_metadata VAR_10;
 struct g_provider *VAR_11;
 struct g_consumer *VAR_12;
 const char *VAR_13;
 u_char *VAR_14, *VAR_15, *VAR_16;
 intmax_t *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 FUNC_10();

 VAR_13 = FUNC_13(VAR_7, "arg0");
 if (VAR_13 == ((void*)0)) {
  FUNC_12(VAR_7, "No 'arg%u' argument.", 0);
  return;
 }
 VAR_14 = FUNC_14(VAR_7, "key", &VAR_18);
 if (VAR_14 == ((void*)0) || VAR_18 != VAR_3) {
  FUNC_12(VAR_7, "No '%s' argument.", "key");
  return;
 }
 VAR_9 = FUNC_7(VAR_8, VAR_13);
 if (VAR_9 == ((void*)0)) {
  FUNC_12(VAR_7, "Provider %s is invalid.", VAR_13);
  return;
 }
 if (VAR_9->sc_flags & VAR_0) {
  FUNC_12(VAR_7, "Cannot change keys for read-only provider.");
  return;
 }
 VAR_12 = FUNC_1(&VAR_9->sc_geom->consumer);
 VAR_11 = VAR_12->provider;

 VAR_20 = FUNC_9(VAR_8, VAR_11, &VAR_10);
 if (VAR_20 != 0) {
  FUNC_12(VAR_7, "Cannot read metadata from %s (error=%d).",
      VAR_13, VAR_20);
  return;
 }

 VAR_17 = FUNC_15(VAR_7, "keyno", sizeof(*VAR_17));
 if (VAR_17 == ((void*)0)) {
  FUNC_12(VAR_7, "No '%s' argument.", "keyno");
  return;
 }
 if (*VAR_17 != -1)
  VAR_19 = *VAR_17;
 else
  VAR_19 = VAR_9->sc_nkey;
 if (VAR_19 < 0 || VAR_19 >= VAR_1) {
  FUNC_12(VAR_7, "Invalid '%s' argument.", "keyno");
  return;
 }

 VAR_17 = FUNC_15(VAR_7, "iterations", sizeof(*VAR_17));
 if (VAR_17 == ((void*)0)) {
  FUNC_12(VAR_7, "No '%s' argument.", "iterations");
  return;
 }

 if (*VAR_17 != -1 && VAR_10.md_iterations == -1) {
  VAR_10.md_iterations = *VAR_17;
 } else if (*VAR_17 != -1 && *VAR_17 != VAR_10.md_iterations) {
  if (FUNC_3(VAR_10.md_keys) != 1) {
   FUNC_12(VAR_7, "To be able to use '-i' option, only "
       "one key can be defined.");
   return;
  }
  if (VAR_10.md_keys != (1 << VAR_19)) {
   FUNC_12(VAR_7, "Only already defined key can be "
       "changed when '-i' option is used.");
   return;
  }
  VAR_10.md_iterations = *VAR_17;
 }

 VAR_15 = VAR_10.md_mkeys + VAR_19 * VAR_2;
 VAR_10.md_keys |= (1 << VAR_19);

 FUNC_2(VAR_9->sc_mkey, VAR_15, sizeof(VAR_9->sc_mkey));


 VAR_20 = FUNC_8(VAR_10.md_ealgo, VAR_14, VAR_10.md_keylen, VAR_15);
 FUNC_5(VAR_14, VAR_18);
 if (VAR_20 != 0) {
  FUNC_5(&VAR_10, sizeof(VAR_10));
  FUNC_12(VAR_7, "Cannot encrypt Master Key (error=%d).", VAR_20);
  return;
 }

 VAR_16 = FUNC_16(VAR_11->sectorsize, VAR_4, VAR_5 | VAR_6);

 FUNC_4(&VAR_10, VAR_16);
 FUNC_5(&VAR_10, sizeof(VAR_10));
 VAR_20 = FUNC_11(VAR_12, VAR_11->mediasize - VAR_11->sectorsize, VAR_16,
     VAR_11->sectorsize);
 FUNC_5(VAR_16, VAR_11->sectorsize);
 FUNC_6(VAR_16, VAR_4);
 if (VAR_20 != 0) {
  FUNC_12(VAR_7, "Cannot store metadata on %s (error=%d).",
      VAR_11->name, VAR_20);
  return;
 }
 FUNC_0(1, "Key %u changed on %s.", VAR_19, VAR_11->name);
}
