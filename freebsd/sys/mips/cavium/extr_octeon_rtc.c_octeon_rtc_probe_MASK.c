
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef scalar_t__ cvmx_rtc_options_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 cvmx_rtc_options_t VAR_3;

 if (FUNC_1(VAR_2) != 0)
  return (VAR_1);

 VAR_3 = FUNC_0();
 if (VAR_3 == 0)
  return (VAR_1);

 FUNC_2(VAR_2, "Cavium Octeon Realtime Clock");
 return (VAR_0);
}
