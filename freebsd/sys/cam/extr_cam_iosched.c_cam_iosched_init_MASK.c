
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_periph {int dummy; } ;
struct TYPE_2__ {int max; } ;
struct cam_iosched_softc {int sort_io_queue; int read_bias; int current_read_bias; int quanta; int flags; int ticker; int cl; struct cam_periph* periph; int last_time; TYPE_1__ trim_stats; TYPE_1__ write_stats; TYPE_1__ read_stats; int write_queue; int trim_queue; int bio_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int,int ,struct cam_iosched_softc*) ;
 int FUNC_3 (int *,struct cam_iosched_softc*) ;
 int FUNC_4 (struct cam_iosched_softc*,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_5 (struct cam_periph*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct cam_iosched_softc* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*,struct cam_iosched_softc*) ;
 int FUNC_9 () ;

int
FUNC_10(struct cam_iosched_softc **VAR_9, struct cam_periph *VAR_10)
{

 *VAR_9 = FUNC_6(sizeof(**VAR_9), VAR_2, VAR_3 | VAR_4);
 if (*VAR_9 == ((void*)0))
  return VAR_1;




 (*VAR_9)->sort_io_queue = -1;
 FUNC_0(&(*VAR_9)->bio_queue);
 FUNC_0(&(*VAR_9)->trim_queue);
 return 0;
}
