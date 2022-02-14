
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_geom {int consumer; } ;
struct bio {int bio_done; TYPE_1__* bio_to; } ;
struct TYPE_2__ {struct g_geom* geom; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct bio* FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_2)
{
 struct g_geom *VAR_3;
 struct bio *VAR_4;

 VAR_3 = VAR_2->bio_to->geom;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_2, VAR_0);
  return;
 }

 VAR_4->bio_done = VAR_1;
 FUNC_3(VAR_4, FUNC_0(&VAR_3->consumer));
}
