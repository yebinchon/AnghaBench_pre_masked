
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_consumer {int dummy; } ;
struct bio {char const* bio_attribute; int bio_length; int bio_completed; void* bio_data; int * bio_done; int bio_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,char*) ;
 struct bio* FUNC_1 () ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,struct g_consumer*) ;
 int FUNC_4 (int ,char*,char const*) ;

int
FUNC_5(const char *VAR_2, struct g_consumer *VAR_3, int *VAR_4, void *VAR_5)
{
 struct bio *VAR_6;
 int VAR_7;

 FUNC_4(VAR_1, "bio_getattr(%s)", VAR_2);
 VAR_6 = FUNC_1();
 VAR_6->bio_cmd = VAR_0;
 VAR_6->bio_done = ((void*)0);
 VAR_6->bio_attribute = VAR_2;
 VAR_6->bio_length = *VAR_4;
 VAR_6->bio_data = VAR_5;
 FUNC_3(VAR_6, VAR_3);
 VAR_7 = FUNC_0(VAR_6, "ggetattr");
 *VAR_4 = VAR_6->bio_completed;
 FUNC_2(VAR_6);
 return (VAR_7);
}
