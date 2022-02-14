
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int io_type; struct bio* io_bio; int io_size; int io_offset; int io_abd; int io_target_timestamp; void* io_error; int io_cmd; TYPE_3__* io_vd; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_11__ {struct g_consumer* vdev_tsd; int vdev_notrim; int vdev_nowritecache; } ;
typedef TYPE_3__ vdev_t ;
struct g_consumer {TYPE_1__* provider; } ;
struct bio {int bio_done; int bio_length; int bio_offset; int * bio_data; int bio_cmd; TYPE_2__* bio_caller1; } ;
struct TYPE_9__ {int mediasize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ) ;




 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ) ;
 struct bio* FUNC_4 () ;
 int FUNC_5 (struct bio*,struct g_consumer*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10(zio_t *VAR_10)
{
 vdev_t *VAR_11;
 struct g_consumer *VAR_12;
 struct bio *VAR_13;
 int VAR_14;

 VAR_11 = VAR_10->io_vd;

 switch (VAR_10->io_type) {
 case 130:

  if (!FUNC_6(VAR_11)) {
   VAR_10->io_error = FUNC_1(VAR_5);
   FUNC_9(VAR_10);
   return;
  } else {
   switch (VAR_10->io_cmd) {
   case 132:
    if (VAR_9 || VAR_7)
     break;
    if (VAR_11->vdev_nowritecache) {
     VAR_10->io_error = FUNC_1(VAR_4);
     break;
    }
    goto sendreq;
   default:
    VAR_10->io_error = FUNC_1(VAR_4);
   }
  }

  FUNC_7(VAR_10);
  return;
 case 131:
  if (VAR_11->vdev_notrim) {
   VAR_10->io_error = FUNC_1(VAR_4);
  } else if (!VAR_6) {
   goto sendreq;
  }
  FUNC_7(VAR_10);
  return;
 }
sendreq:
 FUNC_0(VAR_10->io_type == 129 ||
     VAR_10->io_type == 128 ||
     VAR_10->io_type == 131 ||
     VAR_10->io_type == 130);

 VAR_12 = VAR_11->vdev_tsd;
 if (VAR_12 == ((void*)0)) {
  VAR_10->io_error = FUNC_1(VAR_5);
  FUNC_9(VAR_10);
  return;
 }
 VAR_13 = FUNC_4();
 VAR_13->bio_caller1 = VAR_10;
 switch (VAR_10->io_type) {
 case 129:
 case 128:
  VAR_10->io_target_timestamp = FUNC_8(VAR_10);
  VAR_13->bio_offset = VAR_10->io_offset;
  VAR_13->bio_length = VAR_10->io_size;
  if (VAR_10->io_type == 129) {
   VAR_13->bio_cmd = VAR_2;
   VAR_13->bio_data =
       FUNC_2(VAR_10->io_abd, VAR_10->io_size);
  } else {
   VAR_13->bio_cmd = VAR_3;
   VAR_13->bio_data =
       FUNC_3(VAR_10->io_abd, VAR_10->io_size);
  }
  break;
 case 131:
  VAR_13->bio_cmd = VAR_0;
  VAR_13->bio_data = ((void*)0);
  VAR_13->bio_offset = VAR_10->io_offset;
  VAR_13->bio_length = VAR_10->io_size;
  break;
 case 130:
  VAR_13->bio_cmd = VAR_1;
  VAR_13->bio_data = ((void*)0);
  VAR_13->bio_offset = VAR_12->provider->mediasize;
  VAR_13->bio_length = 0;
  break;
 }
 VAR_13->bio_done = VAR_8;
 VAR_10->io_bio = VAR_13;

 FUNC_5(VAR_13, VAR_12);
}
