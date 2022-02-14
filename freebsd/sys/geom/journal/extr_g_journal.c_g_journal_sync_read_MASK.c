
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_consumer {TYPE_1__* provider; } ;
struct bio {void* bio_data; int bio_length; int bio_offset; int * bio_done; int bio_cmd; } ;
typedef int off_t ;
struct TYPE_2__ {int sectorsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,char*) ;
 int FUNC_1 (struct bio*,struct g_consumer*) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static int
FUNC_3(struct g_consumer *VAR_1, struct bio *VAR_2, off_t VAR_3,
    void *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_2);
 VAR_2->bio_cmd = VAR_0;
 VAR_2->bio_done = ((void*)0);
 VAR_2->bio_offset = VAR_3;
 VAR_2->bio_length = VAR_1->provider->sectorsize;
 VAR_2->bio_data = VAR_4;
 FUNC_1(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_2, "gjs_read");
 return (VAR_5);
}
