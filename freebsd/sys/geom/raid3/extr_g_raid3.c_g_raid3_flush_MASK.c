
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct g_raid3_softc {size_t sc_ndisks; struct g_raid3_disk* sc_disks; } ;
struct g_raid3_disk {scalar_t__ d_state; struct g_consumer* d_consumer; } ;
struct g_consumer {int acr; int acw; int ace; TYPE_1__* provider; } ;
struct bio_queue_head {int dummy; } ;
struct bio {scalar_t__ bio_error; struct g_raid3_disk* bio_caller1; TYPE_1__* bio_to; int bio_done; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,struct bio*,char*) ;
 int FUNC_1 (int,char*) ;
 struct bio* FUNC_2 (struct bio_queue_head*) ;
 int FUNC_3 (struct bio_queue_head*) ;
 int FUNC_4 (struct bio_queue_head*,struct bio*) ;
 int FUNC_5 (struct bio_queue_head*,struct bio*) ;
 struct bio* FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct bio*,scalar_t__) ;
 int FUNC_9 (struct bio*,struct g_consumer*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(struct g_raid3_softc *VAR_3, struct bio *VAR_4)
{
 struct bio_queue_head VAR_5;
 struct g_raid3_disk *VAR_6;
 struct g_consumer *VAR_7;
 struct bio *VAR_8;
 u_int VAR_9;

 FUNC_3(&VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_3->sc_ndisks; VAR_9++) {
  VAR_6 = &VAR_3->sc_disks[VAR_9];
  if (VAR_6->d_state != VAR_1)
   continue;
  VAR_8 = FUNC_6(VAR_4);
  if (VAR_8 == ((void*)0)) {
   for (VAR_8 = FUNC_2(&VAR_5); VAR_8 != ((void*)0);
       VAR_8 = FUNC_2(&VAR_5)) {
    FUNC_5(&VAR_5, VAR_8);
    FUNC_7(VAR_8);
   }
   if (VAR_4->bio_error == 0)
    VAR_4->bio_error = VAR_0;
   FUNC_8(VAR_4, VAR_4->bio_error);
   return;
  }
  FUNC_4(&VAR_5, VAR_8);
  VAR_8->bio_done = VAR_2;
  VAR_8->bio_caller1 = VAR_6;
  VAR_8->bio_to = VAR_6->d_consumer->provider;
 }
 for (VAR_8 = FUNC_2(&VAR_5); VAR_8 != ((void*)0); VAR_8 = FUNC_2(&VAR_5)) {
  FUNC_5(&VAR_5, VAR_8);
  FUNC_0(3, VAR_8, "Sending request.");
  VAR_6 = VAR_8->bio_caller1;
  VAR_8->bio_caller1 = ((void*)0);
  VAR_7 = VAR_6->d_consumer;
  FUNC_1(VAR_7->acr >= 1 && VAR_7->acw >= 1 && VAR_7->ace >= 1,
      ("Consumer %s not opened (r%dw%de%d).", VAR_7->provider->name,
      VAR_7->acr, VAR_7->acw, VAR_7->ace));
  FUNC_9(VAR_8, VAR_6->d_consumer);
 }
}
