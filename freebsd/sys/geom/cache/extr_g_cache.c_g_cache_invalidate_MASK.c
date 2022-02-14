
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_cache_softc {int sc_mtx; int sc_invalid; int sc_nused; int sc_usedlist; } ;
struct g_cache_desc {int d_flags; int * d_biolist; } ;
struct bio {scalar_t__ bio_length; scalar_t__ bio_offset; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_cache_desc*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,struct g_cache_softc*) ;
 int FUNC_2 (int *,struct g_cache_desc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct g_cache_softc*,struct g_cache_desc*) ;
 struct g_cache_desc* FUNC_4 (struct g_cache_softc*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct g_cache_softc *VAR_4, struct bio *VAR_5)
{
 struct g_cache_desc *VAR_6;
 off_t VAR_7, VAR_8;

 FUNC_5(&VAR_4->sc_mtx);
 VAR_7 = FUNC_1(VAR_5->bio_offset, VAR_4);
 VAR_8 = FUNC_1(VAR_5->bio_offset + VAR_5->bio_length - 1, VAR_4);
 do {
  if ((VAR_6 = FUNC_4(VAR_4, VAR_7)) != ((void*)0)) {
   FUNC_0(VAR_6, VAR_2);
   if (VAR_6->d_flags & VAR_1) {
    FUNC_2(&VAR_4->sc_usedlist, VAR_6, VAR_3);
    VAR_4->sc_nused--;
   }
   if (VAR_6->d_biolist == ((void*)0))
    FUNC_3(VAR_4, VAR_6);
   else {
    VAR_6->d_flags = VAR_0;
    VAR_4->sc_invalid++;
   }
  }
  VAR_7++;
 } while (VAR_7 <= VAR_8);
 FUNC_6(&VAR_4->sc_mtx);
}
