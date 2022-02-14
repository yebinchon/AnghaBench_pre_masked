
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_softc {int consumer; } ;
struct g_bde_sector {int state; int size; int data; int offset; int * owner; struct g_bde_softc* softc; } ;
struct bio {struct g_bde_softc* bio_caller2; struct g_bde_sector* bio_caller1; int bio_done; int bio_length; int bio_data; int bio_offset; int bio_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct bio*,int ) ;
 struct bio* FUNC_2 () ;
 int FUNC_3 (int ,char*,struct g_bde_sector*) ;

__attribute__((used)) static int
FUNC_4(struct g_bde_sector *VAR_5)
{
 struct bio *VAR_6;
 struct g_bde_softc *VAR_7;

 FUNC_3(VAR_2, "g_bde_start_write(%p)", VAR_5);
 VAR_7 = VAR_5->softc;
 FUNC_0(VAR_7 != ((void*)0), ("NULL sc in g_bde_start_write"));
 FUNC_0(VAR_5->owner != ((void*)0), ("NULL sp->owner in g_bde_start_write"));
 VAR_6 = FUNC_2();
 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_6->bio_cmd = VAR_0;
 VAR_6->bio_offset = VAR_5->offset;
 VAR_6->bio_data = VAR_5->data;
 VAR_6->bio_length = VAR_5->size;
 VAR_6->bio_done = VAR_4;
 VAR_6->bio_caller1 = VAR_5;
 VAR_6->bio_caller2 = VAR_7;
 VAR_5->state = VAR_3;
 FUNC_1(VAR_6, VAR_7->consumer);
 return(0);
}
