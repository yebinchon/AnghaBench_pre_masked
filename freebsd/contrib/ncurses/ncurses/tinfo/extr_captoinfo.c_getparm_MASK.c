
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_4(int VAR_5, int VAR_6)

{
    if (VAR_4) {
 if (VAR_5 == 1)
     VAR_5 = 2;
 else if (VAR_5 == 2)
     VAR_5 = 1;
    }

    while (VAR_6--) {
 VAR_0 = FUNC_3(VAR_0, "%p");
 VAR_0 = FUNC_2(VAR_0, '0' + VAR_5);
    }

    if (VAR_1 == VAR_5) {
 if (VAR_6 > 1) {
     FUNC_0("string may not be optimal");
     VAR_0 = FUNC_3(VAR_0, "%Pa");
     while (VAR_6--) {
  VAR_0 = FUNC_3(VAR_0, "%ga");
     }
 }
 return;
    }
    if (VAR_1 != 0)
 FUNC_1();

    VAR_1 = VAR_5;

    if (VAR_3 && VAR_5 < 3) {
 VAR_0 = FUNC_3(VAR_0, "%{96}%^");
    }

    if (VAR_2 && VAR_5 < 3) {
 VAR_0 = FUNC_3(VAR_0, "%{127}%^");
    }
}
