
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timespec {int tv_sec; } ;
typedef int device_t ;
typedef int cvmx_rtc_options_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, struct timespec *VAR_4)
{
 cvmx_rtc_options_t VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_0();
 if ((VAR_5 & VAR_0) == 0)
  return (VAR_2);

 VAR_6 = FUNC_1(VAR_4->tv_sec);
 if (VAR_6 != 0)
  return (VAR_1);

 return (0);
}
