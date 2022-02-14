
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct g_raid3_softc {int sc_flags; int sc_bump_id; int sc_name; int sc_state; int * sc_provider; int sc_lock; } ;
struct TYPE_2__ {int ds_offset_done; int ds_offset; } ;
struct g_raid3_disk {int d_state; int d_flags; TYPE_1__ d_sync; struct g_raid3_softc* d_softc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;


 int FUNC_2 (int,char*) ;
 int VAR_9 ;
 int FUNC_3 (struct g_raid3_disk*) ;
 int FUNC_4 (struct g_raid3_disk*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct g_raid3_disk*) ;
 int FUNC_8 (struct g_raid3_softc*) ;
 int FUNC_9 (struct g_raid3_softc*,int ) ;
 int FUNC_10 (struct g_raid3_softc*,struct g_raid3_disk*) ;
 int FUNC_11 (struct g_raid3_disk*) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int
FUNC_13(struct g_raid3_disk *VAR_10, u_int VAR_11)
{
 struct g_raid3_softc *VAR_12;

 VAR_12 = VAR_10->d_softc;
 FUNC_12(&VAR_12->sc_lock, VAR_9);

again:
 FUNC_1(3, "Changing disk %s state from %s to %s.",
     FUNC_7(VAR_10), FUNC_6(VAR_10->d_state),
     FUNC_6(VAR_11));
 switch (VAR_11) {
 case 130:





  FUNC_2(VAR_10->d_state == VAR_8,
      ("Wrong disk state (%s, %s).", FUNC_7(VAR_10),
      FUNC_6(VAR_10->d_state)));
  FUNC_0();

  VAR_10->d_state = VAR_11;
  FUNC_1(1, "Device %s: provider %s detected.",
      VAR_12->sc_name, FUNC_7(VAR_10));
  if (VAR_12->sc_state == VAR_4)
   break;
  FUNC_2(VAR_12->sc_state == VAR_3 ||
      VAR_12->sc_state == VAR_2,
      ("Wrong device state (%s, %s, %s, %s).", VAR_12->sc_name,
      FUNC_5(VAR_12->sc_state),
      FUNC_7(VAR_10),
      FUNC_6(VAR_10->d_state)));
  VAR_11 = FUNC_4(VAR_10);
  if (VAR_11 != VAR_8)
   goto again;
  break;
 case 132:





  FUNC_2(VAR_12->sc_state == VAR_3 ||
      VAR_12->sc_state == VAR_2,
      ("Wrong device state (%s, %s, %s, %s).", VAR_12->sc_name,
      FUNC_5(VAR_12->sc_state),
      FUNC_7(VAR_10),
      FUNC_6(VAR_10->d_state)));

  FUNC_2(VAR_10->d_state == 130 ||
      VAR_10->d_state == 128,
      ("Wrong disk state (%s, %s).", FUNC_7(VAR_10),
      FUNC_6(VAR_10->d_state)));
  FUNC_0();

  if (VAR_10->d_state == 128) {
   VAR_10->d_flags &= ~VAR_7;
   VAR_10->d_flags &= ~VAR_6;
   FUNC_9(VAR_12, 0);
  }
  VAR_10->d_state = VAR_11;
  VAR_10->d_sync.ds_offset = 0;
  VAR_10->d_sync.ds_offset_done = 0;
  FUNC_10(VAR_12, VAR_10);
  FUNC_11(VAR_10);
  FUNC_1(1, "Device %s: provider %s activated.",
      VAR_12->sc_name, FUNC_7(VAR_10));
  break;
 case 129:





  FUNC_2(VAR_10->d_state == 130,
      ("Wrong disk state (%s, %s).", FUNC_7(VAR_10),
      FUNC_6(VAR_10->d_state)));
  FUNC_2(VAR_12->sc_state == VAR_3 ||
      VAR_12->sc_state == VAR_2,
      ("Wrong device state (%s, %s, %s, %s).", VAR_12->sc_name,
      FUNC_5(VAR_12->sc_state),
      FUNC_7(VAR_10),
      FUNC_6(VAR_10->d_state)));




  FUNC_2((VAR_12->sc_flags & VAR_1) != 0,
      ("Wrong device state (%s, %s, %s, %s).", VAR_12->sc_name,
      FUNC_5(VAR_12->sc_state),
      FUNC_7(VAR_10),
      FUNC_6(VAR_10->d_state)));
  FUNC_0();

  VAR_10->d_flags &= ~VAR_5;
  VAR_10->d_state = VAR_11;
  FUNC_11(VAR_10);
  FUNC_1(0, "Device %s: provider %s is stale.",
      VAR_12->sc_name, FUNC_7(VAR_10));
  break;
 case 128:





  FUNC_2(VAR_10->d_state == 130,
      ("Wrong disk state (%s, %s).", FUNC_7(VAR_10),
      FUNC_6(VAR_10->d_state)));
  FUNC_2(VAR_12->sc_state == VAR_3 ||
      VAR_12->sc_state == VAR_2,
      ("Wrong device state (%s, %s, %s, %s).", VAR_12->sc_name,
      FUNC_5(VAR_12->sc_state),
      FUNC_7(VAR_10),
      FUNC_6(VAR_10->d_state)));
  FUNC_0();

  if (VAR_10->d_state == 130)
   VAR_10->d_flags &= ~VAR_5;
  VAR_10->d_state = VAR_11;
  if (VAR_12->sc_provider != ((void*)0)) {
   FUNC_8(VAR_12);
   FUNC_11(VAR_10);
  }
  break;
 case 131:






  if (VAR_12->sc_state == VAR_3 ||
      VAR_12->sc_state == VAR_2) {




   FUNC_2(VAR_10->d_state == 132 ||
       VAR_10->d_state == 129 ||
       VAR_10->d_state == 128,
       ("Wrong disk state (%s, %s).",
       FUNC_7(VAR_10),
       FUNC_6(VAR_10->d_state)));
  } else if (VAR_12->sc_state == VAR_4) {

   FUNC_2(VAR_10->d_state == 130,
       ("Wrong disk state (%s, %s).",
       FUNC_7(VAR_10),
       FUNC_6(VAR_10->d_state)));




   if ((VAR_12->sc_bump_id & VAR_0) != 0)
    VAR_12->sc_bump_id &= ~VAR_0;
  }
  FUNC_0();
  FUNC_1(0, "Device %s: provider %s disconnected.",
      VAR_12->sc_name, FUNC_7(VAR_10));

  FUNC_3(VAR_10);
  break;
 default:
  FUNC_2(1 == 0, ("Unknown state (%u).", VAR_11));
  break;
 }
 return (0);
}
