
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int cvmx_rtc_options_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 cvmx_rtc_options_t VAR_3;

 VAR_3 = FUNC_1();
 if ((VAR_3 & VAR_0) == 0)
  return (VAR_1);

 FUNC_0(VAR_2, 1000000);
 return (0);
}
