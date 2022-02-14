
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; int total; int queued; int state_flags; } ;
struct cam_iosched_softc {TYPE_1__ read_stats; int bio_queue; } ;
struct bio {scalar_t__ bio_cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bio*) ;
 struct bio* FUNC_2 (struct cam_iosched_softc*) ;
 struct bio* FUNC_3 (struct cam_iosched_softc*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct bio*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,struct bio*,...) ;

struct bio *
FUNC_6(struct cam_iosched_softc *VAR_4)
{
 struct bio *VAR_5;
 if ((VAR_5 = FUNC_2(VAR_4)) != ((void*)0))
  return VAR_5;
 if ((VAR_5 = FUNC_0(&VAR_4->bio_queue)) == ((void*)0))
  return ((void*)0);
 FUNC_1(&VAR_4->bio_queue, VAR_5);
 return VAR_5;
}
