
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct gctl_req {int dummy; } ;
struct g_provider {char* name; int sectorsize; int mediasize; } ;
struct g_geom {struct g_eli_worker* softc; int access; int dumpconf; int resize; void* orphan; void* spoiled; int start; } ;
struct g_eli_worker {int sc_nkey; int sc_flags; int sc_cpubind; int w_number; int sc_ealgo; int sc_aalgo; scalar_t__ sc_crypto; int sc_queue_mtx; int sc_workers; int sc_ekeylen; int sc_sectorsize; int sc_mediasize; int w_proc; int w_active; struct g_eli_worker* w_softc; int sc_ekeys_lock; int sc_queue; struct g_geom* sc_geom; } ;
struct g_eli_softc {int sc_nkey; int sc_flags; int sc_cpubind; int w_number; int sc_ealgo; int sc_aalgo; scalar_t__ sc_crypto; int sc_queue_mtx; int sc_workers; int sc_ekeylen; int sc_sectorsize; int sc_mediasize; int w_proc; int w_active; struct g_eli_softc* w_softc; int sc_ekeys_lock; int sc_queue; struct g_geom* sc_geom; } ;
struct g_eli_metadata {int md_flags; } ;
struct g_consumer {int acr; int * provider; } ;
struct g_class {int dummy; } ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct g_eli_worker*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct g_eli_worker*,int) ;
 int FUNC_6 (struct g_eli_worker*,struct g_eli_metadata const*,int ,int ) ;
 int FUNC_7 (struct g_eli_worker*,int ) ;
 int FUNC_8 (struct g_consumer*,int,int,int) ;
 int FUNC_9 (struct g_consumer*,struct g_provider*) ;
 int FUNC_10 (struct g_consumer*) ;
 int FUNC_11 (struct g_geom*) ;
 int FUNC_12 (struct g_consumer*) ;
 int VAR_12 ;
 char* FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 int VAR_13 ;
 int FUNC_15 (struct g_eli_worker*) ;
 int FUNC_16 (struct g_eli_worker*) ;
 int FUNC_17 (struct g_eli_worker*,int const*) ;
 int FUNC_18 (struct g_eli_worker*) ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_19 (struct g_provider*,int ) ;
 struct g_consumer* FUNC_20 (struct g_geom*) ;
 struct g_geom* FUNC_21 (struct g_class*,char*,char*,int ) ;
 struct g_provider* FUNC_22 (struct g_geom*,char*,char*,int ) ;
 int VAR_19 ;
 int FUNC_23 (struct gctl_req*,char*,char*,int) ;
 int FUNC_24 (int,char*) ;
 int FUNC_25 (int ,struct g_eli_worker*,int *,int ,int ,char*,int,char*) ;
 struct g_eli_worker* FUNC_26 (int,int ,int) ;
 int VAR_20 ;
 int FUNC_27 (int *,int *,int ,char*,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,char*,int *,int ) ;
 int FUNC_30 (int *) ;
 int VAR_21 ;
 int FUNC_31 (struct g_eli_worker*) ;

struct g_geom *
FUNC_32(struct gctl_req *VAR_22, struct g_class *VAR_23, struct g_provider *VAR_24,
    const struct g_eli_metadata *VAR_25, const u_char *VAR_26, int VAR_27)
{
 struct g_eli_softc *VAR_28;
 struct g_eli_worker *VAR_29;
 struct g_geom *VAR_30;
 struct g_provider *VAR_31;
 struct g_consumer *VAR_32;
 u_int VAR_33, VAR_34;
 int VAR_35, VAR_36;

 FUNC_0(1, "Creating device %s%s.", VAR_24->name, VAR_5);

 VAR_30 = FUNC_21(VAR_23, "%s%s", VAR_24->name, VAR_5);
 VAR_28 = FUNC_26(sizeof(*VAR_28), VAR_7, VAR_8 | VAR_9);
 VAR_30->start = VAR_16;




 VAR_30->spoiled = VAR_14;
 VAR_30->orphan = VAR_14;
 VAR_30->resize = VAR_15;
 VAR_30->dumpconf = VAR_13;




 if (VAR_25->md_flags & (VAR_4 | VAR_3))
  VAR_30->access = VAR_12;
 else
  VAR_30->access = VAR_19;

 FUNC_6(VAR_28, VAR_25, VAR_24->sectorsize, VAR_24->mediasize);
 VAR_28->sc_nkey = VAR_27;

 VAR_30->softc = VAR_28;
 VAR_28->sc_geom = VAR_30;

 FUNC_4(&VAR_28->sc_queue);
 FUNC_29(&VAR_28->sc_queue_mtx, "geli:queue", ((void*)0), VAR_6);
 FUNC_29(&VAR_28->sc_ekeys_lock, "geli:ekeys", ((void*)0), VAR_6);

 VAR_31 = ((void*)0);
 VAR_32 = FUNC_20(VAR_30);
 VAR_36 = FUNC_9(VAR_32, VAR_24);
 if (VAR_36 != 0) {
  if (VAR_22 != ((void*)0)) {
   FUNC_23(VAR_22, "Cannot attach to %s (error=%d).",
       VAR_24->name, VAR_36);
  } else {
   FUNC_0(1, "Cannot attach to %s (error=%d).",
       VAR_24->name, VAR_36);
  }
  goto failed;
 }







 VAR_35 = (VAR_28->sc_flags & VAR_3) ? 0 : 1;
 VAR_36 = FUNC_8(VAR_32, 1, VAR_35, 1);
 if (VAR_36 != 0) {
  if (VAR_22 != ((void*)0)) {
   FUNC_23(VAR_22, "Cannot access %s (error=%d).",
       VAR_24->name, VAR_36);
  } else {
   FUNC_0(1, "Cannot access %s (error=%d).",
       VAR_24->name, VAR_36);
  }
  goto failed;
 }




 FUNC_17(VAR_28, VAR_26);

 FUNC_2(&VAR_28->sc_workers);

 VAR_34 = VAR_17;
 if (VAR_34 == 0)
  VAR_34 = VAR_20;
 VAR_28->sc_cpubind = (VAR_20 > 1 && VAR_34 == VAR_20);
 for (VAR_33 = 0; VAR_33 < VAR_34; VAR_33++) {
  if (FUNC_14(VAR_33)) {
   FUNC_0(1, "%s: CPU %u disabled, skipping.",
       VAR_24->name, VAR_33);
   continue;
  }
  VAR_29 = FUNC_26(sizeof(*VAR_29), VAR_7, VAR_8 | VAR_9);
  VAR_29->w_softc = VAR_28;
  VAR_29->w_number = VAR_33;
  VAR_29->w_active = VAR_11;

  VAR_36 = FUNC_18(VAR_29);
  if (VAR_36 != 0) {
   FUNC_7(VAR_29, VAR_7);
   if (VAR_22 != ((void*)0)) {
    FUNC_23(VAR_22, "Cannot set up crypto session "
        "for %s (error=%d).", VAR_24->name, VAR_36);
   } else {
    FUNC_0(1, "Cannot set up crypto session "
        "for %s (error=%d).", VAR_24->name, VAR_36);
   }
   goto failed;
  }

  VAR_36 = FUNC_25(VAR_18, VAR_29, &VAR_29->w_proc, 0, 0,
      "g_eli[%u] %s", VAR_33, VAR_24->name);
  if (VAR_36 != 0) {
   FUNC_15(VAR_29);
   FUNC_7(VAR_29, VAR_7);
   if (VAR_22 != ((void*)0)) {
    FUNC_23(VAR_22, "Cannot create kernel thread "
        "for %s (error=%d).", VAR_24->name, VAR_36);
   } else {
    FUNC_0(1, "Cannot create kernel thread "
        "for %s (error=%d).", VAR_24->name, VAR_36);
   }
   goto failed;
  }
  FUNC_3(&VAR_28->sc_workers, VAR_29, VAR_21);
 }




 VAR_31 = FUNC_22(VAR_30, "%s%s", VAR_24->name, VAR_5);
 VAR_31->mediasize = VAR_28->sc_mediasize;
 VAR_31->sectorsize = VAR_28->sc_sectorsize;

 FUNC_19(VAR_31, 0);

 FUNC_0(0, "Device %s created.", VAR_31->name);
 FUNC_0(0, "Encryption: %s %u", FUNC_13(VAR_28->sc_ealgo),
     VAR_28->sc_ekeylen);
 switch (VAR_28->sc_ealgo) {
 case 130:
  FUNC_24(13,
      "support for GEOM_ELI volumes encrypted with 3des");
  break;
 case 129:
  FUNC_24(13,
      "support for GEOM_ELI volumes encrypted with blowfish");
  break;
 }
 if (VAR_28->sc_flags & VAR_1) {
  FUNC_0(0, " Integrity: %s", FUNC_13(VAR_28->sc_aalgo));
  switch (VAR_28->sc_aalgo) {
  case 128:
   FUNC_24(13,
      "support for GEOM_ELI volumes authenticated with hmac/md5");
   break;
  }
 }
 FUNC_0(0, "    Crypto: %s",
     VAR_28->sc_crypto == VAR_0 ? "software" : "hardware");
 return (VAR_30);
failed:
 FUNC_30(&VAR_28->sc_queue_mtx);
 VAR_28->sc_flags |= VAR_2;
 FUNC_31(VAR_28);



 while (!FUNC_1(&VAR_28->sc_workers)) {
  FUNC_27(&VAR_28->sc_workers, &VAR_28->sc_queue_mtx, VAR_10,
      "geli:destroy", 0);
 }
 FUNC_28(&VAR_28->sc_queue_mtx);
 if (VAR_32->provider != ((void*)0)) {
  if (VAR_32->acr == 1)
   FUNC_8(VAR_32, -1, -VAR_35, -1);
  FUNC_12(VAR_32);
 }
 FUNC_10(VAR_32);
 FUNC_11(VAR_30);
 FUNC_16(VAR_28);
 FUNC_5(VAR_28, sizeof(*VAR_28));
 FUNC_7(VAR_28, VAR_7);
 return (((void*)0));
}
