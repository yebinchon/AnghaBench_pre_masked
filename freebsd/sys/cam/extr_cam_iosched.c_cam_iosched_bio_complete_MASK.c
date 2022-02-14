
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int periph_data; } ;
struct TYPE_7__ {TYPE_2__ qos; } ;
union ccb {TYPE_3__ ccb_h; } ;
struct TYPE_5__ {int pending; int out; int errs; } ;
struct TYPE_8__ {int pending; int out; int errs; } ;
struct cam_iosched_softc {scalar_t__ max_lat; int latarg; int (* latfcn ) (int ,scalar_t__,struct bio*) ;TYPE_1__ trim_stats; TYPE_4__ read_stats; TYPE_4__ write_stats; } ;
struct bio {int bio_cmd; int bio_flags; int bio_bcount; } ;
typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cam_iosched_softc*,scalar_t__,int,int ) ;
 int FUNC_1 (TYPE_4__*,struct bio*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,scalar_t__,struct bio*) ;

int
FUNC_5(struct cam_iosched_softc *VAR_7, struct bio *VAR_8,
    union ccb *VAR_9)
{
 int VAR_10 = 0;
 return VAR_10;
}
