
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvd_disk {int bioqlock; int tq; TYPE_1__* ctrlr; int disk; } ;
struct disk {scalar_t__ d_drv1; } ;
struct TYPE_2__ {int disk_head; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct nvd_disk*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct nvd_disk*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct disk *VAR_5)
{
 struct nvd_disk *VAR_6 = (struct nvd_disk *)VAR_5->d_drv1;

 FUNC_2(VAR_6->disk);
 FUNC_5(&VAR_4);
 FUNC_1(&VAR_2, VAR_6, VAR_3);
 FUNC_1(&VAR_6->ctrlr->disk_head, VAR_6, VAR_1);
 if (FUNC_0(&VAR_6->ctrlr->disk_head))
  FUNC_8(&VAR_6->ctrlr->disk_head);
 FUNC_6(&VAR_4);
 FUNC_7(VAR_6->tq);
 FUNC_4(&VAR_6->bioqlock);
 FUNC_3(VAR_6, VAR_0);
}
