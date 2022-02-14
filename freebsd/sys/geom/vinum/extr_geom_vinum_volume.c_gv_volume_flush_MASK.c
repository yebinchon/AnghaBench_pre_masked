
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int wqueue; struct gv_softc* vinumconf; } ;
struct gv_softc {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct bio* FUNC_1 (int ) ;
 int FUNC_2 (struct gv_softc*,struct bio*) ;

void
FUNC_3(struct gv_volume *VAR_0)
{
 struct gv_softc *VAR_1;
 struct bio *VAR_2;

 FUNC_0(VAR_0 != ((void*)0), ("NULL v"));
 VAR_1 = VAR_0->vinumconf;
 FUNC_0(VAR_1 != ((void*)0), ("NULL sc"));

 VAR_2 = FUNC_1(VAR_0->wqueue);
 while (VAR_2 != ((void*)0)) {
  FUNC_2(VAR_1, VAR_2);
  VAR_2 = FUNC_1(VAR_0->wqueue);
 }
}
