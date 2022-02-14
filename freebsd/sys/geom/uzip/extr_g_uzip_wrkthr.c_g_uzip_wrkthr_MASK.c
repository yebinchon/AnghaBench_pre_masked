
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_uzip_softc {int wrkthr_flags; int (* uzip_do ) (struct g_uzip_softc*,struct bio*) ;int queue_mtx; int bio_queue; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bio* FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct g_uzip_softc*,int *,int,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct g_uzip_softc*,struct bio*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9(void *VAR_5)
{
 struct g_uzip_softc *VAR_6;
 struct bio *VAR_7;

 VAR_6 = (struct g_uzip_softc *)VAR_5;
 FUNC_7(VAR_4);
 FUNC_5(VAR_4, VAR_3);
 FUNC_8(VAR_4);

 for (;;) {
  FUNC_3(&VAR_6->queue_mtx);
  if (VAR_6->wrkthr_flags & VAR_1) {
   VAR_6->wrkthr_flags |= VAR_0;
   FUNC_4(&VAR_6->queue_mtx);
   FUNC_1(0);
  }
  VAR_7 = FUNC_0(&VAR_6->bio_queue);
  if (!VAR_7) {
   FUNC_2(VAR_6, &VAR_6->queue_mtx, VAR_3 | VAR_2,
       "wrkwait", 0);
   continue;
  }
  FUNC_4(&VAR_6->queue_mtx);
  VAR_6->uzip_do(VAR_6, VAR_7);
 }
}
