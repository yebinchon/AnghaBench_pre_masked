
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_disk_softc {int done_mtx; TYPE_2__* dp; } ;
struct bio {scalar_t__ bio_error; int bio_cmd; scalar_t__ bio_inbed; scalar_t__ bio_children; scalar_t__ bio_completed; scalar_t__ bio_bcount; scalar_t__ bio_resid; int bio_zone; scalar_t__ bio_length; TYPE_1__* bio_to; struct bio* bio_parent; } ;
struct bintime {int dummy; } ;
struct TYPE_4__ {int d_devstat; } ;
struct TYPE_3__ {struct g_disk_softc* private; } ;







 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct bintime*) ;
 int FUNC_2 (int ,struct bio*,struct bintime*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct bio *VAR_0)
{
 struct bintime VAR_1;
 struct bio *VAR_2;
 struct g_disk_softc *VAR_3;



 VAR_2 = VAR_0->bio_parent;
 VAR_3 = VAR_2->bio_to->private;
 VAR_0->bio_completed = VAR_0->bio_length - VAR_0->bio_resid;
 FUNC_1(&VAR_1);
 FUNC_5(&VAR_3->done_mtx);
 if (VAR_2->bio_error == 0)
  VAR_2->bio_error = VAR_0->bio_error;
 VAR_2->bio_completed += VAR_0->bio_completed;

 switch (VAR_0->bio_cmd) {
 case 128:
  FUNC_0(&VAR_0->bio_zone, &VAR_2->bio_zone, sizeof(VAR_0->bio_zone));

 case 130:
 case 129:
 case 132:
 case 131:
  FUNC_2(VAR_3->dp->d_devstat, VAR_0, &VAR_1);
  break;
 default:
  break;
 }
 VAR_2->bio_inbed++;
 if (VAR_2->bio_children == VAR_2->bio_inbed) {
  FUNC_6(&VAR_3->done_mtx);
  VAR_2->bio_resid = VAR_2->bio_bcount - VAR_2->bio_completed;
  FUNC_4(VAR_2, VAR_2->bio_error);
 } else
  FUNC_6(&VAR_3->done_mtx);
 FUNC_3(VAR_0);
}
