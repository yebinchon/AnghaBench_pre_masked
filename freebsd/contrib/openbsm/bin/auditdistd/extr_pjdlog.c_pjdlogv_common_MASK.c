
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int log ;
typedef int FILE ;
 scalar_t__ VAR_0 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_5 (int) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_6 (char*,int,char*,char*) ;
 int * VAR_6 ;
 int * VAR_7 ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int,char*,char*) ;
 int FUNC_9 (int *,char const*,int ) ;
 int FUNC_10 (char*,int,char const*,int ) ;

void
FUNC_11(int VAR_8, int VAR_9, int VAR_10, const char *VAR_11,
    va_list VAR_12)
{
 int VAR_13;

 FUNC_1(VAR_3 == VAR_0);
 FUNC_1(VAR_8 == 134 || VAR_8 == 137 ||
     VAR_8 == 136 || VAR_8 == 133 ||
     VAR_8 == 130 || VAR_8 == 131 ||
     VAR_8 == 132 || VAR_8 == 135);
 FUNC_1(VAR_8 != 135 || VAR_9 > 0);
 FUNC_1(VAR_10 >= -1);


 if (VAR_8 == 135 && VAR_9 > VAR_2)
  return;

 VAR_13 = VAR_1;

 switch (VAR_4) {
 case 129:
     {
  FILE *VAR_14;




  switch (VAR_8) {
  case 134:
  case 137:
  case 136:
  case 133:
  case 130:
   VAR_14 = VAR_6;
   break;
  case 131:
  case 132:
  case 135:
   VAR_14 = VAR_7;
   break;
  default:
   FUNC_1(!"Invalid loglevel.");
   FUNC_0();
  }

  FUNC_3(VAR_14, "(%d) ", FUNC_4());
  FUNC_3(VAR_14, "[%s]", FUNC_5(VAR_8));

  if (VAR_8 == 135)
   FUNC_3(VAR_14, "[%d]", VAR_9);
  FUNC_3(VAR_14, " %s", VAR_5);
  FUNC_9(VAR_14, VAR_11, VAR_12);
  if (VAR_10 != -1)
   FUNC_3(VAR_14, ": %s.", FUNC_7(VAR_10));
  FUNC_3(VAR_14, "\n");
  FUNC_2(VAR_14);
  break;
     }
 case 128:
     {
  char VAR_15[1024];
  int VAR_16;

  VAR_16 = FUNC_6(VAR_15, sizeof(VAR_15), "%s", VAR_5);
  if ((size_t)VAR_16 < sizeof(VAR_15))
   VAR_16 += FUNC_10(VAR_15 + VAR_16, sizeof(VAR_15) - VAR_16, VAR_11, VAR_12);
  if (VAR_10 != -1 && (size_t)VAR_16 < sizeof(VAR_15)) {
   (void)FUNC_6(VAR_15 + VAR_16, sizeof(VAR_15) - VAR_16, ": %s.",
       FUNC_7(VAR_10));
  }
  FUNC_8(VAR_8, "%s", VAR_15);
  break;
     }
 default:
  FUNC_1(!"Invalid mode.");
 }

 VAR_1 = VAR_13;
}
