
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_provider {int sectorsize; int mediasize; int name; } ;
struct g_geom {int name; int dumpconf; int access; int orphan; int start; struct g_cache_softc* softc; } ;
struct g_consumer {int dummy; } ;
struct g_class {int dummy; } ;
struct g_cache_softc {int sc_type; int sc_bshift; int sc_bsize; int sc_maxent; int sc_callout; int sc_mtx; int sc_tail; struct g_geom* sc_geom; int sc_usedlist; int * sc_desclist; int sc_zone; } ;
struct g_cache_metadata {int md_size; int md_bsize; int md_name; } ;


 int FUNC_0 (int ,struct g_cache_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,struct g_cache_softc*) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int,int ,struct g_cache_softc*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct g_consumer*,struct g_provider*) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_9 (struct g_class*,char const*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (struct g_consumer*) ;
 int FUNC_11 (struct g_geom*) ;
 int FUNC_12 (struct g_provider*) ;
 int FUNC_13 (struct g_provider*,int ) ;
 int FUNC_14 (struct g_cache_softc*) ;
 struct g_cache_softc* FUNC_15 (int,int) ;
 struct g_consumer* FUNC_16 (struct g_geom*) ;
 struct g_geom* FUNC_17 (struct g_class*,char*,int ) ;
 struct g_provider* FUNC_18 (struct g_geom*,char*,int ) ;
 int FUNC_19 () ;
 int VAR_13 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,char*,int *,int ) ;
 int FUNC_22 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static struct g_geom *
FUNC_23(struct g_class *VAR_14, struct g_provider *VAR_15,
    const struct g_cache_metadata *VAR_16, u_int VAR_17)
{
 struct g_cache_softc *VAR_18;
 struct g_geom *VAR_19;
 struct g_provider *VAR_20;
 struct g_consumer *VAR_21;
 u_int VAR_22;
 int VAR_23;

 FUNC_19();

 VAR_19 = ((void*)0);
 VAR_20 = ((void*)0);
 VAR_21 = ((void*)0);

 FUNC_1(1, "Creating device %s.", VAR_16->md_name);


 if (VAR_16->md_size < 100) {
  FUNC_1(0, "Invalid size for device %s.", VAR_16->md_name);
  return (((void*)0));
 }


 VAR_22 = FUNC_7(VAR_16->md_bsize) - 1;
 if (VAR_16->md_bsize == 0 || VAR_16->md_bsize > VAR_2 ||
     VAR_16->md_bsize != 1 << VAR_22 ||
     (VAR_16->md_bsize % VAR_15->sectorsize) != 0) {
  FUNC_1(0, "Invalid blocksize for provider %s.", VAR_15->name);
  return (((void*)0));
 }


 if (FUNC_9(VAR_14, (const char *)&VAR_16->md_name) != ((void*)0)) {
  FUNC_1(0, "Provider %s already exists.", VAR_16->md_name);
  return (((void*)0));
 }

 VAR_19 = FUNC_17(VAR_14, "%s", VAR_16->md_name);
 VAR_18 = FUNC_15(sizeof(*VAR_18), VAR_4 | VAR_5);
 VAR_18->sc_type = VAR_17;
 VAR_18->sc_bshift = VAR_22;
 VAR_18->sc_bsize = 1 << VAR_22;
 VAR_18->sc_zone = FUNC_22("gcache", VAR_18->sc_bsize, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_6, 0);
 FUNC_21(&VAR_18->sc_mtx, "GEOM CACHE mutex", ((void*)0), VAR_3);
 for (VAR_23 = 0; VAR_23 < VAR_0; VAR_23++)
  FUNC_2(&VAR_18->sc_desclist[VAR_23]);
 FUNC_4(&VAR_18->sc_usedlist);
 VAR_18->sc_maxent = VAR_16->md_size;
 FUNC_5(&VAR_18->sc_callout, &VAR_18->sc_mtx, 0);
 VAR_19->softc = VAR_18;
 VAR_18->sc_geom = VAR_19;
 VAR_19->start = VAR_11;
 VAR_19->orphan = VAR_10;
 VAR_19->access = VAR_7;
 VAR_19->dumpconf = VAR_8;

 VAR_20 = FUNC_18(VAR_19, "cache/%s", VAR_19->name);
 VAR_20->sectorsize = VAR_15->sectorsize;
 VAR_20->mediasize = VAR_15->mediasize;
 if (VAR_17 == VAR_1)
  VAR_20->mediasize -= VAR_15->sectorsize;
 VAR_18->sc_tail = FUNC_0(FUNC_3(VAR_20->mediasize, VAR_18), VAR_18);

 VAR_21 = FUNC_16(VAR_19);
 if (FUNC_8(VAR_21, VAR_15) != 0) {
  FUNC_1(0, "Cannot attach to provider %s.", VAR_15->name);
  FUNC_10(VAR_21);
  FUNC_12(VAR_20);
  FUNC_20(&VAR_18->sc_mtx);
  FUNC_14(VAR_18);
  FUNC_11(VAR_19);
  return (((void*)0));
 }

 FUNC_13(VAR_20, 0);
 FUNC_1(0, "Device %s created.", VAR_19->name);
 FUNC_6(&VAR_18->sc_callout, VAR_12 * VAR_13, VAR_9, VAR_18);
 return (VAR_19);
}
