
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {scalar_t__ bio_error; int bio_length; int bio_data; } ;


 int FUNC_0 (int,struct bio*,char*,...) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_0)
{




 if (VAR_0->bio_error != 0) {
  FUNC_0(0, VAR_0, "Cannot update metadata (error=%d).",
      VAR_0->bio_error);
 } else {
  FUNC_0(2, VAR_0, "Metadata updated.");
 }
 FUNC_2(VAR_0->bio_data, VAR_0->bio_length);
 FUNC_1(VAR_0);
}
