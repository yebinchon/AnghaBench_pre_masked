
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int wqueue; int plexes; int flags; struct gv_softc* vinumconf; } ;
struct gv_softc {int volumes; } ;
struct bio_queue_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct gv_volume*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int VAR_3 ;

int
FUNC_5(struct gv_softc *VAR_4, struct gv_volume *VAR_5)
{
 FUNC_0(VAR_5 != ((void*)0), ("gv_create_volume: NULL v"));

 VAR_5->vinumconf = VAR_4;
 VAR_5->flags |= VAR_0;
 FUNC_1(&VAR_5->plexes);
 FUNC_2(&VAR_4->volumes, VAR_5, VAR_3);
 VAR_5->wqueue = FUNC_4(sizeof(struct bio_queue_head), VAR_1 | VAR_2);
 FUNC_3(VAR_5->wqueue);
 return (0);
}
