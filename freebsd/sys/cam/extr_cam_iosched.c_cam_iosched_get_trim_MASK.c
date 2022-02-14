
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int queued; } ;
struct TYPE_3__ {int queued; } ;
struct cam_iosched_softc {int current_read_bias; int read_bias; TYPE_2__ read_stats; TYPE_1__ trim_stats; int bio_queue; } ;
struct bio {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct cam_iosched_softc*) ;
 struct bio* FUNC_2 (struct cam_iosched_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int,int,int) ;

struct bio *
FUNC_4(struct cam_iosched_softc *VAR_2)
{

 if (!FUNC_1(VAR_2))
  return ((void*)0);
 return FUNC_2(VAR_2);
}
