
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct cfi_softc {int sc_width; scalar_t__ sc_size; scalar_t__ sc_wrofs; scalar_t__ sc_wrbufsz; scalar_t__ sc_wrbuf; scalar_t__ sc_writing; } ;
struct bio {scalar_t__ bio_offset; long bio_bcount; long bio_resid; int bio_data; int bio_flags; scalar_t__ bio_error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,long) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct cfi_softc*) ;
 scalar_t__ FUNC_5 (struct cfi_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct cfi_softc *VAR_2, struct bio *VAR_3)
{
 long VAR_4;
 u_int VAR_5;

 FUNC_0(VAR_2->sc_width == 1 || VAR_2->sc_width == 2 || VAR_2->sc_width == 4,
     ("sc_width %d", VAR_2->sc_width));

 if (VAR_3->bio_offset > VAR_2->sc_size) {
  VAR_3->bio_flags |= VAR_0;
  VAR_3->bio_error = VAR_1;
  goto done;
 }
 VAR_4 = VAR_3->bio_bcount;
 while (VAR_4 > 0) {




  if (VAR_2->sc_writing) {
   VAR_5 = VAR_2->sc_wrofs + VAR_2->sc_wrbufsz;
   if (VAR_3->bio_offset < VAR_2->sc_wrofs ||
       VAR_3->bio_offset >= VAR_5)
    FUNC_4(VAR_2);
  }


  if (!VAR_2->sc_writing) {
   VAR_3->bio_error = FUNC_5(VAR_2, VAR_3->bio_offset);
   if (VAR_3->bio_error) {
    VAR_3->bio_flags |= VAR_0;
    goto done;
   }
  }

  VAR_5 = VAR_2->sc_wrofs + VAR_2->sc_wrbufsz;
  FUNC_2(VAR_3->bio_data,
      VAR_2->sc_wrbuf + VAR_3->bio_offset - VAR_2->sc_wrofs,
      FUNC_1(VAR_5 - VAR_3->bio_offset, VAR_4));
  VAR_4 -= FUNC_1(VAR_5 - VAR_3->bio_offset, VAR_4);
 }
 VAR_3->bio_resid = VAR_4;
done:
 FUNC_3(VAR_3);
}
