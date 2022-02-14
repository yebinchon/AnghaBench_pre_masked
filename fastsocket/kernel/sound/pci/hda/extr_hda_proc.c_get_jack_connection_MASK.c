
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static const char *FUNC_0(u32 VAR_2)
{
 static char *VAR_3[16] = {
  "Unknown", "1/8", "1/4", "ATAPI",
  "RCA", "Optical","Digital", "Analog",
  "DIN", "XLR", "RJ11", "Comb",
  ((void*)0), ((void*)0), ((void*)0), "Other"
 };
 VAR_2 = (VAR_2 & VAR_0) >> VAR_1;
 if (VAR_3[VAR_2])
  return VAR_3[VAR_2];
 else
  return "UNKNOWN";
}
