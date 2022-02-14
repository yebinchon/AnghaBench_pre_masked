
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int flags; int plexes; int plexcount; } ;
struct gv_softc {int plexes; } ;
struct gv_plex {void* rqueue; void* wqueue; void* bqueue; int packets; int subdisks; int flags; scalar_t__ synced; struct gv_softc* vinumconf; struct gv_volume* vol_sc; int volume; int name; } ;
struct bio_queue_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct gv_plex*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct gv_plex*) ;
 void* FUNC_7 (int,int) ;
 struct gv_volume* FUNC_8 (struct gv_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_9(struct gv_softc *VAR_8, struct gv_plex *VAR_9)
{
 struct gv_volume *VAR_10;

 FUNC_1(VAR_9 != ((void*)0), ("gv_create_plex: NULL p"));


 VAR_10 = FUNC_8(VAR_8, VAR_9->volume);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(0, "create plex '%s': volume '%s' not found",
      VAR_9->name, VAR_9->volume);
  FUNC_6(VAR_9);
  return (VAR_0);
 }
 if (!(VAR_10->flags & VAR_3))
  VAR_9->flags |= VAR_1;
 VAR_9->vol_sc = VAR_10;
 VAR_10->plexcount++;
 VAR_9->vinumconf = VAR_8;
 VAR_9->synced = 0;
 VAR_9->flags |= VAR_2;
 FUNC_3(&VAR_10->plexes, VAR_9, VAR_6);
 FUNC_2(&VAR_9->subdisks);
 FUNC_4(&VAR_9->packets);
 FUNC_3(&VAR_8->plexes, VAR_9, VAR_7);
 VAR_9->bqueue = FUNC_7(sizeof(struct bio_queue_head), VAR_4 | VAR_5);
 FUNC_5(VAR_9->bqueue);
 VAR_9->wqueue = FUNC_7(sizeof(struct bio_queue_head), VAR_4 | VAR_5);
 FUNC_5(VAR_9->wqueue);
 VAR_9->rqueue = FUNC_7(sizeof(struct bio_queue_head), VAR_4 | VAR_5);
 FUNC_5(VAR_9->rqueue);
 return (0);
}
