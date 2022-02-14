
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_dev_softc {struct cdev* sc_dev; } ;
struct g_consumer {TYPE_1__* geom; struct g_dev_softc* private; } ;
struct diocskerneldump_arg {int kda_index; } ;
struct cdev {int si_flags; } ;
typedef int kda ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct diocskerneldump_arg*,int) ;
 int FUNC_1 (struct cdev*) ;
 int FUNC_2 (struct cdev*,int ,struct g_consumer*) ;
 int FUNC_3 (struct cdev*) ;
 int FUNC_4 (int ,struct diocskerneldump_arg*) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,struct g_consumer*,int ) ;

__attribute__((used)) static void
FUNC_7(struct g_consumer *VAR_4)
{
 struct cdev *VAR_5;
 struct g_dev_softc *VAR_6;

 FUNC_5();
 VAR_6 = VAR_4->private;
 VAR_5 = VAR_6->sc_dev;
 FUNC_6(VAR_0, "g_dev_orphan(%p(%s))", VAR_4, VAR_4->geom->name);


 if (VAR_5->si_flags & VAR_2) {
  struct diocskerneldump_arg VAR_7;

  FUNC_0(&VAR_7, sizeof(VAR_7));
  VAR_7.kda_index = VAR_1;
  (void)FUNC_4(FUNC_3(VAR_5), &VAR_7);
 }


 FUNC_1(VAR_5);
 FUNC_2(VAR_5, VAR_3, VAR_4);
}
