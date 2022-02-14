
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,...) ;
 size_t FUNC_3 (char*,char*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_5, char *VAR_6)
{
 char *VAR_7;
 int VAR_8[16];
 u_int VAR_9, VAR_10, VAR_11;

 for (VAR_7 = VAR_6; *VAR_7; VAR_7++) {
  if (!FUNC_1(*VAR_7))
   FUNC_0(VAR_0,
       "patterns must be specified as hex digits");

 }
 VAR_9 = FUNC_3(VAR_6,
     "%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x",
     &VAR_8[0], &VAR_8[1], &VAR_8[2], &VAR_8[3], &VAR_8[4], &VAR_8[5], &VAR_8[6],
     &VAR_8[7], &VAR_8[8], &VAR_8[9], &VAR_8[10], &VAR_8[11], &VAR_8[12],
     &VAR_8[13], &VAR_8[14], &VAR_8[15]);

 if (VAR_9 > 0)
  for (VAR_11 = 0; VAR_11 <= VAR_3 - (VAR_2 + VAR_9); VAR_11 += VAR_9)
   for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10)
    VAR_5[VAR_10 + VAR_11] = VAR_8[VAR_10];
 if (!(VAR_4 & VAR_1)) {
  (void)FUNC_2("PATTERN: 0x");
  for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10)
   (void)FUNC_2("%02x", VAR_5[VAR_10] & 0xFF);
  (void)FUNC_2("\n");
 }
}
