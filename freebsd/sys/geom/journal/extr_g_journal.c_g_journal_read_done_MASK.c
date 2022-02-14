
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {scalar_t__ bio_cflags; scalar_t__ bio_inbed; scalar_t__ bio_completed; scalar_t__ bio_length; scalar_t__ bio_error; scalar_t__ bio_children; TYPE_1__* bio_to; struct bio* bio_parent; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_1)
{
 struct bio *VAR_2;

 FUNC_1(VAR_1->bio_cflags == VAR_0,
     ("Invalid bio (%d != %d).", VAR_1->bio_cflags, VAR_0));

 VAR_2 = VAR_1->bio_parent;
 VAR_2->bio_inbed++;
 VAR_2->bio_completed += VAR_1->bio_length;

 if (VAR_1->bio_error != 0) {
  if (VAR_2->bio_error == 0)
   VAR_2->bio_error = VAR_1->bio_error;
  FUNC_0(0, "Error while reading data from %s (error=%d).",
      VAR_1->bio_to->name, VAR_1->bio_error);
 }
 FUNC_2(VAR_1);
 if (VAR_2->bio_children == VAR_2->bio_inbed &&
     VAR_2->bio_completed == VAR_2->bio_length) {

  FUNC_3(VAR_2, 0);
 }
}
