
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdiinfo {int ii_ndisk; scalar_t__ ii_startblk; int* ii_index; int ii_startoff; } ;
struct ccdcinfo {scalar_t__ ci_size; int ci_consumer; } ;
struct ccd_s {scalar_t__ sc_ileave; int sc_flags; long sc_offset; struct ccdcinfo* sc_cinfo; struct ccdiinfo* sc_itable; } ;
struct bio {long bio_length; struct bio* bio_caller1; int bio_from; int bio_data; void* bio_offset; int bio_done; } ;
typedef long off_t ;
typedef scalar_t__ daddr_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (long) ;
 struct bio* FUNC_1 (struct bio*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct bio **VAR_4, struct ccd_s *VAR_5, struct bio *VAR_6, daddr_t VAR_7, caddr_t VAR_8, long VAR_9)
{
 struct ccdcinfo *VAR_10, *VAR_11 = ((void*)0);
 struct bio *VAR_12;
 daddr_t VAR_13, VAR_14;
 off_t VAR_15;




 VAR_13 = VAR_7;
 VAR_14 = 0;

 if (VAR_5->sc_ileave == 0) {




  daddr_t VAR_16;

  VAR_16 = 0;
  for (VAR_10 = VAR_5->sc_cinfo; VAR_13 >= VAR_16 + VAR_10->ci_size; VAR_10++)
   VAR_16 += VAR_10->ci_size;
  VAR_13 -= VAR_16;
 } else {
  struct ccdiinfo *VAR_17;
  int VAR_18, VAR_19;






  VAR_14 = VAR_13 % VAR_5->sc_ileave;
  VAR_13 = VAR_13 / VAR_5->sc_ileave;




  for (VAR_17 = VAR_5->sc_itable; VAR_17->ii_ndisk; VAR_17++) {
   if (VAR_17->ii_startblk > VAR_13)
    break;
  }
  VAR_17--;





  VAR_19 = VAR_13 - VAR_17->ii_startblk;
  if (VAR_17->ii_ndisk == 1) {




   VAR_18 = VAR_17->ii_index[0];
   VAR_13 = VAR_17->ii_startoff + VAR_19;
  } else {
   if (VAR_5->sc_flags & VAR_0) {
    int VAR_20 = VAR_17->ii_ndisk / 2;
    VAR_18 = VAR_17->ii_index[VAR_19 % VAR_20];
    VAR_13 = VAR_17->ii_startoff + VAR_19 / VAR_20;
    VAR_11 = &VAR_5->sc_cinfo[VAR_18 + VAR_20];
   } else {
    VAR_18 = VAR_17->ii_index[VAR_19 % VAR_17->ii_ndisk];
    VAR_13 = VAR_17->ii_startoff + VAR_19 / VAR_17->ii_ndisk;
   }
  }

  VAR_10 = &VAR_5->sc_cinfo[VAR_18];






  VAR_13 *= VAR_5->sc_ileave;
 }




 VAR_12 = FUNC_1(VAR_6);
 if (VAR_12 == ((void*)0))
  return (VAR_1);
 VAR_12->bio_done = VAR_3;
 VAR_12->bio_offset = FUNC_0(VAR_13 + VAR_14 + VAR_5->sc_offset);
 VAR_12->bio_data = VAR_8;
 if (VAR_5->sc_ileave == 0)
              VAR_15 = FUNC_0((off_t)(VAR_10->ci_size - VAR_13));
 else
              VAR_15 = FUNC_0((off_t)(VAR_5->sc_ileave - VAR_14));
 VAR_12->bio_length = (VAR_15 < VAR_9) ? VAR_15 : VAR_9;

 VAR_12->bio_from = VAR_10->ci_consumer;
 VAR_4[0] = VAR_12;

 if (VAR_5->sc_flags & VAR_0) {
  VAR_12 = FUNC_1(VAR_6);
  if (VAR_12 == ((void*)0))
   return (VAR_1);
  VAR_12->bio_done = VAR_4[0]->bio_done = VAR_2;
  VAR_12->bio_offset = VAR_4[0]->bio_offset;
  VAR_12->bio_data = VAR_4[0]->bio_data;
  VAR_12->bio_length = VAR_4[0]->bio_length;
  VAR_12->bio_from = VAR_11->ci_consumer;
  VAR_12->bio_caller1 = VAR_4[0];
  VAR_4[0]->bio_caller1 = VAR_12;
  VAR_4[1] = VAR_12;
 }
 return (0);
}
