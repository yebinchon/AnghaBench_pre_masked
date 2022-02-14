
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {struct g_mirror_disk* sc_hint; int sc_disks; } ;
struct g_mirror_disk {scalar_t__ d_state; } ;


 scalar_t__ VAR_0 ;
 struct g_mirror_disk* FUNC_0 (int *) ;
 void* FUNC_1 (struct g_mirror_softc*,struct g_mirror_disk*) ;

__attribute__((used)) static struct g_mirror_disk *
FUNC_2(struct g_mirror_softc *VAR_1)
{
 struct g_mirror_disk *VAR_2;

 if (VAR_1->sc_hint == ((void*)0)) {
  VAR_1->sc_hint = FUNC_0(&VAR_1->sc_disks);
  if (VAR_1->sc_hint == ((void*)0))
   return (((void*)0));
 }
 VAR_2 = VAR_1->sc_hint;
 if (VAR_2->d_state != VAR_0) {
  VAR_2 = FUNC_1(VAR_1, VAR_2);
  if (VAR_2 == ((void*)0))
   return (((void*)0));
 }
 VAR_1->sc_hint = FUNC_1(VAR_1, VAR_2);
 return (VAR_2);
}
