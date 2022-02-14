
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_consumer {TYPE_1__* provider; } ;
struct bio {int * bio_data; scalar_t__ bio_length; int bio_offset; int * bio_attribute; int * bio_done; int bio_flags; int bio_cmd; } ;
struct TYPE_2__ {int mediasize; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bio*,char*) ;
 struct bio* FUNC_1 () ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,struct g_consumer*) ;
 int FUNC_4 (int ,char*,int ) ;

int
FUNC_5(struct g_consumer *VAR_3)
{
 struct bio *VAR_4;
 int VAR_5;

 FUNC_4(VAR_2, "bio_flush(%s)", VAR_3->provider->name);
 VAR_4 = FUNC_1();
 VAR_4->bio_cmd = VAR_0;
 VAR_4->bio_flags |= VAR_1;
 VAR_4->bio_done = ((void*)0);
 VAR_4->bio_attribute = ((void*)0);
 VAR_4->bio_offset = VAR_3->provider->mediasize;
 VAR_4->bio_length = 0;
 VAR_4->bio_data = ((void*)0);
 FUNC_3(VAR_4, VAR_3);
 VAR_5 = FUNC_0(VAR_4, "gflush");
 FUNC_2(VAR_4);
 return (VAR_5);
}
