
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;

const char *FUNC_0(u32 VAR_2)
{
 static char *VAR_3[16] = {
  "Line Out", "Speaker", "HP Out", "CD",
  "SPDIF Out", "Digital Out", "Modem Line", "Modem Hand",
  "Line In", "Aux", "Mic", "Telephony",
  "SPDIF In", "Digital In", "Reserved", "Other"
 };

 return VAR_3[(VAR_2 & VAR_0)
    >> VAR_1];
}
