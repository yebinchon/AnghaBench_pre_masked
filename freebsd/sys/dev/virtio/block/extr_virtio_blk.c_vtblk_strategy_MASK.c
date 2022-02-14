
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtblk_softc {int vtblk_flags; int vtblk_bioq; } ;
struct bio {scalar_t__ bio_cmd; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct vtblk_softc* d_drv1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vtblk_softc*) ;
 int FUNC_1 (struct vtblk_softc*) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (struct vtblk_softc*,struct bio*,int ) ;
 int FUNC_4 (struct vtblk_softc*) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_7)
{
 struct vtblk_softc *VAR_8;

 if ((VAR_8 = VAR_7->bio_disk->d_drv1) == ((void*)0)) {
  FUNC_3(((void*)0), VAR_7, VAR_2);
  return;
 }





 if (VAR_8->vtblk_flags & VAR_6 &&
     (VAR_7->bio_cmd == VAR_1 || VAR_7->bio_cmd == VAR_0)) {
  FUNC_3(VAR_8, VAR_7, VAR_4);
  return;
 }

 FUNC_0(VAR_8);

 if (VAR_8->vtblk_flags & VAR_5) {
  FUNC_1(VAR_8);
  FUNC_3(VAR_8, VAR_7, VAR_3);
  return;
 }

 FUNC_2(&VAR_8->vtblk_bioq, VAR_7);
 FUNC_4(VAR_8);

 FUNC_1(VAR_8);
}
