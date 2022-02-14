
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ mediasize; char* name; int flags; int sectorsize; } ;
struct g_geom {char* name; struct g_gate_softc* softc; int dumpconf; int orphan; int access; int start; } ;
struct g_gate_softc {int sc_flags; int sc_seq; scalar_t__ sc_queue_size; int sc_timeout; size_t sc_unit; char* sc_name; scalar_t__ sc_readoffset; int sc_queue_mtx; int sc_callout; struct g_provider* sc_provider; struct g_consumer* sc_readcons; scalar_t__ sc_queue_count; int sc_outqueue; int sc_inqueue; int sc_info; } ;
struct g_gate_ctl_create {scalar_t__ gctl_mediasize; int gctl_sectorsize; int gctl_flags; size_t gctl_unit; char* gctl_name; scalar_t__ gctl_maxcount; int gctl_timeout; char* gctl_readprov; int gctl_readoffset; int gctl_info; } ;
struct g_consumer {int flags; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 char* VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ,struct g_gate_softc*) ;
 int FUNC_5 (struct g_gate_softc*,int ) ;
 int FUNC_6 (struct g_consumer*,int,int ,int ) ;
 int FUNC_7 (struct g_consumer*,struct g_provider*) ;
 int FUNC_8 (struct g_consumer*) ;
 int FUNC_9 (struct g_geom*) ;
 int FUNC_10 (struct g_consumer*) ;
 int FUNC_11 (struct g_provider*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t FUNC_12 (size_t,int*) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct g_gate_softc** VAR_26 ;
 int VAR_27 ;
 struct g_consumer* FUNC_13 (struct g_geom*) ;
 struct g_geom* FUNC_14 (int *,char*,char*) ;
 struct g_provider* FUNC_15 (struct g_geom*,char*,char*) ;
 struct g_provider* FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int VAR_28 ;
 struct g_gate_softc* FUNC_19 (int,int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,char*,int *,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int) ;
 int FUNC_25 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_26 (char*,char*) ;
 int FUNC_27 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_28(struct g_gate_ctl_create *VAR_29)
{
 struct g_gate_softc *VAR_30;
 struct g_geom *VAR_31;
 struct g_provider *VAR_32, *VAR_33;
 struct g_consumer *VAR_34;
 char VAR_35[VAR_17];
 int VAR_36 = 0, VAR_37;

 if (VAR_29->gctl_mediasize <= 0) {
  FUNC_0(1, "Invalid media size.");
  return (VAR_1);
 }
 if (VAR_29->gctl_sectorsize <= 0) {
  FUNC_0(1, "Invalid sector size.");
  return (VAR_1);
 }
 if (!FUNC_24(VAR_29->gctl_sectorsize)) {
  FUNC_0(1, "Invalid sector size.");
  return (VAR_1);
 }
 if ((VAR_29->gctl_mediasize % VAR_29->gctl_sectorsize) != 0) {
  FUNC_0(1, "Invalid media size.");
  return (VAR_1);
 }
 if ((VAR_29->gctl_flags & VAR_4) != 0 &&
     (VAR_29->gctl_flags & VAR_5) != 0) {
  FUNC_0(1, "Invalid flags.");
  return (VAR_1);
 }
 if (VAR_29->gctl_unit != VAR_9 &&
     VAR_29->gctl_unit != VAR_7 &&
     VAR_29->gctl_unit < 0) {
  FUNC_0(1, "Invalid unit number.");
  return (VAR_1);
 }
 if (VAR_29->gctl_unit == VAR_7 &&
     VAR_29->gctl_name[0] == '\0') {
  FUNC_0(1, "No device name.");
  return (VAR_1);
 }

 VAR_30 = FUNC_19(sizeof(*VAR_30), VAR_14, VAR_15 | VAR_16);
 VAR_30->sc_flags = (VAR_29->gctl_flags & VAR_10);
 FUNC_27(VAR_30->sc_info, VAR_29->gctl_info, sizeof(VAR_30->sc_info));
 VAR_30->sc_seq = 1;
 FUNC_2(&VAR_30->sc_inqueue);
 FUNC_2(&VAR_30->sc_outqueue);
 FUNC_21(&VAR_30->sc_queue_mtx, "gg:queue", ((void*)0), VAR_13);
 VAR_30->sc_queue_count = 0;
 VAR_30->sc_queue_size = VAR_29->gctl_maxcount;
 if (VAR_30->sc_queue_size > VAR_6)
  VAR_30->sc_queue_size = VAR_6;
 VAR_30->sc_timeout = VAR_29->gctl_timeout;
 FUNC_3(&VAR_30->sc_callout, 1);

 FUNC_22(&VAR_27);
 VAR_30->sc_unit = FUNC_12(VAR_29->gctl_unit, &VAR_36);
 if (VAR_30->sc_unit < 0)
  goto fail1;
 if (VAR_29->gctl_unit == VAR_7)
  FUNC_25(VAR_35, sizeof(VAR_35), "%s", VAR_29->gctl_name);
 else {
  FUNC_25(VAR_35, sizeof(VAR_35), "%s%d", VAR_8,
      VAR_30->sc_unit);
 }

 for (VAR_37 = 0; VAR_37 < VAR_22; VAR_37++) {
  if (VAR_26[VAR_37] == ((void*)0))
   continue;
  if (FUNC_26(VAR_35, VAR_26[VAR_37]->sc_name) != 0)
   continue;
  VAR_36 = VAR_0;
  goto fail1;
 }
 VAR_30->sc_name = VAR_35;
 VAR_26[VAR_30->sc_unit] = VAR_30;
 VAR_23++;
 FUNC_23(&VAR_27);

 FUNC_17();

 if (VAR_29->gctl_readprov[0] == '\0') {
  VAR_33 = ((void*)0);
 } else {
  VAR_33 = FUNC_16(VAR_29->gctl_readprov);
  if (VAR_33 == ((void*)0)) {
   FUNC_0(1, "Provider %s doesn't exist.",
       VAR_29->gctl_readprov);
   VAR_36 = VAR_1;
   goto fail2;
  }
  if ((VAR_29->gctl_readoffset % VAR_29->gctl_sectorsize) != 0) {
   FUNC_0(1, "Invalid read offset.");
   VAR_36 = VAR_1;
   goto fail2;
  }
  if (VAR_29->gctl_mediasize + VAR_29->gctl_readoffset >
      VAR_33->mediasize) {
   FUNC_0(1, "Invalid read offset or media size.");
   VAR_36 = VAR_1;
   goto fail2;
  }
 }

 VAR_31 = FUNC_14(&VAR_19, "%s", VAR_35);
 VAR_31->start = VAR_25;
 VAR_31->access = VAR_18;
 VAR_31->orphan = VAR_24;
 VAR_31->dumpconf = VAR_20;
 VAR_31->softc = VAR_30;

 if (VAR_33 != ((void*)0)) {
  VAR_34 = FUNC_13(VAR_31);
  VAR_34->flags |= VAR_3 | VAR_2;
  VAR_36 = FUNC_7(VAR_34, VAR_33);
  if (VAR_36 != 0) {
   FUNC_0(1, "Unable to attach to %s.", VAR_33->name);
   goto fail3;
  }
  VAR_36 = FUNC_6(VAR_34, 1, 0, 0);
  if (VAR_36 != 0) {
   FUNC_0(1, "Unable to access %s.", VAR_33->name);
   FUNC_10(VAR_34);
   goto fail3;
  }
  VAR_30->sc_readcons = VAR_34;
  VAR_30->sc_readoffset = VAR_29->gctl_readoffset;
 }

 VAR_29->gctl_unit = VAR_30->sc_unit;

 VAR_32 = FUNC_15(VAR_31, "%s", VAR_35);
 VAR_32->flags |= VAR_12 | VAR_11;
 VAR_32->mediasize = VAR_29->gctl_mediasize;
 VAR_32->sectorsize = VAR_29->gctl_sectorsize;
 VAR_30->sc_provider = VAR_32;
 FUNC_11(VAR_32, 0);

 FUNC_18();
 FUNC_22(&VAR_27);
 VAR_30->sc_name = VAR_30->sc_provider->name;
 FUNC_23(&VAR_27);
 FUNC_0(1, "Device %s created.", VAR_31->name);

 if (VAR_30->sc_timeout > 0) {
  FUNC_4(&VAR_30->sc_callout, VAR_30->sc_timeout * VAR_28,
      VAR_21, VAR_30);
 }
 return (0);
fail3:
 FUNC_8(VAR_34);
 FUNC_9(VAR_31);
fail2:
 FUNC_18();
 FUNC_22(&VAR_27);
 VAR_26[VAR_30->sc_unit] = ((void*)0);
 FUNC_1(VAR_23 > 0, ("negative g_gate_nunits?"));
 VAR_23--;
fail1:
 FUNC_23(&VAR_27);
 FUNC_20(&VAR_30->sc_queue_mtx);
 FUNC_5(VAR_30, VAR_14);
 return (VAR_36);
}
