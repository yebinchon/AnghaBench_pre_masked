
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_provider {TYPE_1__* geom; int * private; } ;
struct g_disk_softc {scalar_t__* led; int start_mtx; int done_mtx; int * sysctl_tree; int sysctl_ctx; struct disk* dp; } ;
struct disk {int (* d_gone ) (struct disk*) ;} ;
struct TYPE_2__ {int * softc; } ;


 int FUNC_0 (struct g_disk_softc*) ;
 int FUNC_1 (scalar_t__*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct disk*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct g_provider *VAR_0)
{
 struct disk *VAR_1;
 struct g_disk_softc *VAR_2;

 VAR_2 = (struct g_disk_softc *)VAR_0->private;
 VAR_1 = VAR_2->dp;
 if (VAR_1 != ((void*)0) && VAR_1->d_gone != ((void*)0))
  VAR_1->d_gone(VAR_1);
 if (VAR_2->sysctl_tree != ((void*)0)) {
  FUNC_4(&VAR_2->sysctl_ctx);
  VAR_2->sysctl_tree = ((void*)0);
 }
 if (VAR_2->led[0] != 0) {
  FUNC_1(VAR_2->led, "0");
  VAR_2->led[0] = 0;
 }
 VAR_0->private = ((void*)0);
 VAR_0->geom->softc = ((void*)0);
 FUNC_2(&VAR_2->done_mtx);
 FUNC_2(&VAR_2->start_mtx);
 FUNC_0(VAR_2);
}
