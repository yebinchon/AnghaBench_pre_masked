
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bio_flags; int bio_bcount; int bio_resid; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,char*,int,int) ;
 int FUNC_2 (int *,char*,char*) ;

void
FUNC_3(struct bio *VAR_2)
{
 FUNC_2(((void*)0), VAR_1, "");

 if (VAR_2->bio_flags & VAR_0) {
  VAR_2->bio_resid = VAR_2->bio_bcount;
  FUNC_1(VAR_2, "hard error", -1, 1);
 }

 FUNC_0(VAR_2);
}
