
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int currentLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int * FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,char*,char*,int,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,char*,char*,char*,char*,char*,char*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;

int
FUNC_10 (void)
{
  char VAR_10[256];

  FUNC_0 ();



  while (FUNC_3 (VAR_10, sizeof (VAR_10), VAR_9) != ((void*)0))
    {
      char VAR_11[16];
      char VAR_12[16];
      char VAR_13[16];
      char VAR_14[64];
      char VAR_15[16];
      char VAR_16[16];
      int VAR_17;
      int VAR_18;
      char *VAR_19;

      if (VAR_10[0] == '#')
        continue;
      FUNC_6 (VAR_11, 0, 8);
      if (FUNC_7 (VAR_10, "%15s %15s %15s \"%[^\"]\" %15s %15s",
    VAR_11, VAR_12, VAR_13, VAR_14,
    VAR_15, VAR_16) == 6)
 {
   if (FUNC_8 (VAR_15, "g5") == 0)
     VAR_17 = VAR_1;
   else if (FUNC_8 (VAR_15, "g6") == 0)
     VAR_17 = VAR_2;
   else if (FUNC_8 (VAR_15, "z900") == 0)
     VAR_17 = VAR_3;
   else if (FUNC_8 (VAR_15, "z990") == 0)
     VAR_17 = VAR_4;
   else if (FUNC_8 (VAR_15, "z9-109") == 0)
     VAR_17 = VAR_5;
   else if (FUNC_8 (VAR_15, "z9-ec") == 0)
     VAR_17 = VAR_6;
   else {
     FUNC_4 (VAR_8, "Couldn't parse cpu string %s\n", VAR_15);
     FUNC_2 (1);
   }

   VAR_19 = VAR_16;
   VAR_18 = 0;
   do {
     if (FUNC_9 (VAR_19, "esa", 3) == 0
  && (VAR_19[3] == 0 || VAR_19[3] == ',')) {
       VAR_18 |= 1 << VAR_0;
       VAR_19 += 3;
     } else if (FUNC_9 (VAR_19, "zarch", 5) == 0
         && (VAR_19[5] == 0 || VAR_19[5] == ',')) {
       VAR_18 |= 1 << VAR_7;
       VAR_19 += 5;
     } else {
       FUNC_4 (VAR_8, "Couldn't parse modes string %s\n",
         VAR_16);
       FUNC_2 (1);
     }
     if (*VAR_19 == ',')
       VAR_19++;
   } while (*VAR_19 != 0);
   FUNC_5 (VAR_11, VAR_12, VAR_13, VAR_17, VAR_18);
 }
      else
        FUNC_4 (VAR_8, "Couldn't scan line %s\n", VAR_10);
    }

  FUNC_1 ();
  return 0;
}
