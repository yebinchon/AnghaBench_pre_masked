
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct g_raid3_softc {int sc_flags; int sc_idle; scalar_t__ sc_writes; int sc_last_write; size_t sc_ndisks; int sc_name; struct g_raid3_disk* sc_disks; TYPE_1__* sc_provider; int sc_lock; } ;
struct g_raid3_disk {scalar_t__ d_state; int d_flags; } ;
struct TYPE_2__ {scalar_t__ acw; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct g_raid3_disk*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct g_raid3_disk*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(struct g_raid3_softc *VAR_7, int VAR_8)
{
 struct g_raid3_disk *VAR_9;
 u_int VAR_10;
 int VAR_11;

 FUNC_3();
 FUNC_4(&VAR_7->sc_lock, VAR_3);

 if (VAR_7->sc_provider == ((void*)0))
  return (0);
 if ((VAR_7->sc_flags & VAR_0) != 0)
  return (0);
 if (VAR_7->sc_idle)
  return (0);
 if (VAR_7->sc_writes > 0)
  return (0);
 if (VAR_8 > 0 || (VAR_8 == -1 && VAR_7->sc_provider->acw > 0)) {
  VAR_11 = VAR_4 - (VAR_6 - VAR_7->sc_last_write);
  if (!VAR_5 && VAR_11 > 0)
   return (VAR_11);
 }
 VAR_7->sc_idle = 1;
 for (VAR_10 = 0; VAR_10 < VAR_7->sc_ndisks; VAR_10++) {
  VAR_9 = &VAR_7->sc_disks[VAR_10];
  if (VAR_9->d_state != VAR_2)
   continue;
  FUNC_0(1, "Disk %s (device %s) marked as clean.",
      FUNC_1(VAR_9), VAR_7->sc_name);
  VAR_9->d_flags &= ~VAR_1;
  FUNC_2(VAR_9);
 }
 return (0);
}
