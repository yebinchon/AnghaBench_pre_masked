
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
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const**,char const**,int*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*,int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char const*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char) ;
 int VAR_12 ;
 int * FUNC_12 (char*,char const) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static void
FUNC_14(const char *VAR_13)
{
 const char *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 char VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22;


 if (VAR_13[0] != '\0' && VAR_13[1] == '\0' &&
     FUNC_12("!),.:;?]", VAR_13[0]) != ((void*)0) &&
     (VAR_11 & VAR_7) == 0)
  VAR_11 &= ~VAR_6;

 FUNC_8();

 if (*VAR_13 == '\0')
  return;


 if ((VAR_13[0] == '(' || VAR_13[0] == '[') && VAR_13[1] == '\0')
  VAR_11 &= ~VAR_6;

 VAR_22 = 0;
 VAR_15 = VAR_16 = "";
 while ((VAR_18 = *VAR_13++) != '\0') {
  VAR_19 = 0;
  switch(VAR_18) {
  case 145:
   if (VAR_8)
    VAR_18 = ' ';
   else {
    FUNC_7("nbsp");
    VAR_18 = '\0';
   }
   break;
  case 146:
   VAR_19 = VAR_9 & VAR_0 && !VAR_8;
   VAR_18 = '-';
   break;
  case 147:
   continue;
  case '#':
  case '+':
  case '-':
   VAR_19 = VAR_9 & VAR_0 && !VAR_8;
   break;
  case '(':
   VAR_19 = VAR_9 & VAR_3 && !VAR_8;
   break;
  case ')':
   VAR_19 = VAR_9 & VAR_4 && !VAR_8;
   break;
  case '*':
  case '[':
  case '_':
  case '`':
   VAR_19 = !VAR_8;
   break;
  case '.':
   VAR_19 = VAR_9 & VAR_4 && !VAR_8;
   break;
  case '<':
   if (VAR_8 == 0) {
    FUNC_7("lt");
    VAR_18 = '\0';
   }
   break;
  case '=':
   if (VAR_9 & VAR_0 && !VAR_8) {
    FUNC_7("equals");
    VAR_18 = '\0';
   }
   break;
  case '>':
   if (VAR_8 == 0) {
    FUNC_7("gt");
    VAR_18 = '\0';
   }
   break;
  case '\\':
   VAR_21 = 0;
   VAR_17 = ((void*)0);
   switch (FUNC_1(&VAR_13, &VAR_14, &VAR_20)) {
   case 128:
    VAR_21 = FUNC_3(VAR_14 + 1, VAR_20 - 1);
    break;
   case 133:
    VAR_21 = FUNC_2(VAR_14, VAR_20);
    break;
   case 130:
    VAR_21 = FUNC_4(VAR_14, VAR_20);
    break;
   case 129:
    VAR_21 = *VAR_14;
    break;
   case 143:
    FUNC_9("markdown");
    continue;
   case 139:
    VAR_17 = "**";
    break;
   case 137:
    VAR_17 = "*";
    break;
   case 140:
    VAR_17 = "***";
    break;
   case 141:
   case 138:
   case 135:
    VAR_17 = "";
    break;
   case 136:
    VAR_17 = VAR_15;
    break;
   case 144:
    VAR_22 = 1;
    break;
   case 134:
   case 131:
   case 132:


   case 142:
   default:
    break;
   }
   if (VAR_17 != ((void*)0) && !VAR_8) {
    if (*VAR_16 != '\0') {
     VAR_11 &= ~VAR_6;
     FUNC_9(VAR_16);
    }
    VAR_15 = VAR_16;
    VAR_16 = VAR_17;
    if (*VAR_16 != '\0') {
     VAR_11 &= ~VAR_6;
     FUNC_9(VAR_16);
    }
   }
   if (VAR_21) {
    if ((VAR_21 < 0x20 && VAR_21 != 0x09) ||
        (VAR_21 > 0x7E && VAR_21 < 0xA0))
     VAR_21 = 0xFFFD;
    if (VAR_8) {
     VAR_14 = FUNC_5(VAR_21);
     FUNC_0(VAR_14, VAR_12);
     VAR_10 += FUNC_13(VAR_14);
    } else {
     FUNC_10("&#%d;", VAR_21);
     VAR_10++;
    }
    VAR_9 &= ~VAR_2;
   }
   VAR_18 = '\0';
   break;
  case ']':
   VAR_19 = VAR_9 & VAR_5 && !VAR_8;
   VAR_9 |= VAR_3;
   break;
  default:
   break;
  }
  if (VAR_19)
   FUNC_11('\\');
  FUNC_6(VAR_18);
  if (VAR_22 &&
      (*VAR_13 == '\0' || *VAR_13 == ' ' || *VAR_13 == 145)) {
   FUNC_10("  \n");
   VAR_22 = 0;
   while (*VAR_13 == ' ' || *VAR_13 == 145)
    VAR_13++;
  }
 }
 if (*VAR_16 != '\0') {
  VAR_11 &= ~VAR_6;
  FUNC_9(VAR_16);
 } else if (VAR_13[-2] == ' ')
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~VAR_1;
}
