
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct g_mirror_softc {scalar_t__ sc_syncid; int sc_flags; int sc_name; } ;
struct TYPE_2__ {scalar_t__ ds_syncid; scalar_t__ ds_offset_done; scalar_t__ ds_offset; } ;
struct g_mirror_disk {int d_flags; TYPE_1__ d_sync; struct g_mirror_softc* d_softc; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct g_mirror_disk*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct g_mirror_disk*) ;
 scalar_t__ FUNC_4 (struct g_mirror_softc*,int ) ;

__attribute__((used)) static u_int
FUNC_5(struct g_mirror_disk *VAR_8)
{
 struct g_mirror_softc *VAR_9;
 u_int VAR_10;

 VAR_9 = VAR_8->d_softc;
 if (VAR_9->sc_syncid == VAR_8->d_sync.ds_syncid) {
  if ((VAR_8->d_flags &
      VAR_3) == 0 &&
      (FUNC_4(VAR_9, VAR_4) == 0 ||
       (VAR_8->d_flags & VAR_1) == 0)) {

   VAR_10 = VAR_4;
  } else {
   if ((VAR_9->sc_flags &
        VAR_0) == 0 ||
       (VAR_8->d_flags &
        VAR_2) != 0) {




    VAR_10 = VAR_7;
   } else {
    VAR_10 = VAR_6;
   }
  }
 } else if (VAR_8->d_sync.ds_syncid < VAR_9->sc_syncid) {





  VAR_8->d_flags |= VAR_3;
  VAR_8->d_sync.ds_offset = 0;
  VAR_8->d_sync.ds_offset_done = 0;
  VAR_8->d_sync.ds_syncid = VAR_9->sc_syncid;
  if ((VAR_9->sc_flags & VAR_0) == 0 ||
      (VAR_8->d_flags & VAR_2) != 0) {
   VAR_10 = VAR_7;
  } else {
   VAR_10 = VAR_6;
  }
 } else {
  FUNC_0(0, "Device %s was started before the freshest "
      "disk (%s) arrives!! It will not be connected to the "
      "running device.", VAR_9->sc_name,
      FUNC_3(VAR_8));
  FUNC_1(VAR_8);
  VAR_10 = VAR_5;

  return (VAR_10);
 }
 FUNC_0(3, "State for %s disk: %s.",
     FUNC_3(VAR_8), FUNC_2(VAR_10));
 return (VAR_10);
}
