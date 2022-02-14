
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct cfi_softc {int sc_width; scalar_t__ sc_size; scalar_t__ sc_writing; } ;
struct bio {scalar_t__ bio_offset; long bio_bcount; long bio_resid; scalar_t__ bio_data; scalar_t__ bio_error; int bio_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct cfi_softc*) ;
 void* FUNC_3 (struct cfi_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct cfi_softc *VAR_2, struct bio *VAR_3)
{
 long VAR_4;

 FUNC_0(VAR_2->sc_width == 1 || VAR_2->sc_width == 2 || VAR_2->sc_width == 4,
     ("sc_width %d", VAR_2->sc_width));

 if (VAR_2->sc_writing) {
  VAR_3->bio_error = FUNC_2(VAR_2);
  if (VAR_3->bio_error) {
   VAR_3->bio_flags |= VAR_0;
   goto done;
  }
 }
 if (VAR_3->bio_offset > VAR_2->sc_size) {
  VAR_3->bio_flags |= VAR_0;
  VAR_3->bio_error = VAR_1;
  goto done;
 }
 VAR_4 = VAR_3->bio_bcount;
 if (VAR_2->sc_width == 1) {
  uint8_t *VAR_5 = (uint8_t *)VAR_3->bio_data;
  while (VAR_4 > 0 && VAR_3->bio_offset < VAR_2->sc_size) {
   *VAR_5++ = FUNC_3(VAR_2, VAR_3->bio_offset);
   VAR_3->bio_offset += 1, VAR_4 -= 1;
  }
 } else if (VAR_2->sc_width == 2) {
  uint16_t *VAR_6 = (uint16_t *)VAR_3->bio_data;
  while (VAR_4 > 0 && VAR_3->bio_offset < VAR_2->sc_size) {
   *VAR_6++ = FUNC_3(VAR_2, VAR_3->bio_offset);
   VAR_3->bio_offset += 2, VAR_4 -= 2;
  }
 } else {
  uint32_t *VAR_7 = (uint32_t *)VAR_3->bio_data;
  while (VAR_4 > 0 && VAR_3->bio_offset < VAR_2->sc_size) {
   *VAR_7++ = FUNC_3(VAR_2, VAR_3->bio_offset);
   VAR_3->bio_offset += 4, VAR_4 -= 4;
  }
 }
 VAR_3->bio_resid = VAR_4;
done:
 FUNC_1(VAR_3);
}
