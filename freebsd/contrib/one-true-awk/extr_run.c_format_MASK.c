
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uschar ;
struct TYPE_4__ {struct TYPE_4__* nnext; } ;
typedef TYPE_1__ Node ;
typedef int Cell ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char**,int*,...) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_1 ;
 int FUNC_11 (char*,char*,...) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;

int FUNC_15(char **VAR_2, int *VAR_3, const char *VAR_4, Node *VAR_5)
{
 char *VAR_6;
 char *VAR_7, *VAR_8;
 const char *VAR_9;
 Cell *VAR_10;
 int VAR_11 = 0, VAR_12;
 int VAR_13;
 int VAR_14 = VAR_1;
 char *VAR_15 = *VAR_2;
 int VAR_16 = *VAR_3;

 static int VAR_17 = 1;
 static int VAR_18 = 0;

 if (VAR_17) {
  char VAR_19[100];

  FUNC_11(VAR_19, "%a", 42.0);
  VAR_18 = (FUNC_12(VAR_19, "0x1.5p+5") == 0);
  VAR_17 = 0;
 }

 VAR_9 = VAR_4;
 VAR_7 = VAR_15;
 if ((VAR_6 = (char *) FUNC_10(VAR_14)) == ((void*)0))
  FUNC_0("out of memory in format()");
 while (*VAR_4) {
  FUNC_2(&VAR_15, &VAR_16, VAR_0+1+VAR_7-VAR_15, VAR_1, &VAR_7, "format1");
  if (*VAR_4 != '%') {
   *VAR_7++ = *VAR_4++;
   continue;
  }
  if (*(VAR_4+1) == '%') {
   *VAR_7++ = '%';
   VAR_4 += 2;
   continue;
  }

  VAR_13 = FUNC_3(VAR_4+1);
  if (VAR_13 < 0)
   VAR_13 = -VAR_13;
  FUNC_2(&VAR_15, &VAR_16, VAR_13+1+VAR_7-VAR_15, VAR_1, &VAR_7, "format2");
  for (VAR_8 = VAR_6; (*VAR_8++ = *VAR_4) != '\0'; VAR_4++) {
   if (!FUNC_2(&VAR_6, &VAR_14, VAR_0+1+VAR_8-VAR_6, VAR_1, &VAR_8, "format3"))
    FUNC_0("format item %.30s... ran format() out of memory", VAR_9);
   if (FUNC_8((uschar)*VAR_4) && *VAR_4 != 'l' && *VAR_4 != 'h' && *VAR_4 != 'L')
    break;
   if (*VAR_4 == '$') {
    FUNC_0("'$' not permitted in awk formats");
   }
   if (*VAR_4 == '*') {
    if (VAR_5 == ((void*)0)) {
     FUNC_0("not enough args in printf(%s)", VAR_9);
    }
    VAR_10 = FUNC_4(VAR_5);
    VAR_5 = VAR_5->nnext;
    FUNC_11(VAR_8-1, "%d", VAR_13=(int) FUNC_6(VAR_10));
    if (VAR_13 < 0)
     VAR_13 = -VAR_13;
    FUNC_2(&VAR_15, &VAR_16, VAR_13+1+VAR_7-VAR_15, VAR_1, &VAR_7, "format");
    VAR_8 = VAR_6 + FUNC_13(VAR_6);
    FUNC_14(VAR_10);
   }
  }
  *VAR_8 = '\0';
  if (VAR_13 < 0)
   VAR_13 = -VAR_13;
  FUNC_2(&VAR_15, &VAR_16, VAR_13+1+VAR_7-VAR_15, VAR_1, &VAR_7, "format4");
  switch (*VAR_4) {
  case 'a': case 'A':
   if (VAR_18)
    VAR_11 = *VAR_4;
   else
    VAR_11 = 'f';
   break;
  case 'f': case 'e': case 'g': case 'E': case 'G':
   VAR_11 = 'f';
   break;
  case 'd': case 'i':
   VAR_11 = 'd';
   if(*(VAR_4-1) == 'l') break;
   *(VAR_8-1) = 'l';
   *VAR_8 = 'd';
   *++VAR_8 = '\0';
   break;
  case 'o': case 'x': case 'X': case 'u':
   VAR_11 = *(VAR_4-1) == 'l' ? 'd' : 'u';
   break;
  case 's':
   VAR_11 = 's';
   break;
  case 'c':
   VAR_11 = 'c';
   break;
  default:
   FUNC_1("weird printf conversion %s", VAR_6);
   VAR_11 = '?';
   break;
  }
  if (VAR_5 == ((void*)0))
   FUNC_0("not enough args in printf(%s)", VAR_9);
  VAR_10 = FUNC_4(VAR_5);
  VAR_5 = VAR_5->nnext;
  VAR_12 = VAR_0;
  if (VAR_13 > VAR_12)
   VAR_12 = VAR_13;
  FUNC_2(&VAR_15, &VAR_16, 1+VAR_12+VAR_7-VAR_15, VAR_1, &VAR_7, "format5");
  switch (VAR_11) {
  case '?': FUNC_11(VAR_7, "%s", VAR_6);
   VAR_8 = FUNC_7(VAR_10);
   VAR_12 = FUNC_13(VAR_8);
   if (VAR_13 > VAR_12)
    VAR_12 = VAR_13;
   FUNC_2(&VAR_15, &VAR_16, 1+FUNC_13(VAR_7)+VAR_12+VAR_7-VAR_15, VAR_1, &VAR_7, "format6");
   VAR_7 += FUNC_13(VAR_7);
   FUNC_11(VAR_7, "%s", VAR_8);
   break;
  case 'a':
  case 'A':
  case 'f': FUNC_11(VAR_7, VAR_6, FUNC_6(VAR_10)); break;
  case 'd': FUNC_11(VAR_7, VAR_6, (long) FUNC_6(VAR_10)); break;
  case 'u': FUNC_11(VAR_7, VAR_6, (int) FUNC_6(VAR_10)); break;
  case 's':
   VAR_8 = FUNC_7(VAR_10);
   VAR_12 = FUNC_13(VAR_8);
   if (VAR_13 > VAR_12)
    VAR_12 = VAR_13;
   if (!FUNC_2(&VAR_15, &VAR_16, 1+VAR_12+VAR_7-VAR_15, VAR_1, &VAR_7, "format7"))
    FUNC_0("huge string/format (%d chars) in printf %.30s... ran format() out of memory", VAR_12, VAR_8);
   FUNC_11(VAR_7, VAR_6, VAR_8);
   break;
  case 'c':
   if (FUNC_9(VAR_10)) {
    if ((int)FUNC_6(VAR_10))
     FUNC_11(VAR_7, VAR_6, (int) FUNC_6(VAR_10));
    else {
     *VAR_7++ = '\0';
     *VAR_7 = '\0';
    }
   } else
    FUNC_11(VAR_7, VAR_6, FUNC_7(VAR_10)[0]);
   break;
  default:
   FUNC_0("can't happen: bad conversion %c in format()", VAR_11);
  }
  FUNC_14(VAR_10);
  VAR_7 += FUNC_13(VAR_7);
  VAR_4++;
 }
 *VAR_7 = '\0';
 FUNC_5(VAR_6);
 for ( ; VAR_5; VAR_5 = VAR_5->nnext)
  FUNC_4(VAR_5);
 *VAR_2 = VAR_15;
 *VAR_3 = VAR_16;
 return VAR_7 - VAR_15;
}
