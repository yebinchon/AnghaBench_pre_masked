
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char**,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(int VAR_2, char** VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = 0;
 VAR_9 = 0;
 VAR_8 = 0;
 VAR_5 = 0;

 while ((VAR_4 = FUNC_0(VAR_2, VAR_3, "nqv")) != -1) {
  switch (VAR_4) {
  case 'q':
   VAR_8 = 1;
   VAR_9 = 0;
   break;
  case 'v':
   VAR_9 = 1;
   VAR_8 = 0;
   break;
  case 'n':
   VAR_5 = 1;
   break;
  default:
   FUNC_4();
  }
 }
 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;

 if (VAR_2 == 0)
  FUNC_4();

 while (VAR_2-- != 0) {
  if (FUNC_2(VAR_3[0], VAR_8) == 0) {
   VAR_7 = FUNC_1(VAR_3[0]);
   if (VAR_7 < 0) {
    if (VAR_5 != 0 && VAR_0 == 129) {
     if (VAR_9)
      FUNC_3("%s is already "
          "loaded\n", VAR_3[0]);
    } else {
     switch (VAR_0) {
     case 129:
      FUNC_6("can't load %s: module "
          "already loaded or "
          "in kernel", VAR_3[0]);
      break;
     case 128:
      FUNC_6("an error occurred while "
          "loading module %s. "
          "Please check dmesg(8) for "
          "more details.", VAR_3[0]);
      break;
     default:
      FUNC_5("can't load %s", VAR_3[0]);
      break;
     }
     VAR_6++;
    }
   } else {
    if (VAR_9)
     FUNC_3("Loaded %s, id=%d\n", VAR_3[0],
         VAR_7);
   }
  } else
   VAR_6++;
  VAR_3++;
 }

 return (VAR_6 ? 1 : 0);
}
