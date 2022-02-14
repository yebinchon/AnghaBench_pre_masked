
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_7,
               uint16_t VAR_8, int VAR_9, int VAR_10)
{
 FUNC_4((VAR_7, "%u MHz", VAR_8));
 if (VAR_10 & (1 << VAR_6)) {




  FUNC_4((VAR_7, " 11n"));
 } else {
  if (FUNC_3(VAR_9))
   FUNC_4((VAR_7, " FHSS"));
  if (FUNC_0(VAR_9)) {
   if (VAR_9 & VAR_0)
    FUNC_4((VAR_7, " 11a/10Mhz"));
   else if (VAR_9 & VAR_4)
    FUNC_4((VAR_7, " 11a/5Mhz"));
   else
    FUNC_4((VAR_7, " 11a"));
  }
  if (FUNC_1(VAR_9)) {
   if (VAR_9 & VAR_0)
    FUNC_4((VAR_7, " 11g/10Mhz"));
   else if (VAR_9 & VAR_4)
    FUNC_4((VAR_7, " 11g/5Mhz"));
   else
    FUNC_4((VAR_7, " 11g"));
  } else if (FUNC_2(VAR_9))
   FUNC_4((VAR_7, " 11b"));
  if (VAR_9 & VAR_5)
   FUNC_4((VAR_7, " Turbo"));
 }



 if (VAR_9 & VAR_1)
  FUNC_4((VAR_7, " ht/20"));
 else if (VAR_9 & VAR_2)
  FUNC_4((VAR_7, " ht/40-"));
 else if (VAR_9 & VAR_3)
  FUNC_4((VAR_7, " ht/40+"));
 FUNC_4((VAR_7, " "));
}
