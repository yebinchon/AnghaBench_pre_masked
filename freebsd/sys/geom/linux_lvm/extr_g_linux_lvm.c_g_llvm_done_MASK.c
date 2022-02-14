
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {scalar_t__ bio_error; scalar_t__ bio_inbed; scalar_t__ bio_children; scalar_t__ bio_length; scalar_t__ bio_completed; TYPE_1__* bio_to; int bio_offset; struct bio* bio_parent; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_0)
{
 struct bio *VAR_1;

 VAR_1 = VAR_0->bio_parent;

 if (VAR_0->bio_error != 0) {
  FUNC_0(0, "Error %d for offset=%ju, length=%ju on %s",
      VAR_0->bio_error, VAR_0->bio_offset, VAR_0->bio_length,
      VAR_0->bio_to->name);
  if (VAR_1->bio_error == 0)
   VAR_1->bio_error = VAR_0->bio_error;
 }

 VAR_1->bio_inbed++;
 VAR_1->bio_completed += VAR_0->bio_completed;

 if (VAR_1->bio_children == VAR_1->bio_inbed) {
  VAR_1->bio_completed = VAR_1->bio_length;
  FUNC_2(VAR_1, VAR_1->bio_error);
 }
 FUNC_1(VAR_0);
}
