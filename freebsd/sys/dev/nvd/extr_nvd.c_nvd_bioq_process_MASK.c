
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvd_disk {scalar_t__ cur_depth; int bioqlock; int bioq; } ;
struct bio {int bio_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nvd_disk*,struct bio*) ;
 int FUNC_5 (scalar_t__*,int ,char*,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2, int VAR_3)
{
 struct nvd_disk *VAR_4 = VAR_2;
 struct bio *VAR_5;

 for (;;) {
  FUNC_2(&VAR_4->bioqlock);
  VAR_5 = FUNC_1(&VAR_4->bioq);
  FUNC_3(&VAR_4->bioqlock);
  if (VAR_5 == ((void*)0))
   break;

  if (FUNC_0(VAR_5->bio_flags & VAR_0)) {




   while (VAR_4->cur_depth > 0)
    FUNC_5(&VAR_4->cur_depth, 0, "nvdorb", 1);
  } else {




   while (VAR_4->cur_depth >= VAR_1)
    FUNC_5(&VAR_4->cur_depth, 0, "nvdora", 1);
  }

  FUNC_4(VAR_4, VAR_5);
 }
}
