
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; void* cp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (char*) ;
 double FUNC_3 (char*) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_4 (char**,int*) ;
 int VAR_32 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_33 ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_34 ;
 char FUNC_10 () ;
 scalar_t__ VAR_35 ;
 int FUNC_11 () ;
 int VAR_36 ;
 void* FUNC_12 (char*,char*,double,int,int ) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 () ;
 int VAR_37 ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 TYPE_1__ VAR_38 ;

int FUNC_19(void)
{
 int VAR_39;
 static char *VAR_40 = ((void*)0);
 static int VAR_41 = 5;

 if (VAR_40 == ((void*)0) && (VAR_40 = (char *) FUNC_9(VAR_41)) == ((void*)0))
  FUNC_0( "out of space in yylex" );
 if (VAR_36) {
  VAR_36 = 0;
  FUNC_1('}');
 }
 if (VAR_35) {
  VAR_35 = 0;
  return FUNC_11();
 }
 for (;;) {
  VAR_39 = FUNC_4(&VAR_40, &VAR_41);
  if (VAR_39 == 0)
   return 0;
  if (FUNC_6(VAR_39) || VAR_39 == '_')
   return FUNC_18(VAR_40);
  if (FUNC_8(VAR_39)) {
   VAR_38.cp = FUNC_12(VAR_40, FUNC_15(VAR_40), FUNC_3(VAR_40), VAR_6|VAR_24, VAR_37);

   FUNC_1(VAR_25);
  }

  VAR_38.i = VAR_39;
  switch (VAR_39) {
  case '\n':
   VAR_33++;
   FUNC_1(VAR_21);
  case '\r':
  case ' ':
  case '\t':
   break;
  case '#':
   while ((VAR_39 = FUNC_5()) != '\n' && VAR_39 != 0)
    ;
   FUNC_16(VAR_39);
   break;
  case ';':
   FUNC_1(';');
  case '\\':
   if (FUNC_10() == '\n') {
    FUNC_5();
    VAR_33++;
   } else if (FUNC_10() == '\r') {
    FUNC_5(); FUNC_5();
    VAR_33++;
   } else {
    FUNC_1(VAR_39);
   }
   break;
  case '&':
   if (FUNC_10() == '&') {
    FUNC_5(); FUNC_1(VAR_1);
   } else
    FUNC_1('&');
  case '|':
   if (FUNC_10() == '|') {
    FUNC_5(); FUNC_1(VAR_5);
   } else
    FUNC_1('|');
  case '!':
   if (FUNC_10() == '=') {
    FUNC_5(); VAR_38.i = VAR_20; FUNC_1(VAR_20);
   } else if (FUNC_10() == '~') {
    FUNC_5(); VAR_38.i = VAR_23; FUNC_1(VAR_17);
   } else
    FUNC_1(VAR_22);
  case '~':
   VAR_38.i = VAR_16;
   FUNC_1(VAR_17);
  case '<':
   if (FUNC_10() == '=') {
    FUNC_5(); VAR_38.i = VAR_14; FUNC_1(VAR_14);
   } else {
    VAR_38.i = VAR_15; FUNC_1(VAR_15);
   }
  case '=':
   if (FUNC_10() == '=') {
    FUNC_5(); VAR_38.i = VAR_8; FUNC_1(VAR_8);
   } else {
    VAR_38.i = VAR_4; FUNC_1(VAR_3);
   }
  case '>':
   if (FUNC_10() == '=') {
    FUNC_5(); VAR_38.i = VAR_9; FUNC_1(VAR_9);
   } else if (FUNC_10() == '>') {
    FUNC_5(); VAR_38.i = VAR_2; FUNC_1(VAR_2);
   } else {
    VAR_38.i = VAR_10; FUNC_1(VAR_10);
   }
  case '+':
   if (FUNC_10() == '+') {
    FUNC_5(); VAR_38.i = VAR_11; FUNC_1(VAR_11);
   } else if (FUNC_10() == '=') {
    FUNC_5(); VAR_38.i = VAR_0; FUNC_1(VAR_3);
   } else
    FUNC_1('+');
  case '-':
   if (FUNC_10() == '-') {
    FUNC_5(); VAR_38.i = VAR_7; FUNC_1(VAR_7);
   } else if (FUNC_10() == '=') {
    FUNC_5(); VAR_38.i = VAR_29; FUNC_1(VAR_3);
   } else
    FUNC_1('-');
  case '*':
   if (FUNC_10() == '=') {
    FUNC_5(); VAR_38.i = VAR_19; FUNC_1(VAR_3);
   } else if (FUNC_10() == '*') {
    FUNC_5();
    if (FUNC_10() == '=') {
     FUNC_5(); VAR_38.i = VAR_26; FUNC_1(VAR_3);
    } else {
     FUNC_1(VAR_27);
    }
   } else
    FUNC_1('*');
  case '/':
   FUNC_1('/');
  case '%':
   if (FUNC_10() == '=') {
    FUNC_5(); VAR_38.i = VAR_18; FUNC_1(VAR_3);
   } else
    FUNC_1('%');
  case '^':
   if (FUNC_10() == '=') {
    FUNC_5(); VAR_38.i = VAR_26; FUNC_1(VAR_3);
   } else
    FUNC_1(VAR_27);

  case '$':

   VAR_39 = FUNC_4(&VAR_40, &VAR_41);
   if (FUNC_6(VAR_39)) {
    if (FUNC_13(VAR_40, "NF") == 0) {
     FUNC_17("(NF)");
     FUNC_1(VAR_12);
    }
    VAR_39 = FUNC_10();
    if (VAR_39 == '(' || VAR_39 == '[' || (VAR_32 && FUNC_7(VAR_40) >= 0)) {
     FUNC_17(VAR_40);
     FUNC_1(VAR_12);
    }
    VAR_38.cp = FUNC_12(VAR_40, "", 0.0, VAR_28|VAR_24, VAR_37);
    FUNC_1(VAR_13);
   } else if (VAR_39 == 0) {
    FUNC_2( "unexpected end of input after $" );
    FUNC_1(';');
   } else {
    FUNC_17(VAR_40);
    FUNC_1(VAR_12);
   }

  case '}':
   if (--VAR_30 < 0)
    FUNC_2( "extra }" );
   VAR_36 = 1;
   FUNC_1(';');
  case ']':
   if (--VAR_31 < 0)
    FUNC_2( "extra ]" );
   FUNC_1(']');
  case ')':
   if (--VAR_34 < 0)
    FUNC_2( "extra )" );
   FUNC_1(')');
  case '{':
   VAR_30++;
   FUNC_1('{');
  case '[':
   VAR_31++;
   FUNC_1('[');
  case '(':
   VAR_34++;
   FUNC_1('(');

  case '"':
   return FUNC_14();

  default:
   FUNC_1(VAR_39);
  }
 }
}
