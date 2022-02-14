
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int dummy; } ;
struct gv_plex {int rqueue; struct gv_softc* vinumconf; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (int ) ;
 int FUNC_1 (struct gv_plex*,struct bio*) ;

__attribute__((used)) static void
FUNC_2(struct gv_plex *VAR_0)
{
 struct gv_softc *VAR_1;
 struct bio *VAR_2;

 VAR_1 = VAR_0->vinumconf;
 VAR_2 = FUNC_0(VAR_0->rqueue);
 while (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_0, VAR_2);
  VAR_2 = FUNC_0(VAR_0->rqueue);
 }
}
