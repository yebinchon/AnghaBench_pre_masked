
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;

isc_uint32_t
FUNC_2(isc_uint32_t VAR_0, isc_uint32_t VAR_1) {
 isc_uint32_t VAR_2;

 FUNC_0(VAR_1 < VAR_0 || (VAR_1 == 0 && VAR_0 == 0));

 if (VAR_1 == 0)
  return (VAR_0);

 FUNC_1(&VAR_2);
 return (VAR_0 - VAR_2 % VAR_1);
}
