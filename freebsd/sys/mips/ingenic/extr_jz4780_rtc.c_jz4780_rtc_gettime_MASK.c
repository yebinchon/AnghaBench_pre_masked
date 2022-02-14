
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct jz4780_rtc_softc {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (struct jz4780_rtc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct jz4780_rtc_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, struct timespec *VAR_4)
{
 struct jz4780_rtc_softc *VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(VAR_3);

 VAR_8 = VAR_1;
 VAR_7 = FUNC_0(VAR_5, VAR_2);
 do {
  VAR_6 = VAR_7;
  VAR_7 = FUNC_0(VAR_5, VAR_2);
 } while (VAR_6 != VAR_7 && VAR_8-- >= 0);

 if (VAR_8 < 0)
  return (VAR_0);


 VAR_4->tv_sec = VAR_6;
 VAR_4->tv_nsec = 0;
 return 0;
}
