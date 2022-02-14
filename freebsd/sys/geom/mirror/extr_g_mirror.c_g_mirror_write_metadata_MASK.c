
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct g_mirror_softc {int sc_flags; int sc_bump_id; int sc_name; int sc_lock; } ;
struct g_mirror_metadata {scalar_t__ md_mediasize; } ;
struct g_mirror_disk {int d_flags; struct g_consumer* d_consumer; struct g_mirror_softc* d_softc; } ;
struct g_consumer {int acr; int acw; int ace; TYPE_1__* provider; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ sectorsize; scalar_t__ mediasize; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (struct g_mirror_disk*,int ,int ) ;
 int FUNC_5 (struct g_mirror_disk*) ;
 int VAR_13 ;
 int FUNC_6 (struct g_mirror_softc*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct g_consumer*,scalar_t__,int *,scalar_t__) ;
 int * FUNC_9 (size_t,int ,int) ;
 int FUNC_10 (struct g_mirror_metadata*,int *) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int
FUNC_12(struct g_mirror_disk *VAR_14,
    struct g_mirror_metadata *VAR_15)
{
 struct g_mirror_softc *VAR_16;
 struct g_consumer *VAR_17;
 off_t VAR_18, VAR_19;
 u_char *VAR_20;
 int VAR_21 = 0;

 FUNC_7();
 VAR_16 = VAR_14->d_softc;
 FUNC_11(&VAR_16->sc_lock, VAR_11);

 VAR_17 = VAR_14->d_consumer;
 FUNC_1(VAR_17 != ((void*)0), ("NULL consumer (%s).", VAR_16->sc_name));
 FUNC_1(VAR_17->provider != ((void*)0), ("NULL provider (%s).", VAR_16->sc_name));
 FUNC_1(VAR_17->acr >= 1 && VAR_17->acw >= 1 && VAR_17->ace >= 1,
     ("Consumer %s closed? (r%dw%de%d).", VAR_17->provider->name, VAR_17->acr,
     VAR_17->acw, VAR_17->ace));
 VAR_19 = VAR_17->provider->sectorsize;
 VAR_18 = VAR_17->provider->mediasize - VAR_19;
 VAR_20 = FUNC_9((size_t)VAR_19, VAR_8, VAR_9 | VAR_10);
 if (VAR_15 != ((void*)0) &&
     (VAR_16->sc_flags & VAR_3) == 0) {



  if (VAR_18 < VAR_15->md_mediasize)
   VAR_21 = VAR_1;
  else
   FUNC_10(VAR_15, VAR_20);
 }
 FUNC_2(VAR_0, VAR_13, VAR_21);
 if (VAR_21 == 0)
  VAR_21 = FUNC_8(VAR_17, VAR_18, VAR_20, VAR_19);
 FUNC_3(VAR_20, VAR_8);
 if (VAR_21 != 0) {
  if ((VAR_14->d_flags & VAR_4) == 0) {
   VAR_14->d_flags |= VAR_4;
   FUNC_0(0, "Cannot write metadata on %s "
       "(device=%s, error=%d).",
       FUNC_5(VAR_14), VAR_16->sc_name, VAR_21);
  } else {
   FUNC_0(1, "Cannot write metadata on %s "
       "(device=%s, error=%d).",
       FUNC_5(VAR_14), VAR_16->sc_name, VAR_21);
  }
  if (VAR_12 &&
      FUNC_6(VAR_16, VAR_5) > 1) {
   VAR_16->sc_bump_id |= VAR_2;
   FUNC_4(VAR_14,
       VAR_6,
       VAR_7);
  }
 }
 return (VAR_21);
}
