
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int dummy; } ;
struct ds1307_softc {int sc_use_ampm; int sc_dev; scalar_t__ sc_mcp7941x; } ;
struct bcd_clocktime {int ispm; int sec; int min; int hour; int day; int mon; int year; scalar_t__ nsec; } ;
typedef int device_t ;
typedef int data ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct bcd_clocktime*,struct timespec*,int) ;
 int FUNC_1 (int ,int ,struct bcd_clocktime*) ;
 struct ds1307_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,size_t,int*,int,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_19, struct timespec *VAR_20)
{
 int VAR_21;
 struct bcd_clocktime VAR_22;
 struct ds1307_softc *VAR_23;
 uint8_t VAR_24[7], VAR_25, VAR_26;

 VAR_23 = FUNC_2(VAR_19);
 VAR_21 = FUNC_4(VAR_23->sc_dev, VAR_12, VAR_24, sizeof(VAR_24),
     VAR_18);
 if (VAR_21 != 0) {
  FUNC_3(VAR_19, "cannot read from RTC.\n");
  return (VAR_21);
 }


 if (VAR_23->sc_mcp7941x)
  VAR_26 = 0x80;
 else
  VAR_26 = 0x00;

 if (((VAR_24[VAR_12] & VAR_13) ^ VAR_26) != 0)
  return (VAR_17);


 if (VAR_24[VAR_3] & VAR_7) {
  VAR_23->sc_use_ampm = 1;
  VAR_25 = VAR_5;
 } else
  VAR_25 = VAR_6;

 VAR_22.nsec = 0;
 VAR_22.ispm = (VAR_24[VAR_3] & VAR_4) != 0;
 VAR_22.sec = VAR_24[VAR_12] & VAR_14;
 VAR_22.min = VAR_24[VAR_8] & VAR_9;
 VAR_22.hour = VAR_24[VAR_3] & VAR_25;
 VAR_22.day = VAR_24[VAR_1] & VAR_2;
 VAR_22.mon = VAR_24[VAR_10] & VAR_11;
 VAR_22.year = VAR_24[VAR_15] & VAR_16;

 FUNC_1(VAR_23->sc_dev, VAR_0, &VAR_22);
 return (FUNC_0(&VAR_22, VAR_20, VAR_23->sc_use_ampm));
}
