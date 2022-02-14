
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_tr_object {int dummy; } ;
struct g_raid_subdisk {int dummy; } ;
struct bio {scalar_t__ bio_caller1; } ;


 int FUNC_0 (struct g_raid_subdisk*,struct bio*) ;

__attribute__((used)) static int
FUNC_1(struct g_raid_tr_object *VAR_0, void *VAR_1)
{
 struct bio *VAR_2;
 struct g_raid_subdisk *VAR_3;

 VAR_2 = (struct bio *)VAR_1;
 VAR_3 = (struct g_raid_subdisk *)VAR_2->bio_caller1;
 FUNC_0(VAR_3, VAR_2);

 return (0);
}
