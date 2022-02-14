
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_mirror_softc {int dummy; } ;
struct g_mirror_disk {struct g_consumer* d_consumer; } ;
struct g_consumer {int acr; int acw; int ace; int index; TYPE_1__* provider; } ;
struct bio {scalar_t__ bio_error; TYPE_1__* bio_to; int bio_done; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,struct bio*,char*) ;
 int FUNC_1 (int,char*) ;
 struct bio* FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,scalar_t__) ;
 int FUNC_4 (struct bio*,struct g_consumer*) ;
 int VAR_2 ;
 struct g_mirror_disk* FUNC_5 (struct g_mirror_softc*) ;

__attribute__((used)) static void
FUNC_6(struct g_mirror_softc *VAR_3, struct bio *VAR_4)
{
 struct g_mirror_disk *VAR_5;
 struct g_consumer *VAR_6;
 struct bio *VAR_7;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 == ((void*)0)) {
  if (VAR_4->bio_error == 0)
   VAR_4->bio_error = VAR_1;
  FUNC_3(VAR_4, VAR_4->bio_error);
  return;
 }
 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7 == ((void*)0)) {
  if (VAR_4->bio_error == 0)
   VAR_4->bio_error = VAR_0;
  FUNC_3(VAR_4, VAR_4->bio_error);
  return;
 }



 VAR_6 = VAR_5->d_consumer;
 VAR_7->bio_done = VAR_2;
 VAR_7->bio_to = VAR_6->provider;
 FUNC_0(3, VAR_7, "Sending request.");
 FUNC_1(VAR_6->acr >= 1 && VAR_6->acw >= 1 && VAR_6->ace >= 1,
     ("Consumer %s not opened (r%dw%de%d).", VAR_6->provider->name, VAR_6->acr,
     VAR_6->acw, VAR_6->ace));
 VAR_6->index++;
 FUNC_4(VAR_7, VAR_6);
}
