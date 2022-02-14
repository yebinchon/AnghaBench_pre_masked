
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_consumer {TYPE_1__* provider; } ;
struct bio {int * bio_data; scalar_t__ bio_length; scalar_t__ bio_offset; int * bio_done; int bio_cmd; } ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;
struct TYPE_2__ {scalar_t__ sectorsize; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bio*,char*) ;
 struct bio* FUNC_2 () ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,struct g_consumer*) ;

int
FUNC_5(struct g_consumer *VAR_1, off_t VAR_2, off_t VAR_3)
{
 struct bio *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3 > 0 && VAR_3 >= VAR_1->provider->sectorsize,
     ("g_delete_data(): invalid length %jd", (intmax_t)VAR_3));

 VAR_4 = FUNC_2();
 VAR_4->bio_cmd = VAR_0;
 VAR_4->bio_done = ((void*)0);
 VAR_4->bio_offset = VAR_2;
 VAR_4->bio_length = VAR_3;
 VAR_4->bio_data = ((void*)0);
 FUNC_4(VAR_4, VAR_1);
 VAR_5 = FUNC_1(VAR_4, "gdelete");
 FUNC_3(VAR_4);
 return (VAR_5);
}
