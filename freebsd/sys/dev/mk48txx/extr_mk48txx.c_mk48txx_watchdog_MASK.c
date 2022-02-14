
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct mk48txx_softc {int sc_flag; int sc_mtx; scalar_t__ sc_clkoffset; int (* sc_nvwr ) (void*,scalar_t__,int) ;} ;
typedef void* device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 struct mk48txx_softc* FUNC_0 (void*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_16, u_int VAR_17, int *VAR_18)
{
 device_t VAR_19;
 struct mk48txx_softc *VAR_20;
 uint8_t VAR_21, VAR_22;

 VAR_19 = VAR_16;
 VAR_20 = FUNC_0(VAR_19);

 VAR_21 = VAR_17 & VAR_9;
 if (VAR_21 >= 26 && VAR_21 <= 37) {
  VAR_22 = 0;
  if (VAR_21 <= VAR_12) {
   VAR_22 |= VAR_5;
   VAR_21 -= 26;
  } else if (VAR_21 <= VAR_15) {
   VAR_22 |= VAR_6;
   VAR_21 -= VAR_11;
  } else if (VAR_21 <= VAR_13) {
   VAR_22 |= VAR_4;
   VAR_21 -= VAR_10;
  } else {
   VAR_22 |= VAR_7;
   VAR_21 -= VAR_14;
  }
  VAR_22 |= (FUNC_1(1 << VAR_21,
      VAR_1 >> VAR_2)) <<
      VAR_2;
  if (VAR_20->sc_flag & VAR_3)
   VAR_22 |= VAR_8;
  *VAR_18 = 0;
 } else {
  VAR_22 = 0;
 }
 FUNC_2(&VAR_20->sc_mtx);
 (*VAR_20->sc_nvwr)(VAR_19, VAR_20->sc_clkoffset + VAR_0, VAR_22);
 FUNC_3(&VAR_20->sc_mtx);
}
