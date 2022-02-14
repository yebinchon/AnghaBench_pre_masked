
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_cache_softc {int sc_mtx; int sc_nused; int sc_usedlist; int sc_invalid; } ;
struct g_cache_desc {int d_flags; struct bio* d_biolist; } ;
struct bio {scalar_t__ bio_error; TYPE_2__* bio_from; } ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_cache_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g_cache_softc* FUNC_0 (struct bio*) ;
 struct g_cache_desc* FUNC_1 (struct bio*) ;
 struct g_cache_softc* FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (struct bio*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct g_cache_desc*,int ) ;
 int FUNC_6 (int *,struct g_cache_desc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct g_cache_softc*,struct bio*,struct g_cache_desc*,scalar_t__) ;
 int FUNC_8 (struct g_cache_softc*,struct g_cache_desc*) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct bio *VAR_4)
{
 struct g_cache_softc *VAR_5;
 struct g_cache_desc *VAR_6;
 struct bio *VAR_7, *VAR_8;

 VAR_5 = VAR_4->bio_from->geom->softc;
 FUNC_4(FUNC_0(VAR_4) == VAR_5, ("corrupt bio_caller in g_cache_done()"));
 VAR_6 = FUNC_1(VAR_4);
 FUNC_10(&VAR_5->sc_mtx);
 VAR_7 = VAR_6->d_biolist;
 while (VAR_7 != ((void*)0)) {
  FUNC_4(FUNC_2(VAR_7) == VAR_5, ("corrupt bio_driver in g_cache_done()"));
  VAR_8 = FUNC_3(VAR_7);
  FUNC_7(VAR_5, VAR_7, VAR_6, VAR_4->bio_error);
  VAR_7 = VAR_8;
 }
 VAR_6->d_biolist = ((void*)0);
 if (VAR_6->d_flags & VAR_0) {
  VAR_5->sc_invalid--;
  FUNC_8(VAR_5, VAR_6);
 } else if (VAR_4->bio_error) {
  FUNC_5(VAR_6, VAR_2);
  if (VAR_6->d_flags & VAR_1) {
   FUNC_6(&VAR_5->sc_usedlist, VAR_6, VAR_3);
   VAR_5->sc_nused--;
  }
  FUNC_8(VAR_5, VAR_6);
 }
 FUNC_11(&VAR_5->sc_mtx);
 FUNC_9(VAR_4);
}
