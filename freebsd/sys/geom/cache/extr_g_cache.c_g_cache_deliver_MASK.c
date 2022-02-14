
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_cache_softc {scalar_t__ sc_bsize; int sc_nused; int sc_usedlist; int sc_mtx; } ;
struct g_cache_desc {scalar_t__ d_bno; scalar_t__ d_data; int d_flags; int d_atime; } ;
struct bio {scalar_t__ bio_offset; scalar_t__ bio_length; int bio_error; scalar_t__ bio_data; scalar_t__ bio_completed; } ;
typedef scalar_t__ off_t ;


 scalar_t__ FUNC_0 (scalar_t__,struct g_cache_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,struct g_cache_softc*) ;
 int FUNC_5 (int *,struct g_cache_desc*,int ) ;
 int FUNC_6 (int *,struct g_cache_desc*,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_8 (struct bio*,int) ;
 int FUNC_9 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(struct g_cache_softc *VAR_4, struct bio *VAR_5,
    struct g_cache_desc *VAR_6, int VAR_7)
{
 off_t VAR_8, VAR_9, VAR_10;

 FUNC_9(&VAR_4->sc_mtx, VAR_1);
 FUNC_1(FUNC_4(VAR_5->bio_offset, VAR_4) <= VAR_6->d_bno, ("wrong entry"));
 FUNC_1(FUNC_4(VAR_5->bio_offset + VAR_5->bio_length - 1, VAR_4) >=
     VAR_6->d_bno, ("wrong entry"));

 VAR_8 = FUNC_0(VAR_6->d_bno, VAR_4);
 VAR_9 = FUNC_2(VAR_5->bio_offset, VAR_8);
 VAR_10 = FUNC_3(VAR_5->bio_offset + VAR_5->bio_length, VAR_8 + VAR_4->sc_bsize) - VAR_9;

 if (VAR_5->bio_error == 0)
  VAR_5->bio_error = VAR_7;
 if (VAR_5->bio_error == 0) {
  FUNC_7(VAR_6->d_data + (VAR_9 - VAR_8),
      VAR_5->bio_data + (VAR_9 - VAR_5->bio_offset), VAR_10);
 }
 VAR_5->bio_completed += VAR_10;
 FUNC_1(VAR_5->bio_completed <= VAR_5->bio_length, ("extra data"));
 if (VAR_5->bio_completed == VAR_5->bio_length) {
  if (VAR_5->bio_error != 0)
   VAR_5->bio_completed = 0;
  FUNC_8(VAR_5, VAR_5->bio_error);
 }

 if (VAR_6->d_flags & VAR_0) {
  FUNC_6(&VAR_4->sc_usedlist, VAR_6, VAR_2);
  FUNC_5(&VAR_4->sc_usedlist, VAR_6, VAR_2);
 } else if (FUNC_4(VAR_9 + VAR_10, VAR_4) > VAR_6->d_bno) {
  FUNC_5(&VAR_4->sc_usedlist, VAR_6, VAR_2);
  VAR_4->sc_nused++;
  VAR_6->d_flags |= VAR_0;
 }
 VAR_6->d_atime = VAR_3;
}
