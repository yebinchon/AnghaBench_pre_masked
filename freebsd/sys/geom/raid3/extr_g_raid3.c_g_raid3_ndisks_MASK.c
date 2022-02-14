
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct g_raid3_softc {size_t sc_ndisks; struct g_raid3_disk* sc_disks; int sc_lock; } ;
struct g_raid3_disk {int d_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

u_int
FUNC_1(struct g_raid3_softc *VAR_2, int VAR_3)
{
 struct g_raid3_disk *VAR_4;
 u_int VAR_5, VAR_6;

 FUNC_0(&VAR_2->sc_lock, VAR_1);

 for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_2->sc_ndisks; VAR_5++) {
  VAR_4 = &VAR_2->sc_disks[VAR_5];
  if (VAR_4->d_state == VAR_0)
   continue;
  if (VAR_3 == -1 || VAR_4->d_state == VAR_3)
   VAR_6++;
 }
 return (VAR_6);
}
