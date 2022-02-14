
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct g_raid3_softc {scalar_t__ sc_syncid; int sc_flags; int sc_name; } ;
struct TYPE_2__ {scalar_t__ ds_syncid; scalar_t__ ds_offset_done; scalar_t__ ds_offset; } ;
struct g_raid3_disk {int d_flags; TYPE_1__ d_sync; struct g_raid3_softc* d_softc; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct g_raid3_disk*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct g_raid3_disk*) ;

__attribute__((used)) static u_int
FUNC_4(struct g_raid3_disk *VAR_7)
{
 struct g_raid3_softc *VAR_8;
 u_int VAR_9;

 VAR_8 = VAR_7->d_softc;
 if (VAR_8->sc_syncid == VAR_7->d_sync.ds_syncid) {
  if ((VAR_7->d_flags &
      VAR_2) == 0) {

   VAR_9 = VAR_3;
  } else {
   if ((VAR_8->sc_flags &
        VAR_0) == 0 ||
       (VAR_7->d_flags &
        VAR_1) != 0) {




    VAR_9 = VAR_6;
   } else {
    VAR_9 = VAR_5;
   }
  }
 } else if (VAR_7->d_sync.ds_syncid < VAR_8->sc_syncid) {





  VAR_7->d_flags |= VAR_2;
  VAR_7->d_sync.ds_offset = 0;
  VAR_7->d_sync.ds_offset_done = 0;
  VAR_7->d_sync.ds_syncid = VAR_8->sc_syncid;
  if ((VAR_8->sc_flags & VAR_0) == 0 ||
      (VAR_7->d_flags & VAR_1) != 0) {
   VAR_9 = VAR_6;
  } else {
   VAR_9 = VAR_5;
  }
 } else {
  FUNC_0(0, "Device %s was started before the freshest "
      "disk (%s) arrives!! It will not be connected to the "
      "running device.", VAR_8->sc_name,
      FUNC_3(VAR_7));
  FUNC_1(VAR_7);
  VAR_9 = VAR_4;

  return (VAR_9);
 }
 FUNC_0(3, "State for %s disk: %s.",
     FUNC_3(VAR_7), FUNC_2(VAR_9));
 return (VAR_9);
}
