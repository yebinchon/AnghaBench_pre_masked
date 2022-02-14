
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct fdc_readid {int cyl; int head; } ;
struct fd_formb {int cyl; int head; } ;
struct fd_data {int sectorsize; TYPE_1__* ft; } ;
struct bio {int bio_pblkno; int bio_length; int bio_offset; int bio_flags; int bio_error; struct fd_data* bio_driver1; void* bio_data; scalar_t__ bio_cmd; } ;
struct TYPE_2__ {int heads; int sectrac; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fd_data*,struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;
 int VAR_8 ;
 struct bio* FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct bio*,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct fd_data *VAR_9, u_int VAR_10, void *VAR_11)
{
 struct bio *VAR_12;
 struct fd_formb *VAR_13;
 struct fdc_readid *VAR_14;
 int VAR_15;

 VAR_12 = FUNC_2(sizeof(struct bio), VAR_4, VAR_5 | VAR_6);






 VAR_12->bio_cmd = VAR_10;
 if (VAR_10 == VAR_1) {
  VAR_13 = (struct fd_formb *)VAR_11;
  VAR_12->bio_pblkno =
      (VAR_13->cyl * VAR_9->ft->heads + VAR_13->head) *
      VAR_9->ft->sectrac;
  VAR_12->bio_length = sizeof *VAR_13;
 } else if (VAR_10 == VAR_3) {
  VAR_14 = (struct fdc_readid *)VAR_11;
  VAR_12->bio_pblkno =
      (VAR_14->cyl * VAR_9->ft->heads + VAR_14->head) *
      VAR_9->ft->sectrac;
  VAR_12->bio_length = sizeof(struct fdc_readid);
 } else if (VAR_10 == VAR_2) {

 } else
  FUNC_3("wrong cmd in fdmisccmd()");
 VAR_12->bio_offset = VAR_12->bio_pblkno * VAR_9->sectorsize;
 VAR_12->bio_data = VAR_11;
 VAR_12->bio_driver1 = VAR_9;
 VAR_12->bio_flags = 0;

 FUNC_0(VAR_9, VAR_12);

 do {
  FUNC_4(VAR_12, VAR_7, "fdwait", VAR_8);
 } while (!(VAR_12->bio_flags & VAR_0));
 VAR_15 = VAR_12->bio_error;

 FUNC_1(VAR_12, VAR_4);
 return (VAR_15);
}
