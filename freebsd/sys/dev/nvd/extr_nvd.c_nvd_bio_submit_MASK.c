
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvd_disk {scalar_t__ cur_depth; scalar_t__ ordered_in_flight; int ns; } ;
struct bio {int bio_flags; int bio_error; int bio_bcount; int bio_resid; int * bio_driver1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (struct bio*) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct bio*,int ) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_6(struct nvd_disk *VAR_4, struct bio *VAR_5)
{
 int VAR_6;

 VAR_5->bio_driver1 = ((void*)0);
 if (FUNC_0(VAR_5->bio_flags & VAR_1))
  FUNC_1(&VAR_4->cur_depth, VAR_2);
 else
  FUNC_1(&VAR_4->cur_depth, 1);
 VAR_6 = FUNC_4(VAR_4->ns, VAR_5, VAR_3);
 if (VAR_6) {
  if (FUNC_0(VAR_5->bio_flags & VAR_1)) {
   FUNC_1(&VAR_4->cur_depth, -VAR_2);
   FUNC_1(&VAR_4->ordered_in_flight, -1);
   FUNC_5(&VAR_4->cur_depth);
  } else {
   if (FUNC_2(&VAR_4->cur_depth, -1) == 1 &&
       FUNC_0(VAR_4->ordered_in_flight != 0))
    FUNC_5(&VAR_4->cur_depth);
  }
  VAR_5->bio_error = VAR_6;
  VAR_5->bio_flags |= VAR_0;
  VAR_5->bio_resid = VAR_5->bio_bcount;
  FUNC_3(VAR_5);
 }
}
