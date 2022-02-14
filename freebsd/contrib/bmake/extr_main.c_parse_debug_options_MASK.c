
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 char* FUNC_0 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (scalar_t__,char*,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char const*,int) ;
 char* VAR_25 ;
 int FUNC_7 (scalar_t__,int *,int ,int ) ;
 int FUNC_8 (int ,int,char*,int) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(const char *VAR_28)
{
 const char *VAR_29;
 const char *VAR_30;
 char *VAR_31;
 int VAR_32;

 for (VAR_29 = VAR_28; *VAR_29; ++VAR_29) {
  switch (*VAR_29) {
  case 'A':
   VAR_22 = ~0;
   break;
  case 'a':
   VAR_22 |= VAR_0;
   break;
  case 'C':
   VAR_22 |= VAR_2;
   break;
  case 'c':
   VAR_22 |= VAR_1;
   break;
  case 'd':
   VAR_22 |= VAR_3;
   break;
  case 'e':
   VAR_22 |= VAR_4;
   break;
  case 'f':
   VAR_22 |= VAR_5;
   break;
  case 'g':
   if (VAR_29[1] == '1') {
    VAR_22 |= VAR_6;
    ++VAR_29;
   }
   else if (VAR_29[1] == '2') {
    VAR_22 |= VAR_7;
    ++VAR_29;
   }
   else if (VAR_29[1] == '3') {
    VAR_22 |= VAR_8;
    ++VAR_29;
   }
   break;
  case 'j':
   VAR_22 |= VAR_9;
   break;
  case 'l':
   VAR_22 |= VAR_10;
   break;
  case 'M':
   VAR_22 |= VAR_12;
   break;
  case 'm':
   VAR_22 |= VAR_11;
   break;
  case 'n':
   VAR_22 |= VAR_14;
   break;
  case 'p':
   VAR_22 |= VAR_13;
   break;
  case 's':
   VAR_22 |= VAR_16;
   break;
  case 't':
   VAR_22 |= VAR_17;
   break;
  case 'V':
   VAR_23 = VAR_19;
   break;
  case 'v':
   VAR_22 |= VAR_18;
   break;
  case 'x':
   VAR_22 |= VAR_15;
   break;
  case 'F':
   if (VAR_24 != VAR_27 && VAR_24 != VAR_26)
    FUNC_1(VAR_24);
   if (*++VAR_29 == '+') {
    VAR_29++;
    VAR_30 = "a";
   } else
    VAR_30 = "w";
   if (FUNC_9(VAR_29, "stdout") == 0) {
    VAR_24 = VAR_27;
    goto debug_setbuf;
   }
   if (FUNC_9(VAR_29, "stderr") == 0) {
    VAR_24 = VAR_26;
    goto debug_setbuf;
   }
   VAR_32 = FUNC_10(VAR_29);
   VAR_31 = FUNC_0(VAR_32 + 20);
   FUNC_6(VAR_31, VAR_29, VAR_32 + 1);

   if (FUNC_9(VAR_31 + VAR_32 - 3, ".%d") == 0)
    FUNC_8(VAR_31 + VAR_32 - 2, 20, "%d", FUNC_5());
   VAR_24 = FUNC_2(VAR_31, VAR_30);
   if (!VAR_24) {
    FUNC_3(VAR_26, "Cannot open debug file %s\n",
        VAR_31);
    FUNC_11();
   }
   FUNC_4(VAR_31);
   goto debug_setbuf;
  default:
   (void)FUNC_3(VAR_26,
       "%s: illegal argument to d option -- %c\n",
       VAR_25, *VAR_29);
   FUNC_11();
  }
 }
debug_setbuf:




 FUNC_7(VAR_24, ((void*)0), VAR_21, 0);
 if (VAR_24 != VAR_27) {
  FUNC_7(VAR_27, ((void*)0), VAR_20, 0);
 }
}
