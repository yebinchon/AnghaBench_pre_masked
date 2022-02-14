
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_multipath_softc {int sc_mtx; int sc_ndisks; } ;
struct g_consumer {int index; int private; TYPE_2__* geom; TYPE_1__* provider; } ;
struct TYPE_4__ {char* name; struct g_multipath_softc* softc; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_consumer*,int ) ;
 int FUNC_1 (struct g_consumer*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_6(struct g_consumer *VAR_2)
{
 struct g_multipath_softc *VAR_3;
 uintptr_t *VAR_4;

 FUNC_2();
 FUNC_5("GEOM_MULTIPATH: %s in %s was disconnected\n",
     VAR_2->provider->name, VAR_2->geom->name);
 VAR_3 = VAR_2->geom->softc;
 VAR_4 = (uintptr_t *)&VAR_2->private;
 FUNC_3(&VAR_3->sc_mtx);
 VAR_3->sc_ndisks--;
 FUNC_1(VAR_2, VAR_0);
 if (*VAR_4 == 0 && (VAR_2->index & VAR_1) == 0) {
  VAR_2->index |= VAR_1;
  FUNC_4(&VAR_3->sc_mtx);
  FUNC_0(VAR_2, 0);
 } else
  FUNC_4(&VAR_3->sc_mtx);
}
