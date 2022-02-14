
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int dummy; } ;
struct bio {int bio_error; int bio_flags; int bio_bcount; int bio_resid; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtblk_softc*) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void
FUNC_2(struct vtblk_softc *VAR_1, struct bio *VAR_2, int VAR_3)
{


 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1);

 if (VAR_3) {
  VAR_2->bio_resid = VAR_2->bio_bcount;
  VAR_2->bio_error = VAR_3;
  VAR_2->bio_flags |= VAR_0;
 }

 FUNC_1(VAR_2);
}
