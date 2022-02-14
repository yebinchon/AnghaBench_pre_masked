
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int dummy; } ;
typedef char eChar ;
typedef int Char ;


 char VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int ) ;
 char VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct Strbuf*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char,int) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;

__attribute__((used)) static int
FUNC_5(struct Strbuf *VAR_8)
{
    eChar VAR_9;

    for (;;) {
 VAR_9 = FUNC_0(VAR_1);
 if (VAR_9 == '\\') {
     VAR_9 = FUNC_0(0);
     if (VAR_9 == VAR_0) {
  FUNC_4(VAR_9);
  return 1;
     }
     if (VAR_9 == '\n')
  VAR_9 = ' ';
     else
  VAR_9 |= VAR_2;
 }
 if (VAR_9 == VAR_0) {
     FUNC_4(VAR_9);
     return 1;
 }
 if (FUNC_2(VAR_9, VAR_7 | VAR_4 | VAR_6 | VAR_5)) {
     FUNC_3(VAR_9);
     if (FUNC_2(VAR_9, VAR_3))
  return 0;
     return 1;
 }
 FUNC_1(VAR_8, (Char) VAR_9);
    }
}
