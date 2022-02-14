
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct mk48txx_softc {int sc_year0; int sc_flag; int sc_mtx; int (* sc_nvwr ) (int ,scalar_t__,int ) ;int (* sc_nvrd ) (int ,scalar_t__) ;scalar_t__ sc_clkoffset; } ;
struct clocktime {int sec; int min; int hour; int dow; int day; int mon; int year; } ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct timespec*,struct clocktime*) ;
 struct mk48txx_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,int ) ;

int
FUNC_10(device_t VAR_19, struct timespec *VAR_20)
{
 struct mk48txx_softc *VAR_21;
 bus_size_t VAR_22;
 struct clocktime VAR_23;
 uint8_t VAR_24;
 int VAR_25, VAR_26;

 VAR_21 = FUNC_3(VAR_19);
 VAR_22 = VAR_21->sc_clkoffset;


 if (VAR_20->tv_nsec >= 500000000)
  VAR_20->tv_sec++;
 VAR_20->tv_nsec = 0;
 FUNC_2(VAR_20, &VAR_23);

 FUNC_4(&VAR_21->sc_mtx);

 VAR_24 = (*VAR_21->sc_nvrd)(VAR_19, VAR_22 + VAR_3);
 VAR_24 |= VAR_0;
 (*VAR_21->sc_nvwr)(VAR_19, VAR_22 + VAR_3, VAR_24);






 ((*VAR_21->sc_nvwr)(VAR_19, VAR_22 + (VAR_8), ((*VAR_21->sc_nvrd)(VAR_19, VAR_22 + (VAR_8)) & ~(VAR_14)) | ((FUNC_0(VAR_23.sec)) & (VAR_14))));
 ((*VAR_21->sc_nvwr)(VAR_19, VAR_22 + (VAR_6), ((*VAR_21->sc_nvrd)(VAR_19, VAR_22 + (VAR_6)) & ~(VAR_11)) | ((FUNC_0(VAR_23.min)) & (VAR_11))));
 ((*VAR_21->sc_nvwr)(VAR_19, VAR_22 + (VAR_5), ((*VAR_21->sc_nvrd)(VAR_19, VAR_22 + (VAR_5)) & ~(VAR_2)) | ((FUNC_0(VAR_23.hour)) & (VAR_2))));

 ((*VAR_21->sc_nvwr)(VAR_19, VAR_22 + (VAR_9), ((*VAR_21->sc_nvrd)(VAR_19, VAR_22 + (VAR_9)) & ~(VAR_17)) | ((VAR_23.dow + 1) & (VAR_17))));
 ((*VAR_21->sc_nvwr)(VAR_19, VAR_22 + (VAR_4), ((*VAR_21->sc_nvrd)(VAR_19, VAR_22 + (VAR_4)) & ~(VAR_1)) | ((FUNC_0(VAR_23.day)) & (VAR_1))));
 ((*VAR_21->sc_nvwr)(VAR_19, VAR_22 + (VAR_7), ((*VAR_21->sc_nvrd)(VAR_19, VAR_22 + (VAR_7)) & ~(VAR_12)) | ((FUNC_0(VAR_23.mon)) & (VAR_12))));

 VAR_26 = VAR_23.year - VAR_21->sc_year0;
 if (VAR_21->sc_flag & VAR_13) {
  VAR_25 = VAR_26 / 100;
  ((*VAR_21->sc_nvwr)(VAR_19, VAR_22 + (VAR_9), ((*VAR_21->sc_nvrd)(VAR_19, VAR_22 + (VAR_9)) & ~(VAR_15)) | ((VAR_25 << VAR_16) & (VAR_15))));

  VAR_26 -= VAR_25 * 100;
 } else if (VAR_26 > 99)
  VAR_26 -= 100;
 ((*VAR_21->sc_nvwr)(VAR_19, VAR_22 + (VAR_10), ((*VAR_21->sc_nvrd)(VAR_19, VAR_22 + (VAR_10)) & ~(VAR_18)) | ((FUNC_0(VAR_26)) & (VAR_18))));




 VAR_24 = (*VAR_21->sc_nvrd)(VAR_19, VAR_22 + VAR_3);
 VAR_24 &= ~VAR_0;
 (*VAR_21->sc_nvwr)(VAR_19, VAR_22 + VAR_3, VAR_24);
 FUNC_5(&VAR_21->sc_mtx);
 return (0);
}
