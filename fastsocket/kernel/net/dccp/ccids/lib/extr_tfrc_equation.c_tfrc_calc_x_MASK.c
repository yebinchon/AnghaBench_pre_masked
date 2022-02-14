
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (size_t,int) ;
 int FUNC_4 (int ,int) ;
 int** VAR_3 ;

u32 FUNC_5(u16 VAR_4, u32 VAR_5, u32 VAR_6)
{
 u16 VAR_7;
 u32 VAR_8;
 u64 VAR_9;


 FUNC_0(VAR_6 > 1000000);
 FUNC_0(VAR_6 == 0);
 if (VAR_5 == 0) {
  FUNC_1("WARNING: RTT is 0, returning maximum X_calc.");
  return ~0U;
 }

 if (VAR_6 <= VAR_1) {
  if (VAR_6 < VAR_2) {
   FUNC_2("Value of p (%d) below resolution. "
      "Substituting %d\n", VAR_6, VAR_2);
   VAR_7 = 0;
  } else
   VAR_7 = VAR_6/VAR_2 - 1;

  VAR_8 = VAR_3[VAR_7][1];

 } else {
  VAR_7 = VAR_6/(1000000/VAR_0) - 1;

  VAR_8 = VAR_3[VAR_7][0];
 }
 VAR_9 = FUNC_3(VAR_4, VAR_5);
 return FUNC_4(VAR_9, VAR_8);
}
