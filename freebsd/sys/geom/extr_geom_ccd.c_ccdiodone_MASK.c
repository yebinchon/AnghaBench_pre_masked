
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {scalar_t__ bio_cmd; scalar_t__ bio_error; int bio_inbed; struct bio* bio_caller1; int bio_from; struct bio* bio_parent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_1)
{
 struct bio *VAR_2, *VAR_3;

 VAR_2 = VAR_1->bio_caller1;
 VAR_3 = VAR_1->bio_parent;

 if (VAR_3->bio_cmd == VAR_0) {
  if (VAR_1->bio_error == 0) {

   if (VAR_2 != ((void*)0)) {
    VAR_3->bio_inbed++;
    FUNC_0(VAR_2);
   }
   FUNC_2(VAR_1);
   return;
  }
  if (VAR_2 != ((void*)0)) {

   VAR_2->bio_caller1 = ((void*)0);
   VAR_3->bio_inbed++;
   FUNC_0(VAR_1);
   FUNC_1(VAR_2, VAR_2->bio_from);




   return;
  }
  FUNC_2(VAR_1);
  return;
 }
 if (VAR_2 != ((void*)0)) {
  VAR_2->bio_caller1 = ((void*)0);
  VAR_3->bio_inbed++;
  if (VAR_1->bio_error != 0 && VAR_3->bio_error == 0)
   VAR_3->bio_error = VAR_1->bio_error;
  FUNC_0(VAR_1);
  return;
 }
 FUNC_2(VAR_1);
}
