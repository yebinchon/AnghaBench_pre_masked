
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdiinfo {int* ii_index; int ii_ndisk; int ii_startblk; int ii_startoff; } ;
struct ccdcinfo {int ci_size; } ;
struct ccd_s {int sc_ndisks; int sc_ileave; struct ccdcinfo* sc_cinfo; struct ccdiinfo* sc_itable; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(struct ccd_s *VAR_2)
{
 struct ccdcinfo *VAR_3, *VAR_4;
 struct ccdiinfo *VAR_5;
 daddr_t VAR_6, VAR_7;
 int VAR_8;
 daddr_t VAR_9;
 VAR_9 = (VAR_2->sc_ndisks + 1) * sizeof(struct ccdiinfo);
 VAR_2->sc_itable = FUNC_1(VAR_9, VAR_0 | VAR_1);







 if (VAR_2->sc_ileave == 0) {
  VAR_6 = 0;
  VAR_5 = VAR_2->sc_itable;

  for (VAR_8 = 0; VAR_8 < VAR_2->sc_ndisks; VAR_8++) {

   VAR_5->ii_index = FUNC_1(sizeof(int), VAR_0);
   VAR_5->ii_ndisk = 1;
   VAR_5->ii_startblk = VAR_6;
   VAR_5->ii_startoff = 0;
   VAR_5->ii_index[0] = VAR_8;
   VAR_6 += VAR_2->sc_cinfo[VAR_8].ci_size;
   VAR_5++;
  }
  VAR_5->ii_ndisk = 0;
  return;
 }




 VAR_9 = 0;
 VAR_6 = VAR_7 = 0;
 for (VAR_5 = VAR_2->sc_itable; ; VAR_5++) {




  VAR_5->ii_index = FUNC_1((sizeof(int) * VAR_2->sc_ndisks),
      VAR_0);




  VAR_4 = ((void*)0);
  for (VAR_3 = VAR_2->sc_cinfo; VAR_3 < &VAR_2->sc_cinfo[VAR_2->sc_ndisks];
      VAR_3++) {
   if (VAR_3->ci_size > VAR_9 &&
       (VAR_4 == ((void*)0) ||
        VAR_3->ci_size < VAR_4->ci_size)) {
    VAR_4 = VAR_3;
   }
  }




  if (VAR_4 == ((void*)0)) {
   VAR_5->ii_ndisk = 0;
   FUNC_0(VAR_5->ii_index);
   VAR_5->ii_index = ((void*)0);
   break;
  }




  VAR_5->ii_startblk = VAR_6 / VAR_2->sc_ileave;






  VAR_5->ii_startoff = VAR_7;





  VAR_8 = 0;
  for (VAR_3 = VAR_2->sc_cinfo;
      VAR_3 < &VAR_2->sc_cinfo[VAR_2->sc_ndisks]; VAR_3++) {
   if (VAR_3->ci_size >= VAR_4->ci_size) {
    VAR_5->ii_index[VAR_8++] = VAR_3 - VAR_2->sc_cinfo;
   }
  }
  VAR_5->ii_ndisk = VAR_8;
  VAR_6 += VAR_8 * (VAR_4->ci_size - VAR_9);
  VAR_7 = VAR_4->ci_size / VAR_2->sc_ileave;
  VAR_9 = VAR_4->ci_size;
 }
}
