
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(u_int32_t VAR_5)
{
 u_int32_t VAR_6, VAR_7;

 FUNC_2("sieve_large %u", VAR_5);
 VAR_4++;

 VAR_6 = FUNC_1(VAR_2, VAR_5);
 if (VAR_6 == 0)
  VAR_7 = 0;
 else
  VAR_7 = VAR_5 - VAR_6;

 if (VAR_7 < VAR_3 * 2) {





  if (VAR_7 & 0x1)
   VAR_7 += VAR_5;


  for (VAR_7 /= 2; VAR_7 < VAR_3; VAR_7 += VAR_5)
   FUNC_0(VAR_0, VAR_7);
 }


 VAR_6 = (2 * VAR_6 + 1) % VAR_5;
 if (VAR_6 == 0)
  VAR_7 = 0;
 else
  VAR_7 = VAR_5 - VAR_6;

 if (VAR_7 < VAR_3 * 4) {





  while (VAR_7 & 0x3) {
   if (VAR_1 - VAR_7 < VAR_5)
    return;
   VAR_7 += VAR_5;
  }


  for (VAR_7 /= 4; VAR_7 < VAR_3; VAR_7 += VAR_5)
   FUNC_0(VAR_0, VAR_7);
 }
}
