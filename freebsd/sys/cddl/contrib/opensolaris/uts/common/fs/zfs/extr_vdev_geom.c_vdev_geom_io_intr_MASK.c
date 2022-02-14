
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int io_error; scalar_t__ io_type; int * io_bio; int io_spa; TYPE_3__* io_vd; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_7__ {void* vdev_delayed_close; void* vdev_remove_wanted; void* vdev_notrim; void* vdev_nowritecache; } ;
typedef TYPE_3__ vdev_t ;
struct bio {int bio_error; scalar_t__ bio_resid; TYPE_1__* bio_to; int bio_cmd; TYPE_2__* bio_caller1; } ;
struct TYPE_5__ {int error; } ;




 void* VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_5)
{
 vdev_t *VAR_6;
 zio_t *VAR_7;

 VAR_7 = VAR_5->bio_caller1;
 VAR_6 = VAR_7->io_vd;
 VAR_7->io_error = VAR_5->bio_error;
 if (VAR_7->io_error == 0 && VAR_5->bio_resid != 0)
  VAR_7->io_error = FUNC_0(VAR_1);

 switch(VAR_7->io_error) {
 case 129:






  switch(VAR_5->bio_cmd) {
  case 130:
   VAR_6->vdev_nowritecache = VAR_0;
   break;
  case 131:
   VAR_6->vdev_notrim = VAR_0;
   break;
  }
  break;
 case 128:
  if (!VAR_6->vdev_remove_wanted) {




   if (VAR_5->bio_to->error != 0) {
    VAR_6->vdev_remove_wanted = VAR_0;
    FUNC_2(VAR_7->io_spa,
        VAR_2);
   } else if (!VAR_6->vdev_delayed_close) {
    VAR_6->vdev_delayed_close = VAR_0;
   }
  }
  break;
 }






 if (VAR_7->io_type != VAR_3 && VAR_7->io_type != VAR_4) {
  FUNC_1(VAR_5);
  VAR_7->io_bio = ((void*)0);
 }
 FUNC_3(VAR_7);
}
