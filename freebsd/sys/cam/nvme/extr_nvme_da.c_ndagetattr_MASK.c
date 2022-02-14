
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_periph {int path; } ;
struct bio {int bio_length; int bio_completed; int bio_attribute; int bio_data; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {scalar_t__ d_drv1; } ;


 int FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct bio *VAR_0)
{
 int VAR_1;
 struct cam_periph *VAR_2;

 VAR_2 = (struct cam_periph *)VAR_0->bio_disk->d_drv1;
 FUNC_0(VAR_2);
 VAR_1 = FUNC_2(VAR_0->bio_data, VAR_0->bio_length, VAR_0->bio_attribute,
     VAR_2->path);
 FUNC_1(VAR_2);
 if (VAR_1 == 0)
  VAR_0->bio_completed = VAR_0->bio_length;
 return VAR_1;
}
