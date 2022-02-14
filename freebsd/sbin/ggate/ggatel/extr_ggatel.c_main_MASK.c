
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_8 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int,char**,char*) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int *,int) ;
 void* FUNC_13 (char*,int *,int) ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_16, char *VAR_17[])
{

 if (VAR_16 < 2)
  FUNC_14();
 if (FUNC_11(VAR_17[1], "create") == 0)
  VAR_4 = 132;
 else if (FUNC_11(VAR_17[1], "rescue") == 0)
  VAR_4 = 129;
 else if (FUNC_11(VAR_17[1], "destroy") == 0)
  VAR_4 = 131;
 else if (FUNC_11(VAR_17[1], "list") == 0)
  VAR_4 = 130;
 else
  FUNC_14();
 VAR_16 -= 1;
 VAR_17 += 1;
 for (;;) {
  int VAR_18;

  VAR_18 = FUNC_10(VAR_16, VAR_17, "fo:s:t:u:v");
  if (VAR_18 == -1)
   break;
  switch (VAR_18) {
  case 'f':
   if (VAR_4 != 131)
    FUNC_14();
   VAR_7 = 1;
   break;
  case 'o':
   if (VAR_4 != 132 && VAR_4 != 129)
    FUNC_14();
   if (FUNC_11("ro", VAR_9) == 0)
    VAR_6 = VAR_2;
   else if (FUNC_11("wo", VAR_9) == 0)
    VAR_6 = VAR_3;
   else if (FUNC_11("rw", VAR_9) == 0)
    VAR_6 = 0;
   else {
    FUNC_0(VAR_0,
        "Invalid argument for '-o' option.");
   }
   break;
  case 's':
   if (VAR_4 != 132)
    FUNC_14();
   VAR_5 = 0;
   VAR_12 = FUNC_13(VAR_9, ((void*)0), 10);
   if (VAR_12 == 0 && VAR_5 != 0)
    FUNC_0(VAR_0, "Invalid sectorsize.");
   break;
  case 't':
   if (VAR_4 != 132)
    FUNC_14();
   VAR_5 = 0;
   VAR_14 = FUNC_13(VAR_9, ((void*)0), 10);
   if (VAR_14 == 0 && VAR_5 != 0)
    FUNC_0(VAR_0, "Invalid timeout.");
   break;
  case 'u':
   VAR_5 = 0;
   VAR_15 = FUNC_12(VAR_9, ((void*)0), 10);
   if (VAR_15 == 0 && VAR_5 != 0)
    FUNC_0(VAR_0, "Invalid unit number.");
   break;
  case 'v':
   if (VAR_4 == 131)
    FUNC_14();
   VAR_8++;
   break;
  default:
   FUNC_14();
  }
 }
 VAR_16 -= VAR_10;
 VAR_17 += VAR_10;

 switch (VAR_4) {
 case 132:
  if (VAR_16 != 1)
   FUNC_14();
  FUNC_6();
  FUNC_7();
  VAR_11 = VAR_17[0];
  FUNC_8();
  break;
 case 129:
  if (VAR_16 != 1)
   FUNC_14();
  if (VAR_15 == -1) {
   FUNC_2(VAR_13, "Required unit number.\n");
   FUNC_14();
  }
  FUNC_7();
  VAR_11 = VAR_17[0];
  FUNC_9();
  break;
 case 131:
  if (VAR_15 == -1) {
   FUNC_2(VAR_13, "Required unit number.\n");
   FUNC_14();
  }
  VAR_8 = 1;
  FUNC_7();
  FUNC_4(VAR_15, VAR_7);
  break;
 case 130:
  FUNC_5(VAR_15, VAR_8);
  break;
 case 128:
 default:
  FUNC_14();
 }
 FUNC_3();
 FUNC_1(VAR_1);
}
