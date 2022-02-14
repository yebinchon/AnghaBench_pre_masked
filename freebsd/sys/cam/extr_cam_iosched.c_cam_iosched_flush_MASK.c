
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devstat {int dummy; } ;
struct cam_iosched_softc {int write_queue; int trim_queue; int bio_queue; } ;


 int FUNC_0 (int *,struct devstat*,int) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(struct cam_iosched_softc *VAR_1, struct devstat *VAR_2, int VAR_3)
{
 FUNC_0(&VAR_1->bio_queue, VAR_2, VAR_3);
 FUNC_0(&VAR_1->trim_queue, VAR_2, VAR_3);




}
