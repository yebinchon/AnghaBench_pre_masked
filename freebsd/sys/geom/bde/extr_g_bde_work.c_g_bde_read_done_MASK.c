
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_softc {int worklist_mutex; } ;
struct g_bde_sector {scalar_t__ size; scalar_t__ error; int state; } ;
struct bio {scalar_t__ bio_error; scalar_t__ bio_completed; struct g_bde_softc* bio_caller2; struct g_bde_sector* bio_caller1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,char*,struct g_bde_sector*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct g_bde_softc*) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_4)
{
 struct g_bde_sector *VAR_5;
 struct g_bde_softc *VAR_6;

 VAR_5 = VAR_4->bio_caller1;
 FUNC_1(VAR_1, "g_bde_read_done(%p)", VAR_5);
 VAR_6 = VAR_4->bio_caller2;
 FUNC_2(&VAR_6->worklist_mutex);
 if (VAR_4->bio_error == 0 && VAR_4->bio_completed != VAR_5->size)
  VAR_4->bio_error = VAR_0;
 VAR_5->error = VAR_4->bio_error;
 if (VAR_5->error == 0)
  VAR_5->state = VAR_3;
 else
  VAR_5->state = VAR_2;
 FUNC_4(VAR_6);
 FUNC_0(VAR_4);
 FUNC_3(&VAR_6->worklist_mutex);
}
