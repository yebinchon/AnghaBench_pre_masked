
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ofwd_softc {int ofwd_queue_mtx; int ofwd_bio_queue; } ;
struct bio {scalar_t__ bio_cmd; int bio_length; int bio_completed; } ;
struct TYPE_2__ {int td_base_pri; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bio* FUNC_0 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct bio*,int) ;
 int FUNC_2 (struct ofwd_softc*,int *,int,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ofwd_softc*,struct bio*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
 struct ofwd_softc *VAR_6;
 struct bio *VAR_7;
 int VAR_8;

 VAR_6 = VAR_5;
 VAR_4->td_base_pri = VAR_3;

 for (;;) {
  FUNC_3(&VAR_6->ofwd_queue_mtx);
  VAR_7 = FUNC_0(&VAR_6->ofwd_bio_queue);
  if (!VAR_7) {
   FUNC_2(VAR_6, &VAR_6->ofwd_queue_mtx, VAR_3 | VAR_2,
       "ofwdwait", 0);
   continue;
  }
  FUNC_4(&VAR_6->ofwd_queue_mtx);
  if (VAR_7->bio_cmd == VAR_0) {
   VAR_8 = VAR_1;
  } else
   VAR_8 = FUNC_5(VAR_6, VAR_7);

  if (VAR_8 != -1) {
   VAR_7->bio_completed = VAR_7->bio_length;
   FUNC_1(VAR_7, VAR_8);
  }
 }
}
