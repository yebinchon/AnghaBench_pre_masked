
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int sc_flags; int sc_name; scalar_t__ sc_idle; int sc_lock; } ;
struct g_mirror_disk {int d_flags; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct g_mirror_disk*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct g_mirror_softc *VAR_3, struct g_mirror_disk *VAR_4)
{

 FUNC_2(&VAR_3->sc_lock, VAR_2);

 if ((VAR_3->sc_flags & VAR_0) != 0)
  return;
 if (!VAR_3->sc_idle && (VAR_4->d_flags & VAR_1) == 0) {
  FUNC_0(2, "Disk %s (device %s) marked as dirty.",
      FUNC_1(VAR_4), VAR_3->sc_name);
  VAR_4->d_flags |= VAR_1;
 } else if (VAR_3->sc_idle &&
     (VAR_4->d_flags & VAR_1) != 0) {
  FUNC_0(2, "Disk %s (device %s) marked as clean.",
      FUNC_1(VAR_4), VAR_3->sc_name);
  VAR_4->d_flags &= ~VAR_1;
 }
}
