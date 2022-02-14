
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hifn_softc {int sc_flags; int sc_rnghz; int sc_rngto; int sc_rndtest; int (* sc_harvest ) (int ,int*,int) ;scalar_t__ sc_rngfirst; int sc_dev; } ;
typedef int num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hifn_softc*,int ) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct hifn_softc*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int*,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_6)
{

 struct hifn_softc *VAR_7 = VAR_6;
 u_int32_t VAR_8, VAR_9[2];
 int VAR_10;

 if (VAR_7->sc_flags & VAR_5) {

  for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
   VAR_8 = FUNC_0(VAR_7, VAR_1);
   if (VAR_8 & VAR_4) {
    FUNC_2(VAR_7->sc_dev,
           "RNG underflow: disabling\n");
    return;
   }
   if ((VAR_8 & VAR_3) == 0)
    break;





   VAR_9[0] = FUNC_0(VAR_7, VAR_0);
   VAR_9[1] = FUNC_0(VAR_7, VAR_0);

   if (VAR_7->sc_rngfirst)
    VAR_7->sc_rngfirst = 0;
   else
    (*VAR_7->sc_harvest)(VAR_7->sc_rndtest,
     VAR_9, sizeof (VAR_9));
  }
 } else {
  VAR_9[0] = FUNC_0(VAR_7, VAR_2);


  if (VAR_7->sc_rngfirst)
   VAR_7->sc_rngfirst = 0;
  else
   (*VAR_7->sc_harvest)(VAR_7->sc_rndtest,
    VAR_9, sizeof (VAR_9[0]));
 }

 FUNC_1(&VAR_7->sc_rngto, VAR_7->sc_rnghz, FUNC_5, VAR_7);

}
