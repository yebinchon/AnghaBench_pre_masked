
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int dummy; } ;
typedef char eChar ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 struct Strbuf VAR_7 ;
 int FUNC_0 (struct Strbuf*,char) ;
 int VAR_8 ;
 char* FUNC_1 (struct Strbuf*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct Strbuf*) ;
 int FUNC_4 (struct Strbuf*,int ) ;
 int FUNC_5 (struct Strbuf*) ;
 scalar_t__ FUNC_6 (char,int) ;
 scalar_t__ VAR_14 ;
 char FUNC_7 (int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int ,...) ;
 int FUNC_9 (char) ;

__attribute__((used)) static Char *
FUNC_10(int VAR_17)
{
    eChar VAR_18, VAR_19;
    struct Strbuf VAR_20 = VAR_7;
    Char VAR_21[12];
    int VAR_22;
    int VAR_23;
    int VAR_24 = 0;

    FUNC_4(&VAR_20, VAR_8);
loop:
    if (VAR_14 && VAR_24++ > 256 * 1024)
 FUNC_8(VAR_3);
    while ((VAR_18 = FUNC_7(VAR_0)) == ' ' || VAR_18 == '\t')
 continue;
    if (FUNC_6(VAR_18, VAR_10 | VAR_9))
 switch (VAR_18) {
 case '&':
 case '|':
 case '<':
 case '>':
     FUNC_0(&VAR_20, VAR_18);
     VAR_19 = FUNC_7(VAR_0);
     if (VAR_19 == VAR_18)
  FUNC_0(&VAR_20, VAR_19);
     else
  FUNC_9(VAR_19);
     goto ret;

 case '#':
     if (VAR_15 || (VAR_14 && !VAR_17))
  break;
     VAR_18 = 0;
     VAR_22 = 0;
     do {
  VAR_19 = VAR_18;
  VAR_18 = FUNC_7(0);
  if (VAR_22 < 11 && VAR_17)
      VAR_21[VAR_22++] = VAR_18;
     } while (VAR_18 != '\n');
     if (VAR_17) {
  VAR_21[11] = '\0';
  VAR_5 = FUNC_2(VAR_21);
     }
     if (VAR_19 == '\\')
  goto loop;


 case ';':
 case '(':
 case ')':
 case '\n':
     FUNC_0(&VAR_20, VAR_18);
     goto ret;

 case '\\':
     VAR_18 = FUNC_7(0);
     if (VAR_18 == '\n') {
  if (VAR_16 == 1)
      VAR_16 = 2;
  goto loop;
     }
     if (VAR_18 != (eChar)VAR_4)
  FUNC_0(&VAR_20, '\\');
     VAR_18 |= VAR_6;
 default:
     break;
 }
    VAR_19 = 0;
    VAR_23 = VAR_0;
    for (;;) {
 if (VAR_14 && VAR_24++ > 256 * 1024)
     FUNC_8(VAR_3);
 if (VAR_19) {
     if (VAR_18 == VAR_19) {
  VAR_19 = 0;
  VAR_23 = VAR_0;
     }
     else if (VAR_18 == '\\') {
  VAR_18 = FUNC_7(0);







  if (VAR_18 == (eChar)VAR_4)
      VAR_18 |= VAR_6;
  else {
      if (VAR_13 &&
   ((VAR_18 == '\'') || (VAR_18 == '"') ||
    (VAR_18 == '\\') || (VAR_18 == '$'))) {
   VAR_18 |= VAR_6;
      }
      else {
   if (VAR_18 == '\n')



       VAR_18 |= VAR_6;
   FUNC_9(VAR_18);
   VAR_18 = '\\' | VAR_6;
      }
  }
     }
     else if (VAR_18 == '\n') {
  FUNC_8(VAR_2, VAR_19);
  FUNC_9(VAR_18);
  break;
     }
 }
 else if (FUNC_6(VAR_18, VAR_10 | VAR_12 | VAR_11 | VAR_9)) {
     if (VAR_18 == '\\') {
  VAR_18 = FUNC_7(0);
  if (VAR_18 == '\n') {
      if (VAR_16 == 1)
   VAR_16 = 2;
      break;
  }
  if (VAR_18 != (eChar)VAR_4)
      FUNC_0(&VAR_20, '\\');
  VAR_18 |= VAR_6;
     }
     else if (FUNC_6(VAR_18, VAR_12 | VAR_11)) {
  VAR_19 = VAR_18;
  VAR_23 = VAR_18 == '"' ? VAR_0 : VAR_1;
     }
     else if (VAR_18 != '#' || (!VAR_15 && !VAR_14)) {
  FUNC_9(VAR_18);
  break;
     }
 }
 FUNC_0(&VAR_20, VAR_18);
 VAR_18 = FUNC_7(VAR_23);
    }
ret:
    FUNC_3(&VAR_20);
    FUNC_5(&VAR_20);
    return FUNC_1(&VAR_20);
}
