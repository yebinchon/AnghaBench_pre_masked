
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct g_consumer {int provider; } ;
struct g_concat_softc {size_t sc_ndisks; TYPE_1__* sc_disks; } ;
struct bio_queue_head {int dummy; } ;
struct bio {scalar_t__ bio_error; struct g_consumer* bio_caller1; int bio_to; int bio_done; } ;
struct TYPE_2__ {struct g_consumer* d_consumer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*,char*) ;
 int FUNC_1 (struct bio_queue_head*) ;
 int FUNC_2 (struct bio_queue_head*,struct bio*) ;
 struct bio* FUNC_3 (struct bio_queue_head*) ;
 struct bio* FUNC_4 (struct bio*) ;
 int VAR_1 ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,scalar_t__) ;
 int FUNC_7 (struct bio*,struct g_consumer*) ;

__attribute__((used)) static void
FUNC_8(struct g_concat_softc *VAR_2, struct bio *VAR_3)
{
 struct bio_queue_head VAR_4;
 struct g_consumer *VAR_5;
 struct bio *VAR_6;
 u_int VAR_7;

 FUNC_1(&VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_2->sc_ndisks; VAR_7++) {
  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 == ((void*)0)) {
   while ((VAR_6 = FUNC_3(&VAR_4)) != ((void*)0))
    FUNC_5(VAR_6);
   if (VAR_3->bio_error == 0)
    VAR_3->bio_error = VAR_0;
   FUNC_6(VAR_3, VAR_3->bio_error);
   return;
  }
  FUNC_2(&VAR_4, VAR_6);
  VAR_6->bio_done = VAR_1;
  VAR_6->bio_caller1 = VAR_2->sc_disks[VAR_7].d_consumer;
  VAR_6->bio_to = VAR_2->sc_disks[VAR_7].d_consumer->provider;
 }
 while ((VAR_6 = FUNC_3(&VAR_4)) != ((void*)0)) {
  FUNC_0(VAR_6, "Sending request.");
  VAR_5 = VAR_6->bio_caller1;
  VAR_6->bio_caller1 = ((void*)0);
  FUNC_7(VAR_6, VAR_5);
 }
}
