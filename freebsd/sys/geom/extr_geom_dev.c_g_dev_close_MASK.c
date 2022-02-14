
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct g_dev_softc {scalar_t__ sc_open; int sc_active; int sc_mtx; } ;
struct g_consumer {struct g_dev_softc* private; TYPE_1__* geom; } ;
struct cdev {struct g_consumer* si_drv2; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (struct g_consumer*,int,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int ,int,int,struct thread*) ;
 int VAR_8 ;
 int FUNC_6 (int*,int *,int ,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct cdev *VAR_9, int VAR_10, int VAR_11, struct thread *VAR_12)
{
 struct g_consumer *VAR_13;
 struct g_dev_softc *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_13 = VAR_9->si_drv2;
 if (VAR_13 == ((void*)0))
  return (VAR_1);
 FUNC_5(VAR_4, "g_dev_close(%s, %d, %d, %p)",
     VAR_13->geom->name, VAR_10, VAR_11, VAR_12);

 VAR_16 = VAR_10 & VAR_2 ? -1 : 0;
 VAR_17 = VAR_10 & VAR_3 ? -1 : 0;



 VAR_18 = 0;
 if (VAR_16 + VAR_17 + VAR_18 == 0)
  return (VAR_0);

 VAR_14 = VAR_13->private;
 FUNC_7(&VAR_14->sc_mtx);
 VAR_14->sc_open += VAR_16 + VAR_17 + VAR_18;
 if (VAR_14->sc_open == 0)
  FUNC_0(&VAR_14->sc_active, VAR_7);
 else
  FUNC_1(&VAR_14->sc_active, VAR_7);
 while (VAR_14->sc_open == 0 && (VAR_14->sc_active & VAR_6) != 0)
  FUNC_6(&VAR_14->sc_active, &VAR_14->sc_mtx, 0, "g_dev_close", VAR_8 / 10);
 FUNC_8(&VAR_14->sc_mtx);
 FUNC_3();
 VAR_15 = FUNC_2(VAR_13, VAR_16, VAR_17, VAR_18);
 FUNC_4();
 return (VAR_15);
}
