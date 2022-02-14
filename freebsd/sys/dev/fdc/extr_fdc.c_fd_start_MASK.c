
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fdc_data {int dummy; } ;
struct fd_data {int sectorsize; TYPE_3__* ft; struct fdc_data* fdc; } ;
struct bio {scalar_t__ bio_cmd; int bio_pblkno; int bio_offset; int bio_length; int bio_resid; struct fd_data* bio_driver1; TYPE_2__* bio_to; } ;
struct TYPE_6__ {int heads; int sectrac; } ;
struct TYPE_5__ {TYPE_1__* geom; } ;
struct TYPE_4__ {struct fd_data* softc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fd_data*,struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*,char*,int ) ;
 int FUNC_2 (struct bio*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_5)
{
  struct fdc_data * VAR_6;
  struct fd_data * VAR_7;

 VAR_7 = VAR_5->bio_to->geom->softc;
 VAR_6 = VAR_7->fdc;
 VAR_5->bio_driver1 = VAR_7;
 if (VAR_5->bio_cmd == VAR_0) {
  if (FUNC_1(VAR_5, "GEOM::fwsectors", VAR_7->ft->sectrac))
   return;
  if (FUNC_1(VAR_5, "GEOM::fwheads", VAR_7->ft->heads))
   return;
  FUNC_2(VAR_5, VAR_3);
  return;
 }
 if (!(VAR_5->bio_cmd == VAR_1 || VAR_5->bio_cmd == VAR_2)) {
  FUNC_2(VAR_5, VAR_4);
  return;
 }
 VAR_5->bio_pblkno = VAR_5->bio_offset / VAR_7->sectorsize;
 VAR_5->bio_resid = VAR_5->bio_length;
 FUNC_0(VAR_7, VAR_5);
 return;
}
