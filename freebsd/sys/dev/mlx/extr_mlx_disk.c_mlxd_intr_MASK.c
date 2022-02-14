
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bio_flags; scalar_t__ bio_resid; int bio_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int) ;

void
FUNC_2(struct bio *VAR_2)
{

    FUNC_1(1);

    if (VAR_2->bio_flags & VAR_0)
 VAR_2->bio_error = VAR_1;
    else
 VAR_2->bio_resid = 0;

    FUNC_0(VAR_2);
}
