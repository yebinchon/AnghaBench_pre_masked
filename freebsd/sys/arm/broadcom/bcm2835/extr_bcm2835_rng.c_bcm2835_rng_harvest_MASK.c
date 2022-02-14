
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct bcm2835_rng_softc {int* sc_buf; int sc_stall_count; int sc_rngto; int sc_dev; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bcm2835_rng_softc*,int ) ;
 int FUNC_2 (struct bcm2835_rng_softc*,int ,int*,int) ;
 int FUNC_3 (struct bcm2835_rng_softc*) ;
 int FUNC_4 (struct bcm2835_rng_softc*) ;
 int FUNC_5 (struct bcm2835_rng_softc*) ;
 int FUNC_6 (int *,int ,void (*) (void*),struct bcm2835_rng_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int*,int,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_7)
{
 uint32_t *VAR_8;
 uint32_t VAR_9;
 u_int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;
 struct bcm2835_rng_softc *VAR_16 = VAR_7;

 VAR_8 = VAR_16->sc_buf;
 VAR_11 = VAR_13 = 0;
 VAR_14 = VAR_15 = 0;
 for (VAR_10 = sizeof(VAR_16->sc_buf) / sizeof(uint32_t); VAR_10 > 0;
     VAR_10 -= VAR_13) {

  VAR_9 = FUNC_1(VAR_16, VAR_6);
  VAR_12 = (VAR_9 >> VAR_3) & VAR_2;


  if (VAR_12 == 0) {
   FUNC_4(VAR_16);
   if (++VAR_14 >= VAR_16->sc_stall_count) {
    if (VAR_15++ > 0) {
     FUNC_8(VAR_16->sc_dev,
         "RNG stalled, disabling device\n");
     FUNC_5(VAR_16);
     break;
    } else {
     FUNC_8(VAR_16->sc_dev,
         "Too many underruns, resetting\n");
     FUNC_5(VAR_16);
     FUNC_3(VAR_16);
     VAR_14 = 0;
    }
   }

   continue;
  }

  FUNC_0(VAR_0, "%s: %d words available in RNG FIFO",
      FUNC_7(VAR_16->sc_dev), VAR_12);


  VAR_13 = (VAR_12 > VAR_10) ? VAR_10 : VAR_12;
  FUNC_2(VAR_16, VAR_5, VAR_8,
      VAR_13);
  VAR_8 += VAR_13;
  VAR_11 += VAR_13;
 }

 VAR_10 = VAR_11 * sizeof(uint32_t);
 if (VAR_10 > 0)
  FUNC_9(VAR_16->sc_buf, VAR_10, VAR_1);

 FUNC_6(&VAR_16->sc_rngto, VAR_4, FUNC_10, VAR_16);
}
