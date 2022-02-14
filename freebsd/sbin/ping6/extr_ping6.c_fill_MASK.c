
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char) ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8[16];
 char *VAR_9;

 for (VAR_9 = VAR_4; *VAR_9; VAR_9++)
  if (!FUNC_1(*VAR_9))
   FUNC_0(1, "patterns must be specified as hex digits");
 VAR_5 = FUNC_3(VAR_4,
     "%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x%2x",
     &VAR_8[0], &VAR_8[1], &VAR_8[2], &VAR_8[3], &VAR_8[4], &VAR_8[5], &VAR_8[6],
     &VAR_8[7], &VAR_8[8], &VAR_8[9], &VAR_8[10], &VAR_8[11], &VAR_8[12],
     &VAR_8[13], &VAR_8[14], &VAR_8[15]);


 if (VAR_5 > 0)
  for (VAR_7 = 0;
      (size_t)VAR_7 <= VAR_1 - 8 + sizeof(struct tv32) + VAR_5;
      VAR_7 += VAR_5)
   for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
    VAR_3[VAR_6 + VAR_7] = VAR_8[VAR_6];
 if (!(VAR_2 & VAR_0)) {
  (void)FUNC_2("PATTERN: 0x");
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
   (void)FUNC_2("%02x", VAR_3[VAR_6] & 0xFF);
  (void)FUNC_2("\n");
 }
}
