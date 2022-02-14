
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char) ;
 int VAR_24 ;
 char* VAR_25 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned char) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ,unsigned char*,int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,char*,int ) ;
 scalar_t__ FUNC_17 (int ,int ,int *) ;
 int VAR_26 ;
 char FUNC_18 (char) ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int
FUNC_19(void)
{
 int VAR_29;
 char *VAR_30;
 unsigned char VAR_31;
 int VAR_32 = 0;
 int VAR_33 = 0;




 if (FUNC_13(VAR_23)) {
  FUNC_14(VAR_15, VAR_16);
  return (0);
 }
 FUNC_14(VAR_15, VAR_22);
 FUNC_12(1);
 FUNC_7();
 FUNC_6();
 if (VAR_6 > 0) {
  FUNC_15(VAR_6);
  VAR_6 = 0;
 }
 if (FUNC_17(VAR_17, VAR_18, &VAR_26) < 0) {
  FUNC_16(VAR_5, "%s: %m", VAR_27);
  FUNC_2(1);
 }
 VAR_20 = VAR_21 = VAR_24 = VAR_28 = 0;
 VAR_30 = VAR_25;
 for (;;) {
  FUNC_6();
  if (FUNC_11(VAR_17, &VAR_31, 1) <= 0)
   FUNC_2(0);
  if ((VAR_29 = VAR_31&0177) == 0)
   return (0);
  if (VAR_7 && (VAR_31 == VAR_11)) {
   VAR_32 = 1;
  } else if (VAR_32 == 1 && VAR_31 == VAR_14) {
   VAR_32 = 2;
  } else if (VAR_32 == 2 && VAR_31 == VAR_10) {
   VAR_32 = 3;
  } else if ((VAR_32 == 2 && VAR_31 == VAR_8)
   || (VAR_32 == 3 && VAR_31 == VAR_9)) {
   VAR_32 = 4;
  } else if (VAR_32 == 4 && VAR_31 == VAR_12) {
   VAR_32 = 5;
  } else if (VAR_32 == 5 && VAR_31 == VAR_13) {
   VAR_33 = 1;
   break;
  } else {
   VAR_32 = 0;
  }

  if (VAR_29 == VAR_0 || VAR_29 == FUNC_0('d'))
   FUNC_2(0);
  if (VAR_29 == '\r' || VAR_29 == '\n' || VAR_30 >= &VAR_25[sizeof VAR_25-1]) {
   FUNC_9("\r\n");
   break;
  }
  if (FUNC_4(VAR_29))
   VAR_24 = 1;
  else if (FUNC_5(VAR_29))
   VAR_28 = 1;
  else if (VAR_29 == VAR_1 || VAR_29 == '\b' || VAR_29 == 0177) {
   if (VAR_30 > VAR_25) {
    VAR_30--;
    if (FUNC_1(&VAR_26) >= 1200)
     FUNC_10("\b \b");
    else
     FUNC_8(VAR_31);
   }
   continue;
  } else if (VAR_29 == VAR_3 || VAR_29 == FUNC_0('u')) {
   FUNC_8('\r');
   if (FUNC_1(&VAR_26) < 1200)
    FUNC_8('\n');

   else if (VAR_30 > VAR_25)
    FUNC_10("                                     \r");
   FUNC_7();
   VAR_21 = VAR_24 = VAR_28 = 0;
   VAR_30 = VAR_25;
   continue;
  } else if (FUNC_3(VAR_29))
   VAR_21 = 1;
  if (VAR_2 && (VAR_29 <= ' ' || VAR_29 > 0176))
   continue;
  *VAR_30++ = VAR_29;
  FUNC_8(VAR_31);
 }
 FUNC_14(VAR_15, VAR_16);
 *VAR_30 = 0;
 if (VAR_29 == '\r')
  VAR_20 = 1;
 if ((VAR_28 && !VAR_24 && !VAR_4) || VAR_19)
  for (VAR_30 = VAR_25; *VAR_30; VAR_30++)
   if (FUNC_5(*VAR_30))
    *VAR_30 = FUNC_18(*VAR_30);
 return (1 + VAR_33);
}
