
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct g_raid3_softc {int sc_flags; size_t sc_ndisks; int sc_name; struct g_raid3_disk* sc_disks; int sc_last_write; scalar_t__ sc_idle; int sc_lock; } ;
struct g_raid3_disk {scalar_t__ d_state; int d_flags; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct g_raid3_disk*) ;
 int FUNC_2 (struct g_raid3_disk*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct g_raid3_softc *VAR_5)
{
 struct g_raid3_disk *VAR_6;
 u_int VAR_7;

 FUNC_3();
 FUNC_4(&VAR_5->sc_lock, VAR_3);

 if ((VAR_5->sc_flags & VAR_0) != 0)
  return;
 VAR_5->sc_idle = 0;
 VAR_5->sc_last_write = VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_5->sc_ndisks; VAR_7++) {
  VAR_6 = &VAR_5->sc_disks[VAR_7];
  if (VAR_6->d_state != VAR_2)
   continue;
  FUNC_0(1, "Disk %s (device %s) marked as dirty.",
      FUNC_1(VAR_6), VAR_5->sc_name);
  VAR_6->d_flags |= VAR_1;
  FUNC_2(VAR_6);
 }
}
