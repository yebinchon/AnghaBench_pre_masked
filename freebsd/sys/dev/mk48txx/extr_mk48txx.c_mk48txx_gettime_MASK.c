
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int dummy; } ;
struct mk48txx_softc {int sc_flag; int sc_mtx; int (* sc_nvwr ) (int ,scalar_t__,int ) ;int (* sc_nvrd ) (int ,scalar_t__) ;scalar_t__ sc_year0; scalar_t__ sc_clkoffset; } ;
struct clocktime {int dow; int year; void* mon; void* day; void* hour; void* min; void* sec; scalar_t__ nsec; } ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
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
 int VAR_19 ;
 int FUNC_2 (struct clocktime*,struct timespec*) ;
 struct mk48txx_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,int ) ;

int
FUNC_10(device_t VAR_20, struct timespec *VAR_21)
{
 struct mk48txx_softc *VAR_22;
 bus_size_t VAR_23;
 struct clocktime VAR_24;
 int VAR_25;
 uint8_t VAR_26;

 VAR_22 = FUNC_3(VAR_20);
 VAR_23 = VAR_22->sc_clkoffset;

 FUNC_4(&VAR_22->sc_mtx);

 VAR_26 = (*VAR_22->sc_nvrd)(VAR_20, VAR_23 + VAR_3);
 VAR_26 |= VAR_0;
 (*VAR_22->sc_nvwr)(VAR_20, VAR_23 + VAR_3, VAR_26);



 VAR_24.nsec = 0;
 VAR_24.sec = FUNC_0(((*VAR_22->sc_nvrd)(VAR_20, VAR_23 + (VAR_8)) & (VAR_14)));
 VAR_24.min = FUNC_0(((*VAR_22->sc_nvrd)(VAR_20, VAR_23 + (VAR_6)) & (VAR_11)));
 VAR_24.hour = FUNC_0(((*VAR_22->sc_nvrd)(VAR_20, VAR_23 + (VAR_5)) & (VAR_2)));
 VAR_24.day = FUNC_0(((*VAR_22->sc_nvrd)(VAR_20, VAR_23 + (VAR_4)) & (VAR_1)));
 VAR_24.dow = -1;

 VAR_24.mon = FUNC_0(((*VAR_22->sc_nvrd)(VAR_20, VAR_23 + (VAR_7)) & (VAR_12)));
 VAR_25 = FUNC_0(((*VAR_22->sc_nvrd)(VAR_20, VAR_23 + (VAR_10)) & (VAR_18)));
 VAR_25 += VAR_22->sc_year0;
 if (VAR_22->sc_flag & VAR_13)
  VAR_25 += (((*VAR_22->sc_nvrd)(VAR_20, VAR_23 + (VAR_9)) & (VAR_15)) >>
      VAR_16) * 100;
 else if (VAR_25 < VAR_19)
  VAR_25 += 100;



 VAR_24.year = VAR_25;


 VAR_26 = (*VAR_22->sc_nvrd)(VAR_20, VAR_23 + VAR_3);
 VAR_26 &= ~VAR_0;
 (*VAR_22->sc_nvwr)(VAR_20, VAR_23 + VAR_3, VAR_26);
 FUNC_5(&VAR_22->sc_mtx);

 return (FUNC_2(&VAR_24, VAR_21));
}
