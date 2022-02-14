
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_plex {int dummy; } ;
struct bio {scalar_t__ bio_error; scalar_t__ bio_inbed; scalar_t__ bio_children; int bio_pflags; int bio_length; int bio_completed; struct bio* bio_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,scalar_t__) ;
 int FUNC_2 (struct gv_plex*,struct bio*) ;
 int FUNC_3 (struct gv_plex*,struct bio*) ;

void
FUNC_4(struct gv_plex *VAR_2, struct bio *VAR_3)
{
 struct bio *VAR_4;

 VAR_4 = VAR_3->bio_parent;
 if (VAR_4->bio_error == 0)
  VAR_4->bio_error = VAR_3->bio_error;
 FUNC_0(VAR_3);
 VAR_4->bio_inbed++;
 if (VAR_4->bio_children == VAR_4->bio_inbed) {


  VAR_4->bio_completed = VAR_4->bio_length;
  if (VAR_4->bio_pflags & VAR_1)
   FUNC_3(VAR_2, VAR_4);
  else if (VAR_4->bio_pflags & VAR_0)
   FUNC_2(VAR_2, VAR_4);
  else
   FUNC_1(VAR_4, VAR_4->bio_error);
 }
}
