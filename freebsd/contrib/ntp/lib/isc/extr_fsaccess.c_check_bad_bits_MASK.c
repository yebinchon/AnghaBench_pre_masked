
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;
typedef int isc_fsaccess_t ;
typedef scalar_t__ isc_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static isc_result_t
FUNC_0(isc_fsaccess_t VAR_11, isc_boolean_t VAR_12) {
 isc_fsaccess_t VAR_13;




 if (VAR_12)
  VAR_13 = VAR_5 |
         VAR_6 |
         VAR_3;
 else
  VAR_13 = VAR_1 |
         VAR_0 |
         VAR_2 |
         VAR_4;




 VAR_13 |= VAR_13 << VAR_10;



 VAR_13 |= VAR_13 << VAR_10;

 if ((VAR_11 & VAR_13) != 0) {
  if (VAR_12)
   return (VAR_8);
  else
   return (VAR_7);
 }

 return (VAR_9);
}
