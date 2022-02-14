
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_eli_softc {int sc_queue; int sc_queue_mtx; } ;
struct bio {scalar_t__ bio_pflags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct g_eli_softc *VAR_3)
{
 struct bio *VAR_4;

 FUNC_3(&VAR_3->sc_queue_mtx, VAR_2);

 while ((VAR_4 = FUNC_1(&VAR_3->sc_queue)) != ((void*)0)) {
  FUNC_0(VAR_4->bio_pflags == VAR_1,
      ("Not new bio when canceling (bp=%p).", VAR_4));
  FUNC_2(VAR_4, VAR_0);
 }
}
