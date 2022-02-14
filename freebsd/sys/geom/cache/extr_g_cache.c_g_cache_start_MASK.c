
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_geom {int consumer; struct g_cache_softc* softc; } ;
struct g_cache_softc {scalar_t__ sc_wrotebytes; int sc_writes; scalar_t__ sc_cachereadbytes; int sc_cachereads; int sc_mtx; scalar_t__ sc_tail; scalar_t__ sc_readbytes; int sc_reads; } ;
struct g_cache_desc {int * d_biolist; } ;
struct bio {int bio_cmd; int bio_done; scalar_t__ bio_length; scalar_t__ bio_offset; TYPE_1__* bio_to; } ;
struct TYPE_2__ {struct g_geom* geom; } ;




 int VAR_0 ;
 int FUNC_0 (struct bio*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,struct g_cache_softc*) ;
 int FUNC_3 (struct g_cache_softc*,struct bio*,struct g_cache_desc*,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct g_cache_softc*,struct bio*) ;
 struct g_cache_desc* FUNC_5 (struct g_cache_softc*,int ) ;
 int FUNC_6 (struct g_cache_softc*,struct bio*) ;
 struct bio* FUNC_7 (struct bio*) ;
 int FUNC_8 (struct bio*,int ) ;
 int FUNC_9 (struct bio*,int ) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct bio *VAR_3)
{
 struct g_cache_softc *VAR_4;
 struct g_geom *VAR_5;
 struct g_cache_desc *VAR_6;
 struct bio *VAR_7;

 VAR_5 = VAR_3->bio_to->geom;
 VAR_4 = VAR_5->softc;
 FUNC_0(VAR_3, "Request received.");
 switch (VAR_3->bio_cmd) {
 case 129:
  VAR_4->sc_reads++;
  VAR_4->sc_readbytes += VAR_3->bio_length;
  if (!VAR_1)
   break;
  if (VAR_3->bio_offset + VAR_3->bio_length > VAR_4->sc_tail)
   break;
  if (FUNC_2(VAR_3->bio_offset, VAR_4) ==
      FUNC_2(VAR_3->bio_offset + VAR_3->bio_length - 1, VAR_4)) {
   VAR_4->sc_cachereads++;
   VAR_4->sc_cachereadbytes += VAR_3->bio_length;
   if (FUNC_6(VAR_4, VAR_3) == 0)
    return;
   VAR_4->sc_cachereads--;
   VAR_4->sc_cachereadbytes -= VAR_3->bio_length;
   break;
  } else if (FUNC_2(VAR_3->bio_offset, VAR_4) + 1 ==
      FUNC_2(VAR_3->bio_offset + VAR_3->bio_length - 1, VAR_4)) {
   FUNC_10(&VAR_4->sc_mtx);
   VAR_6 = FUNC_5(VAR_4, FUNC_2(VAR_3->bio_offset, VAR_4));
   if (VAR_6 == ((void*)0) || VAR_6->d_biolist != ((void*)0)) {
    FUNC_11(&VAR_4->sc_mtx);
    break;
   }
   VAR_4->sc_cachereads++;
   VAR_4->sc_cachereadbytes += VAR_3->bio_length;
   FUNC_3(VAR_4, VAR_3, VAR_6, 0);
   FUNC_11(&VAR_4->sc_mtx);
   if (FUNC_6(VAR_4, VAR_3) == 0)
    return;
   VAR_4->sc_cachereads--;
   VAR_4->sc_cachereadbytes -= VAR_3->bio_length;
   break;
  }
  break;
 case 128:
  VAR_4->sc_writes++;
  VAR_4->sc_wrotebytes += VAR_3->bio_length;
  FUNC_4(VAR_4, VAR_3);
  break;
 }
 VAR_7 = FUNC_7(VAR_3);
 if (VAR_7 == ((void*)0)) {
  FUNC_8(VAR_3, VAR_0);
  return;
 }
 VAR_7->bio_done = VAR_2;
 FUNC_0(VAR_7, "Sending request.");
 FUNC_9(VAR_7, FUNC_1(&VAR_5->consumer));
}
