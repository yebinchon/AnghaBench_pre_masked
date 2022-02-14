
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct g_raid_volume {int v_provider; struct g_raid_softc* v_softc; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_softc {int dummy; } ;
struct bio {size_t bio_length; int bio_flags; scalar_t__ bio_error; int bio_to; void* bio_data; int bio_offset; int * bio_attribute; int bio_done; int bio_cmd; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,struct g_raid_softc*,char*) ;
 int FUNC_2 (struct g_raid_softc*) ;
 int FUNC_3 (struct bio*) ;
 int VAR_3 ;
 int FUNC_4 (struct bio*) ;

int
FUNC_5(struct g_raid_tr_object *VAR_4,
    void *VAR_5, vm_offset_t VAR_6, off_t VAR_7, size_t VAR_8)
{
 struct g_raid_softc *VAR_9;
 struct g_raid_volume *VAR_10;
 struct bio VAR_11;

 VAR_10 = VAR_4->tro_volume;
 VAR_9 = VAR_10->v_softc;

 FUNC_4(&VAR_11);
 VAR_11.bio_cmd = VAR_1;
 VAR_11.bio_done = VAR_3;
 VAR_11.bio_attribute = ((void*)0);
 VAR_11.bio_offset = VAR_7;
 VAR_11.bio_length = VAR_8;
 VAR_11.bio_data = VAR_5;
 VAR_11.bio_to = VAR_10->v_provider;

 FUNC_3(&VAR_11);
 while (!(VAR_11.bio_flags & VAR_0)) {
  FUNC_1(4, VAR_9, "Poll...");
  FUNC_2(VAR_9);
  FUNC_0(10);
 }

 return (VAR_11.bio_error != 0 ? VAR_2 : 0);
}
