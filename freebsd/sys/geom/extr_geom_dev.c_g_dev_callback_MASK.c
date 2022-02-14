
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_dev_softc {int sc_active; int * sc_alias; int * sc_dev; } ;
struct g_consumer {TYPE_1__* geom; struct g_dev_softc* private; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,struct g_consumer*,int ,int *) ;
 int FUNC_2 (int ,char*,struct g_consumer*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5)
{
 struct g_consumer *VAR_6;
 struct g_dev_softc *VAR_7;
 int VAR_8;

 VAR_6 = VAR_5;
 VAR_7 = VAR_6->private;
 FUNC_2(VAR_0, "g_dev_callback(%p(%s))", VAR_6, VAR_6->geom->name);

 VAR_7->sc_dev = ((void*)0);
 VAR_7->sc_alias = ((void*)0);
 VAR_8 = FUNC_0(&VAR_7->sc_active, VAR_3);
 if ((VAR_8 & VAR_2) == 0)
  FUNC_1(VAR_4, VAR_6, VAR_1, ((void*)0));
}
