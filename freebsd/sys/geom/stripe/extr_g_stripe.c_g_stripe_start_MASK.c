
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct g_stripe_softc {int sc_stripesize; int sc_stripebits; int sc_ndisks; } ;
struct bio {int bio_cmd; int bio_offset; int bio_length; int bio_flags; int bio_error; TYPE_2__* bio_to; } ;
typedef int off_t ;
struct TYPE_4__ {int name; int error; TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_stripe_softc* softc; } ;






 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct bio*,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct bio*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct g_stripe_softc*,struct bio*) ;
 int FUNC_5 (struct bio*,int,int,int) ;
 int FUNC_6 (struct bio*,int,int,int) ;

__attribute__((used)) static void
FUNC_7(struct bio *VAR_5)
{
 off_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct g_stripe_softc *VAR_11;
 u_int VAR_12;
 int VAR_13, VAR_14 = 0;

 VAR_11 = VAR_5->bio_to->geom->softc;




 FUNC_1(VAR_11 != ((void*)0),
     ("Provider's error should be set (error=%d)(device=%s).",
     VAR_5->bio_to->error, VAR_5->bio_to->name));

 FUNC_0(VAR_5, "Request received.");

 switch (VAR_5->bio_cmd) {
 case 129:
 case 128:
 case 132:
  break;
 case 131:
  FUNC_4(VAR_11, VAR_5);
  return;
 case 130:

 default:
  FUNC_3(VAR_5, VAR_1);
  return;
 }

 VAR_10 = VAR_11->sc_stripesize;







 VAR_9 = VAR_5->bio_offset >> (off_t)VAR_11->sc_stripebits;

 VAR_12 = VAR_9 % VAR_11->sc_ndisks;


 VAR_7 = VAR_5->bio_offset & (VAR_10 - 1);


 VAR_6 = ((VAR_9 / VAR_11->sc_ndisks) << VAR_11->sc_stripebits) + VAR_7;

 VAR_8 = FUNC_2(VAR_5->bio_length, VAR_10 - VAR_7);
 if (VAR_3 && VAR_5->bio_length <= VAR_2 &&
     VAR_5->bio_length >= VAR_10 * VAR_11->sc_ndisks &&
     (VAR_5->bio_flags & VAR_0) == 0 &&
     VAR_5->bio_cmd != 132) {
  VAR_14 = 1;
 }
 VAR_13 = 0;
 if (VAR_14) {
  VAR_13 = FUNC_6(VAR_5, VAR_12, VAR_6, VAR_8);
  if (VAR_13 != 0)
   VAR_4++;
 }






 if (!VAR_14 || VAR_13 != 0)
  VAR_13 = FUNC_5(VAR_5, VAR_12, VAR_6, VAR_8);
 if (VAR_13 != 0) {
  if (VAR_5->bio_error == 0)
   VAR_5->bio_error = VAR_13;
  FUNC_3(VAR_5, VAR_5->bio_error);
 }
}
