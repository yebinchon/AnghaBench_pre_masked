
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_dev_softc {struct cdev* sc_alias; struct cdev* sc_dev; } ;
struct g_consumer {struct g_dev_softc* private; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cdev*) ;
 scalar_t__ FUNC_1 (struct g_consumer*,int,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct g_consumer*,int*,char*) ;
 char* FUNC_4 (int,int) ;
 int FUNC_5 (int ,struct cdev**,struct cdev*,struct cdev*,char*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct g_consumer *VAR_4)
{
 struct g_dev_softc *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_1(VAR_4, 1, 0, 0) != 0)
  return;

 VAR_5 = VAR_4->private;
 VAR_8 = VAR_1;
 VAR_6 = FUNC_4(VAR_8, VAR_2|VAR_3);
 VAR_7 = FUNC_3("GEOM::physpath", VAR_4, &VAR_8, VAR_6);
 FUNC_1(VAR_4, -1, 0, 0);
 if (VAR_7 == 0 && FUNC_6(VAR_6) != 0) {
  struct cdev *VAR_9, *VAR_10;
  struct cdev **VAR_11;

  VAR_9 = VAR_5->sc_dev;
  VAR_10 = VAR_5->sc_alias;
  VAR_11 = (struct cdev **)&VAR_5->sc_alias;
  FUNC_5(VAR_0, VAR_11, VAR_9,
      VAR_10, VAR_6);
 } else if (VAR_5->sc_alias) {
  FUNC_0((struct cdev *)VAR_5->sc_alias);
  VAR_5->sc_alias = ((void*)0);
 }
 FUNC_2(VAR_6);
}
