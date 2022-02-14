
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int dummy; } ;
struct gv_drive {int dummy; } ;
struct g_geom {int name; struct gv_softc* softc; } ;
struct g_consumer {struct gv_drive* private; struct g_geom* geom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct gv_softc*,int ,struct gv_drive*,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct g_consumer *VAR_2)
{
 struct g_geom *VAR_3;
 struct gv_softc *VAR_4;
 struct gv_drive *VAR_5;

 FUNC_1();

 FUNC_0(VAR_2 != ((void*)0), ("gv_orphan: null cp"));
 VAR_3 = VAR_2->geom;
 FUNC_0(VAR_3 != ((void*)0), ("gv_orphan: null gp"));
 VAR_4 = VAR_3->softc;
 FUNC_0(VAR_4 != ((void*)0), ("gv_orphan: null sc"));
 VAR_5 = VAR_2->private;
 FUNC_0(VAR_5 != ((void*)0), ("gv_orphan: null d"));

 FUNC_2(VAR_1, "gv_orphan(%s)", VAR_3->name);

 FUNC_3(VAR_4, VAR_0, VAR_5, ((void*)0), 0, 0);
}
