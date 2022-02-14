
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct g_stripe_softc {int sc_stripesize; int sc_ndisks; } ;
typedef int off_t ;
typedef int intmax_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_2(struct g_stripe_softc *VAR_0, char *VAR_1, char *VAR_2, off_t VAR_3,
    off_t VAR_4, int VAR_5)
{
 off_t VAR_6;
 size_t VAR_7;

 VAR_6 = VAR_0->sc_stripesize;
 VAR_7 = (size_t)(VAR_6 - (VAR_3 & (VAR_6 - 1)));
 do {
  FUNC_1(VAR_1, VAR_2, VAR_7);
  if (VAR_5) {
   VAR_2 += VAR_7 + VAR_6 * (VAR_0->sc_ndisks - 1);
   VAR_1 += VAR_7;
  } else {
   VAR_2 += VAR_7;
   VAR_1 += VAR_7 + VAR_6 * (VAR_0->sc_ndisks - 1);
  }
  VAR_4 -= VAR_7;
  FUNC_0(VAR_4 >= 0,
      ("Length < 0 (stripesize=%ju, offset=%ju, length=%jd).",
      (uintmax_t)VAR_6, (uintmax_t)VAR_3, (intmax_t)VAR_4));
  if (VAR_4 > VAR_6)
   VAR_7 = VAR_6;
  else
   VAR_7 = VAR_4;
 } while (VAR_4 > 0);
}
