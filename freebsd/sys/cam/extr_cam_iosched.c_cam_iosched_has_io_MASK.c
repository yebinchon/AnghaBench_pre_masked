
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; int max; int queued; } ;
struct cam_iosched_softc {int bio_queue; TYPE_1__ write_stats; TYPE_1__ read_stats; int write_queue; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct bio*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int,...) ;

__attribute__((used)) static inline bool
FUNC_3(struct cam_iosched_softc *VAR_2)
{
 return FUNC_0(&VAR_2->bio_queue) != ((void*)0);
}
