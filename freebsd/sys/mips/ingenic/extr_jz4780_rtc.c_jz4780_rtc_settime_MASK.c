
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; } ;
struct jz4780_rtc_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 struct jz4780_rtc_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct jz4780_rtc_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, struct timespec *VAR_2)
{
 struct jz4780_rtc_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 return FUNC_1(VAR_3, VAR_0, VAR_2->tv_sec);
}
