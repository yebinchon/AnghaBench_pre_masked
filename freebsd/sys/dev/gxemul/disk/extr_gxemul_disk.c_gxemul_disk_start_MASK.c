
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct gxemul_disk_softc {int sc_dev; } ;
struct bio {int bio_length; int bio_offset; int bio_resid; int bio_cmd; int bio_completed; int * bio_data; TYPE_2__* bio_to; } ;
typedef int off_t ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct gxemul_disk_softc* softc; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int) ;
 int VAR_3 ;
 int FUNC_2 (unsigned int,int *,int) ;
 int FUNC_3 (unsigned int,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_4)
{
 struct gxemul_disk_softc *VAR_5;
 unsigned VAR_6;
 off_t VAR_7;
 uint8_t *VAR_8;
 int VAR_9;

 VAR_5 = VAR_4->bio_to->geom->softc;
 VAR_6 = FUNC_0(VAR_5->sc_dev);

 if ((VAR_4->bio_length % VAR_2) != 0) {
  FUNC_1(VAR_4, VAR_0);
  return;
 }

 VAR_8 = VAR_4->bio_data;
 VAR_7 = VAR_4->bio_offset;
 VAR_4->bio_resid = VAR_4->bio_length;
 while (VAR_4->bio_resid != 0) {
  switch (VAR_4->bio_cmd) {
  case 129:
   FUNC_4(&VAR_3);
   VAR_9 = FUNC_2(VAR_6, VAR_8, VAR_7);
   FUNC_5(&VAR_3);
   break;
  case 128:
   FUNC_4(&VAR_3);
   VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_7);
   FUNC_5(&VAR_3);
   break;
  default:
   FUNC_1(VAR_4, VAR_1);
   return;
  }
  if (VAR_9 != 0) {
   FUNC_1(VAR_4, VAR_9);
   return;
  }

  VAR_8 += VAR_2;
  VAR_7 += VAR_2;
  VAR_4->bio_completed += VAR_2;
  VAR_4->bio_resid -= VAR_2;
 }

 FUNC_1(VAR_4, 0);
}
