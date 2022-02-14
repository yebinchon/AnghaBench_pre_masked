
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bio_error; scalar_t__ bio_completed; scalar_t__ bio_length; } ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bio*,int) ;
 int FUNC_2 (int ,char*,struct bio*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_1, off_t VAR_2, int VAR_3)
{

 FUNC_2(VAR_0, "g_bde_contribute bp %p bytes %jd error %d",
      VAR_1, (intmax_t)VAR_2, VAR_3);
 if (VAR_1->bio_error == 0)
  VAR_1->bio_error = VAR_3;
 VAR_1->bio_completed += VAR_2;
 FUNC_0(VAR_1->bio_completed <= VAR_1->bio_length, ("Too large contribution"));
 if (VAR_1->bio_completed == VAR_1->bio_length) {
  if (VAR_1->bio_error != 0)
   VAR_1->bio_completed = 0;
  FUNC_1(VAR_1, VAR_1->bio_error);
 }
}
