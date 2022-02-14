
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vdev_reopening; struct g_consumer* vdev_tsd; } ;
typedef TYPE_2__ vdev_t ;
struct g_consumer {int flags; TYPE_1__* provider; } ;
struct TYPE_5__ {scalar_t__ error; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(vdev_t *VAR_1)
{
 struct g_consumer *VAR_2;

 VAR_2 = VAR_1->vdev_tsd;

 FUNC_0();
 FUNC_2();

 if (!VAR_1->vdev_reopening ||
     (VAR_2 != ((void*)0) && ((VAR_2->flags & VAR_0) != 0 ||
     (VAR_2->provider != ((void*)0) && VAR_2->provider->error != 0))))
  FUNC_4(VAR_1);

 FUNC_3();
 FUNC_1();
}
