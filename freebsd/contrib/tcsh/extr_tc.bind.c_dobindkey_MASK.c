
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uChar ;
struct command {int dummy; } ;
struct TYPE_12__ {int* buf; int len; } ;
typedef scalar_t__ KEYCMD ;
typedef char Char ;
typedef TYPE_1__ CStr ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,char*) ;
 char VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int*) ;
 int* FUNC_10 (char*) ;
 int FUNC_11 (struct command*) ;



 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 () ;
 int FUNC_15 (int*) ;
 int FUNC_16 () ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int*,int ) ;
 int FUNC_19 (int*) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int * FUNC_24 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_25 (char*) ;
 int * FUNC_26 (char*,TYPE_1__*) ;
 int FUNC_27 () ;
 int FUNC_28 (scalar_t__*,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_29 (int ,char*) ;

void
FUNC_30(Char **VAR_7, struct command *VAR_8)
{
    KEYCMD *VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    Char *VAR_15;
    Char VAR_16;
    KEYCMD VAR_17;
    CStr VAR_18;
    CStr VAR_19;
    uChar VAR_20;

    FUNC_11(VAR_8);
    if (!VAR_5)
 FUNC_21();

    VAR_9 = VAR_2;
    VAR_10 = 130;
    VAR_13 = VAR_12 = VAR_14 = 0;
    for (VAR_11 = 1, VAR_15 = VAR_7[VAR_11];
  VAR_15 != ((void*)0) && (*VAR_15++ & VAR_0) == '-'; VAR_11++, VAR_15 = VAR_7[VAR_11]) {
 if ((VAR_16 = (*VAR_15 & VAR_0)) == '-') {
     VAR_11++;
     break;
 }
 else
     switch (VAR_16) {
     case 'b':
  VAR_14 = 1;
  break;
     case 'k':
  VAR_13 = 1;
  break;
     case 'a':
  VAR_9 = VAR_1;
  break;
     case 's':
  VAR_10 = 128;
  break;
     case 'c':
  VAR_10 = 129;
  break;
     case 'r':
  VAR_12 = 1;
  break;
     case 'v':
  FUNC_22();
  return;
     case 'e':
  FUNC_20();
  return;
     case 'd':



  FUNC_20();

  return;
     case 'l':
  FUNC_23();
  return;
     default:
  FUNC_16();
  return;
     }
    }

    if (!VAR_7[VAR_11]) {
 FUNC_27();
 return;
    }

    if (VAR_13) {
 if (!FUNC_6(VAR_7[VAR_11]))
     FUNC_29(FUNC_2(20, 1, "Invalid key name `%S'\n"), VAR_7[VAR_11]);
 VAR_18.buf = FUNC_10(VAR_7[VAR_11++]);
 VAR_18.len = FUNC_9(VAR_18.buf);
    }
    else {
 if (VAR_14) {
     if (FUNC_24(VAR_7[VAR_11++], &VAR_18) == ((void*)0))
  return;
 }
 else {
     if (FUNC_26(VAR_7[VAR_11++], &VAR_18) == ((void*)0))
  return;
 }
    }
    FUNC_18(VAR_18.buf, VAR_6);


    if (VAR_18.buf[0] > 0xFF) {
 FUNC_15(VAR_18.buf);
 FUNC_19(VAR_18.buf);
 return;
    }

    VAR_20 = (uChar) VAR_18.buf[0];

    if (VAR_12) {
 if (VAR_13)
     (void) FUNC_3(&VAR_18);
 else if (VAR_18.len > 1) {
     (void) FUNC_5(&VAR_18);
 }
 else if (VAR_9[VAR_20] == VAR_4) {
     (void) FUNC_5(&VAR_18);
     VAR_9[VAR_20] = VAR_3;
 }
 else {
     VAR_9[VAR_20] = VAR_3;
 }
 FUNC_19(VAR_18.buf);
 return;
    }
    if (!VAR_7[VAR_11]) {
 if (VAR_13)
     FUNC_7(&VAR_18);
 else
     FUNC_28(VAR_9, &VAR_18);
 FUNC_19(VAR_18.buf);
 return;
    }
    if (VAR_7[VAR_11 + 1]) {
 FUNC_16();
 FUNC_19(VAR_18.buf);
 return;
    }
    switch (VAR_10) {
    case 128:
    case 129:
 if (FUNC_26(VAR_7[VAR_11], &VAR_19) == ((void*)0)) {
     FUNC_19(VAR_18.buf);
     return;
 }
 FUNC_18(VAR_19.buf, VAR_6);
 if (VAR_13) {
     if (FUNC_8(&VAR_18, FUNC_13(&VAR_19), VAR_10) == -1)
  FUNC_29(FUNC_2(20, 2, "Bad key name: %S\n"), VAR_18.buf);
     else
  FUNC_17(VAR_19.buf);
 }
 else
     FUNC_0(&VAR_18, FUNC_13(&VAR_19), VAR_10);
 VAR_9[VAR_20] = VAR_4;
 break;
    case 130:
 if ((VAR_17 = FUNC_25(VAR_7[VAR_11])) == 0) {
     FUNC_19(VAR_18.buf);
     return;
 }
 if (VAR_13)
     (void) FUNC_8(&VAR_18, FUNC_12((int) VAR_17), VAR_10);
 else {
     if (VAR_18.len > 1) {
  FUNC_0(&VAR_18, FUNC_12((int) VAR_17), VAR_10);
  VAR_9[VAR_20] = VAR_4;
     }
     else {
  FUNC_4(VAR_9, &VAR_18);
  VAR_9[VAR_20] = VAR_17;
     }
 }
 break;
    default:
 FUNC_14();
 break;
    }
    FUNC_19(VAR_18.buf);
    if (VAR_13)
 FUNC_1();
}
