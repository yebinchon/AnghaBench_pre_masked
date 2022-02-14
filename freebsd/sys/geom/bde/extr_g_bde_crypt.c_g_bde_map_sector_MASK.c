
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef size_t u_int ;
struct g_bde_work {size_t offset; size_t ko; size_t length; size_t so; size_t kso; struct g_bde_softc* softc; } ;
struct g_bde_key {size_t zone_cont; size_t sectorsize; size_t zone_width; size_t media_width; size_t sector0; size_t sectorN; int * lsector; scalar_t__ keyoffset; } ;
struct g_bde_softc {struct g_bde_key key; } ;
typedef int intmax_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,size_t) ;
 size_t FUNC_2 (int ,size_t) ;

void
FUNC_3(struct g_bde_work *VAR_3)
{

 u_int VAR_4, VAR_5, VAR_6, VAR_7;
 uint64_t VAR_8;
 struct g_bde_softc *VAR_9;
 struct g_bde_key *VAR_10;

 VAR_9 = VAR_3->softc;
 VAR_10 = &VAR_9->key;


 VAR_4 = VAR_3->offset / VAR_10->zone_cont;
 VAR_5 = VAR_3->offset % VAR_10->zone_cont;


 VAR_3->ko = (VAR_5 / VAR_10->sectorsize) * VAR_2;


 VAR_7 = VAR_10->zone_cont - VAR_5;


 if (VAR_7 > VAR_0)
  VAR_7 = VAR_0;

 if (VAR_7 < VAR_3->length)
  VAR_3->length = VAR_7;


 VAR_3->so = VAR_4 * VAR_10->zone_width + VAR_5;
 VAR_3->so += VAR_10->keyoffset;
 VAR_3->so %= VAR_10->media_width;
 if (VAR_3->so + VAR_3->length > VAR_10->media_width)
  VAR_3->length = VAR_10->media_width - VAR_3->so;
 VAR_3->so += VAR_10->sector0;


 VAR_3->kso = VAR_4 * VAR_10->zone_width + VAR_10->zone_cont;
 VAR_3->kso += VAR_10->keyoffset;
 VAR_3->kso %= VAR_10->media_width;
 VAR_3->kso += VAR_10->sector0;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

  VAR_8 = FUNC_2(VAR_10->lsector[VAR_6], (uint64_t)VAR_10->sectorsize);

  if (VAR_3->kso >= VAR_8)
   VAR_3->kso += VAR_10->sectorsize;

  if (VAR_3->so >= VAR_8) {

   VAR_3->so += VAR_10->sectorsize;
  } else if ((VAR_3->so + VAR_3->length) > VAR_8) {

   VAR_3->length = VAR_8 - VAR_3->so;
  }
 }
 FUNC_0(VAR_3->so + VAR_3->length <= VAR_10->sectorN,
     ("wp->so (%jd) + wp->length (%jd) > EOM (%jd), offset = %jd",
     (intmax_t)VAR_3->so,
     (intmax_t)VAR_3->length,
     (intmax_t)VAR_10->sectorN,
     (intmax_t)VAR_3->offset));

 FUNC_0(VAR_3->kso + VAR_10->sectorsize <= VAR_10->sectorN,
     ("wp->kso (%jd) + kp->sectorsize > EOM (%jd), offset = %jd",
     (intmax_t)VAR_3->kso,
     (intmax_t)VAR_10->sectorN,
     (intmax_t)VAR_3->offset));

 FUNC_0(VAR_3->so >= VAR_10->sector0,
     ("wp->so (%jd) < BOM (%jd), offset = %jd",
     (intmax_t)VAR_3->so,
     (intmax_t)VAR_10->sector0,
     (intmax_t)VAR_3->offset));

 FUNC_0(VAR_3->kso >= VAR_10->sector0,
     ("wp->kso (%jd) <BOM (%jd), offset = %jd",
     (intmax_t)VAR_3->kso,
     (intmax_t)VAR_10->sector0,
     (intmax_t)VAR_3->offset));
}
