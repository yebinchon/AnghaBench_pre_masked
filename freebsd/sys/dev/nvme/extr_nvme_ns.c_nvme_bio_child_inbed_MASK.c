
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_completion {int status; } ;
struct bio {int bio_flags; int bio_error; int bio_inbed; int bio_children; } ;
typedef int parent_cpl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_completion*,int) ;
 int FUNC_3 (struct bio*,struct nvme_completion*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_4, int VAR_5)
{
 struct nvme_completion VAR_6;
 int VAR_7, VAR_8;

 if (VAR_5 != 0) {
  VAR_4->bio_flags |= VAR_0;
  VAR_4->bio_error = VAR_5;
 }







 VAR_7 = FUNC_1(&VAR_4->bio_children);
 VAR_8 = FUNC_0(&VAR_4->bio_inbed, 1) + 1;
 if (VAR_8 == VAR_7) {
  FUNC_2(&VAR_6, sizeof(VAR_6));
  if (VAR_4->bio_flags & VAR_0) {
   VAR_6.status &= ~(VAR_2 << VAR_3);
   VAR_6.status |= (VAR_1) << VAR_3;
  }
  FUNC_3(VAR_4, &VAR_6);
 }
}
