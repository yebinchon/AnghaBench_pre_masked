
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_4, char **VAR_5)
{
 const char *VAR_6;
 char VAR_7[255];
 int VAR_8, VAR_9;

 VAR_6 = VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  switch (VAR_5[VAR_8][0]) {
  case '-':
   switch (VAR_5[VAR_8][1]) {
   default:
    FUNC_7();
   }
   break;
  default:
   VAR_6 = VAR_5[VAR_8];
   break;
  }
 }

 FUNC_6(" \n>> FreeBSD/powerpc Open Firmware boot block\n"
 "   Boot path:   %s\n"
 "   Boot loader: %s\n", VAR_2, VAR_6);

 VAR_9 = 0;
 while (VAR_2[VAR_9] != '\0') VAR_9++;

 FUNC_2(VAR_7,VAR_2,VAR_9+1);

 if (VAR_7[VAR_9-1] != ':') {

  if (FUNC_0(VAR_7,1) == 0)
   goto out;


  if (VAR_1 > 0)
   FUNC_3(VAR_1);
  VAR_7[VAR_9] = ':';
  VAR_9 += 1;
 }


 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  if (VAR_8 < 10) {
   VAR_7[VAR_9] = VAR_8 + '0';
   VAR_7[VAR_9+1] = '\0';
  } else {
   VAR_7[VAR_9] = '1';
   VAR_7[VAR_9+1] = VAR_8 - 10 + '0';
   VAR_7[VAR_9+2] = '\0';
  }

  if (FUNC_0(VAR_7,1) >= 0)
   break;

  if (VAR_1 > 0)
   FUNC_3(VAR_1);
 }

 if (VAR_8 >= 16)
  FUNC_5("domount");

out:
 FUNC_6("   Boot volume:   %s\n",VAR_7);
 FUNC_4(VAR_3, "bootargs", VAR_7, VAR_9+2);
 FUNC_1(VAR_6);
 return (1);
}
