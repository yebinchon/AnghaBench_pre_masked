
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_consumer {TYPE_1__* provider; } ;
struct bio {void* bio_data; scalar_t__ bio_length; scalar_t__ bio_offset; int * bio_done; int bio_cmd; } ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;
struct TYPE_2__ {scalar_t__ sectorsize; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bio*,char*) ;
 struct bio* FUNC_2 () ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct bio*,struct g_consumer*) ;
 void* FUNC_6 (scalar_t__,int ) ;

void *
FUNC_7(struct g_consumer *VAR_3, off_t VAR_4, off_t VAR_5, int *VAR_6)
{
 struct bio *VAR_7;
 void *VAR_8;
 int VAR_9;

 FUNC_0(VAR_5 > 0 && VAR_5 >= VAR_3->provider->sectorsize &&
     VAR_5 <= VAR_1, ("g_read_data(): invalid length %jd",
     (intmax_t)VAR_5));

 VAR_7 = FUNC_2();
 VAR_7->bio_cmd = VAR_0;
 VAR_7->bio_done = ((void*)0);
 VAR_7->bio_offset = VAR_4;
 VAR_7->bio_length = VAR_5;
 VAR_8 = FUNC_6(VAR_5, VAR_2);
 VAR_7->bio_data = VAR_8;
 FUNC_5(VAR_7, VAR_3);
 VAR_9 = FUNC_1(VAR_7, "gread");
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;
 FUNC_3(VAR_7);
 if (VAR_9) {
  FUNC_4(VAR_8);
  VAR_8 = ((void*)0);
 }
 return (VAR_8);
}
