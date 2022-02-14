
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct g_raid3_softc {scalar_t__ sc_state; int sc_bump_id; int sc_name; int sc_lock; } ;
struct g_raid3_metadata {int dummy; } ;
struct g_raid3_disk {int d_flags; struct g_consumer* d_consumer; struct g_raid3_softc* d_softc; } ;
struct g_consumer {int acr; int acw; int ace; TYPE_1__* provider; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ mediasize; scalar_t__ sectorsize; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct g_raid3_disk*,int ,int ) ;
 int FUNC_4 (struct g_raid3_disk*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct g_consumer*,scalar_t__,int *,scalar_t__) ;
 int * FUNC_7 (size_t,int ,int) ;
 int FUNC_8 (struct g_raid3_metadata*,int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int
FUNC_10(struct g_raid3_disk *VAR_10, struct g_raid3_metadata *VAR_11)
{
 struct g_raid3_softc *VAR_12;
 struct g_consumer *VAR_13;
 off_t VAR_14, VAR_15;
 u_char *VAR_16;
 int VAR_17 = 0;

 FUNC_5();
 VAR_12 = VAR_10->d_softc;
 FUNC_9(&VAR_12->sc_lock, VAR_8);

 VAR_13 = VAR_10->d_consumer;
 FUNC_1(VAR_13 != ((void*)0), ("NULL consumer (%s).", VAR_12->sc_name));
 FUNC_1(VAR_13->provider != ((void*)0), ("NULL provider (%s).", VAR_12->sc_name));
 FUNC_1(VAR_13->acr >= 1 && VAR_13->acw >= 1 && VAR_13->ace >= 1,
     ("Consumer %s closed? (r%dw%de%d).", VAR_13->provider->name, VAR_13->acr,
     VAR_13->acw, VAR_13->ace));
 VAR_15 = VAR_13->provider->sectorsize;
 VAR_14 = VAR_13->provider->mediasize - VAR_15;
 VAR_16 = FUNC_7((size_t)VAR_15, VAR_5, VAR_6 | VAR_7);
 if (VAR_11 != ((void*)0))
  FUNC_8(VAR_11, VAR_16);
 VAR_17 = FUNC_6(VAR_13, VAR_14, VAR_16, VAR_15);
 FUNC_2(VAR_16, VAR_5);
 if (VAR_17 != 0) {
  if ((VAR_10->d_flags & VAR_2) == 0) {
   FUNC_0(0, "Cannot write metadata on %s "
       "(device=%s, error=%d).",
       FUNC_4(VAR_10), VAR_12->sc_name, VAR_17);
   VAR_10->d_flags |= VAR_2;
  } else {
   FUNC_0(1, "Cannot write metadata on %s "
       "(device=%s, error=%d).",
       FUNC_4(VAR_10), VAR_12->sc_name, VAR_17);
  }
  if (VAR_9 &&
      VAR_12->sc_state == VAR_1) {
   VAR_12->sc_bump_id |= VAR_0;
   FUNC_3(VAR_10,
       VAR_3,
       VAR_4);
  }
 }
 return (VAR_17);
}
