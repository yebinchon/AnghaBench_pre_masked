
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devstat {int dummy; } ;
struct TYPE_2__ {scalar_t__ zone_cmd; } ;
struct bio {scalar_t__ bio_cmd; int bio_t0; scalar_t__ bio_resid; scalar_t__ bio_bcount; TYPE_1__ bio_zone; } ;
struct bintime {int dummy; } ;
typedef int devstat_trans_flags ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (struct devstat*,scalar_t__,int ,int ,struct bintime const*,int *) ;

void
FUNC_2(struct devstat *VAR_10, const struct bio *VAR_11,
    const struct bintime *VAR_12)
{
 devstat_trans_flags VAR_13;


 if (VAR_10 == ((void*)0))
  return;

 if (VAR_11->bio_cmd == VAR_0)
  VAR_13 = VAR_4;
 else if ((VAR_11->bio_cmd == VAR_1)
       || ((VAR_11->bio_cmd == VAR_3)
        && (VAR_11->bio_zone.zone_cmd == VAR_9)))
  VAR_13 = VAR_6;
 else if (VAR_11->bio_cmd == VAR_2)
  VAR_13 = VAR_8;
 else
  VAR_13 = VAR_5;

 FUNC_1(VAR_10, VAR_11->bio_bcount - VAR_11->bio_resid,
    VAR_7, VAR_13, VAR_12, &VAR_11->bio_t0);
 FUNC_0();
}
