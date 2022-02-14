
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int dummy; } ;
struct gctl_req {int dummy; } ;
struct g_geom {struct gv_softc* softc; } ;
struct g_class {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,struct g_class*) ;
 int FUNC_2 (struct g_geom*,int ) ;
 int FUNC_3 (struct gv_softc*) ;

__attribute__((used)) static int
FUNC_4(struct gctl_req *VAR_2, struct g_class *VAR_3, struct g_geom *VAR_4)
{
 struct gv_softc *VAR_5;

 FUNC_1(VAR_1, "gv_unload(%p)", VAR_3);

 FUNC_0();
 VAR_5 = VAR_4->softc;

 if (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_5);
  VAR_4->softc = ((void*)0);
  FUNC_2(VAR_4, VAR_0);
 }

 return (0);
}
