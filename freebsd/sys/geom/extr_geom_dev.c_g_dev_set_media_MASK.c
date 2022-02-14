
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_dev_softc {struct cdev* sc_alias; struct cdev* sc_dev; } ;
struct g_consumer {struct g_dev_softc* private; } ;
struct cdev {char* si_name; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*,int ) ;
 int FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct g_consumer *VAR_2)
{
 struct g_dev_softc *VAR_3;
 struct cdev *VAR_4;
 char VAR_5[VAR_1 + 6];

 VAR_3 = VAR_2->private;
 VAR_4 = VAR_3->sc_dev;
 FUNC_1(VAR_5, sizeof(VAR_5), "cdev=%s", VAR_4->si_name);
 FUNC_0("DEVFS", "CDEV", "MEDIACHANGE", VAR_5, VAR_0);
 FUNC_0("GEOM", "DEV", "MEDIACHANGE", VAR_5, VAR_0);
 VAR_4 = VAR_3->sc_alias;
 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_5, sizeof(VAR_5), "cdev=%s", VAR_4->si_name);
  FUNC_0("DEVFS", "CDEV", "MEDIACHANGE", VAR_5, VAR_0);
  FUNC_0("GEOM", "DEV", "MEDIACHANGE", VAR_5, VAR_0);
 }
}
