
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
    int VAR_2;
    int VAR_3 = VAR_1;
    int VAR_4 = 1;
    int VAR_5 = 0;
    int VAR_6 = 0;
    while((VAR_2 = FUNC_1()) != VAR_0) {
 if(VAR_2 == '/') {
     if(VAR_5) {
  if(--VAR_4 == 0)
      return;
  VAR_5 = 0;
  continue;
     }
     VAR_6 = 1;
     continue;
 } else if(VAR_2 == '*') {
     if(VAR_6) {
  VAR_4++;
  VAR_5 = VAR_6 = 0;
  continue;
     }
     VAR_5 = 1;
     continue;
 }
 VAR_5 = VAR_6 = 0;
 if(VAR_2 == '\n') {
     VAR_1++;
     continue;
 }
    }
    if(VAR_2 == VAR_0)
 FUNC_0("unterminated comment, possibly started on line %d\n", VAR_3);
}
