
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct gctl_req {int dummy; } ;
struct ccdcinfo {int ci_size; TYPE_1__* ci_provider; } ;
struct ccd_s {int sc_size; int sc_flags; int sc_offset; int sc_ileave; int sc_ndisks; int sc_secsize; struct ccdcinfo* sc_cinfo; } ;
typedef int off_t ;
typedef int daddr_t ;
struct TYPE_2__ {int mediasize; int sectorsize; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ccd_s*) ;
 int FUNC_1 (struct gctl_req*,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct gctl_req *VAR_8, struct ccd_s *VAR_9)
{
 struct ccdcinfo *VAR_10;
 daddr_t VAR_11;
 int VAR_12;
 daddr_t VAR_13;
 int VAR_14;
 off_t VAR_15;
 u_int VAR_16;

 VAR_9->sc_size = 0;

 VAR_14 = 0;
 VAR_13 = 0;

 if (VAR_9->sc_flags & VAR_0) {
  VAR_9->sc_offset = 0;
  VAR_9->sc_ileave *= 2;
  if (VAR_9->sc_flags & VAR_1 && VAR_9->sc_ndisks != 2)
   FUNC_1(VAR_8, "Mirror mode for Linux raids is "
                   "only supported with 2 devices");
 } else {
  if (VAR_9->sc_flags & VAR_2)
   VAR_9->sc_offset = 0;
  else
   VAR_9->sc_offset = VAR_4;

 }
 for (VAR_12 = 0; VAR_12 < VAR_9->sc_ndisks; VAR_12++) {
  VAR_10 = &VAR_9->sc_cinfo[VAR_12];

  VAR_15 = VAR_10->ci_provider->mediasize;
  VAR_16 = VAR_10->ci_provider->sectorsize;
  if (VAR_16 > VAR_14)
   VAR_14 = VAR_16;
  VAR_11 = VAR_15 / VAR_5 - VAR_9->sc_offset;



  if (VAR_9->sc_ileave > 1)
   VAR_11 -= VAR_11 % VAR_9->sc_ileave;

  if (VAR_11 == 0) {
   FUNC_1(VAR_8, "Component %s has effective size zero",
       VAR_10->ci_provider->name);
   return(VAR_7);
  }

  if (VAR_13 == 0 || VAR_11 < VAR_13)
   VAR_13 = VAR_11;
  VAR_10->ci_size = VAR_11;
  VAR_9->sc_size += VAR_11;
 }





 if ((VAR_9->sc_ileave > 0) &&
     (VAR_9->sc_ileave < (VAR_14 / VAR_5))) {
  FUNC_1(VAR_8, "Interleave to small for sector size");
  return(VAR_6);
 }
 if (VAR_9->sc_flags & VAR_3) {
  for (VAR_12 = 0; VAR_12 < VAR_9->sc_ndisks; VAR_12++) {
   VAR_10 = &VAR_9->sc_cinfo[VAR_12];
   VAR_10->ci_size = VAR_13;
  }
  VAR_9->sc_size = VAR_9->sc_ndisks * VAR_13;
 }

 if (VAR_9->sc_flags & VAR_1) {






  if (VAR_9->sc_ndisks % 2) {
   FUNC_1(VAR_8,
         "Mirroring requires an even number of disks");
   return(VAR_6);
  }
  if (VAR_9->sc_ileave == 0) {
   FUNC_1(VAR_8,
        "An interleave must be specified when mirroring");
   return(VAR_6);
  }
  VAR_9->sc_size = (VAR_9->sc_ndisks/2) * VAR_13;
 }




 FUNC_0(VAR_9);





 VAR_9->sc_secsize = VAR_14;

 return (0);
}
