
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct aml8726_rtc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_rtc_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct aml8726_rtc_softc*) ;
 int FUNC_2 (struct aml8726_rtc_softc*,int ,int *) ;
 struct aml8726_rtc_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, struct timespec *VAR_2)
{
 struct aml8726_rtc_softc *VAR_3 = FUNC_3(VAR_1);
 uint32_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_3);

 VAR_5 = FUNC_2(VAR_3, VAR_0, &VAR_4);

 FUNC_1(VAR_3);

 VAR_2->tv_sec = VAR_4;
 VAR_2->tv_nsec = 0;

 return (VAR_5);
}
