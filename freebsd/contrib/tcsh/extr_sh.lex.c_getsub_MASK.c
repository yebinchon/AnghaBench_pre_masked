
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct wordent {int dummy; } ;
typedef char eChar ;
struct TYPE_7__ {scalar_t__ len; int * s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,char) ;
 struct wordent* FUNC_6 (char,struct wordent*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (char) ;
 TYPE_1__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_9 (int ,...) ;
 TYPE_1__ VAR_11 ;
 int FUNC_10 (char) ;

__attribute__((used)) static struct wordent *
FUNC_11(struct wordent *VAR_12)
{
    eChar VAR_13;
    eChar VAR_14;
    eChar VAR_15;
    int VAR_16;

    do {
 VAR_7 = 0;
 VAR_16 = 0;
 VAR_15 = VAR_14 = FUNC_7(0);
 while (VAR_14 == 'g' || VAR_14 == 'a') {
     VAR_16 |= (VAR_14 == 'g') ? VAR_5 : VAR_4;
     VAR_15 = VAR_14 = FUNC_7(0);
 }

 switch (VAR_14) {
 case 'p':
     VAR_8++;
     return (VAR_12);

 case 'x':
 case 'q':
     VAR_16 |= VAR_5;


 case 'h':
 case 'r':
 case 't':
 case 'e':
 case 'u':
 case 'l':
     break;

 case '&':
     if (VAR_11.len == 0) {
  FUNC_9(VAR_3);
  return (VAR_12);
     }
     VAR_9.len = 0;
     FUNC_1(&VAR_9, VAR_11.s);
     FUNC_3(&VAR_9);
     break;
 case 's':
     VAR_13 = FUNC_7(0);
     if (FUNC_8(VAR_13) || FUNC_0(VAR_13) || FUNC_5(" \t\n", VAR_13)) {
  FUNC_10(VAR_13);
  VAR_9.len = 0;
  FUNC_9(VAR_1);
  return (VAR_12);
     }
     FUNC_3(&VAR_9);
     VAR_9.len = 0;
     for (;;) {
  VAR_14 = FUNC_7(0);
  if (VAR_14 == '\n') {
      FUNC_10(VAR_14);
      break;
  }
  if (VAR_14 == VAR_13)
      break;
  if (VAR_14 == '\\') {
      VAR_14 = FUNC_7(0);
      if (VAR_14 != VAR_13 && VAR_14 != '\\')
   FUNC_2(&VAR_9, '\\');
  }
  FUNC_2(&VAR_9, VAR_14);
     }
     if (VAR_9.len != 0)
  FUNC_3(&VAR_9);
     else if (VAR_9.s[0] == 0) {
  FUNC_9(VAR_2);
  return (VAR_12);
     } else
  VAR_9.len = FUNC_4(VAR_9.s);
     VAR_10.len = 0;
     for (;;) {
  VAR_14 = FUNC_7(0);
  if (VAR_14 == '\n') {
      FUNC_10(VAR_14);
      break;
  }
  if (VAR_14 == VAR_13)
      break;
  if (VAR_14 == '\\') {
      VAR_14 = FUNC_7(0);
      if (VAR_14 != VAR_13 )
   FUNC_2(&VAR_10, '\\');
  }
  FUNC_2(&VAR_10, VAR_14);
     }
     FUNC_3(&VAR_10);
     break;

 default:
     if (VAR_14 == '\n')
  FUNC_10(VAR_14);
     FUNC_9(VAR_0, (int)VAR_14);
     return (VAR_12);
 }
 VAR_11.len = 0;
 if (VAR_9.s != ((void*)0) && VAR_9.len != 0)
     FUNC_1(&VAR_11, VAR_9.s);
 FUNC_3(&VAR_11);
 if (VAR_6)
     VAR_12 = FUNC_6(VAR_15, VAR_12, VAR_16);
    }
    while ((VAR_14 = FUNC_7(0)) == ':');
    FUNC_10(VAR_14);
    return (VAR_12);
}
