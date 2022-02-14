
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int answer ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static const char *
FUNC_8(const char *VAR_2)
{
    static char VAR_3[256];
    char *VAR_4;


    FUNC_0(VAR_1);
    if (FUNC_2(VAR_1) || FUNC_3(VAR_1)) {
 (void) FUNC_6(VAR_0, "\n");
 FUNC_1();

    }
    for (;;) {
 if (VAR_2)
     (void) FUNC_6(VAR_0, "Terminal type? [%s] ", VAR_2);
 else
     (void) FUNC_6(VAR_0, "Terminal type? ");
 (void) FUNC_4(VAR_0);

 if (FUNC_5(VAR_3, sizeof(VAR_3), VAR_1) == 0) {
     if (VAR_2 == 0) {
  FUNC_1();

     }
     return (VAR_2);
 }

 if ((VAR_4 = FUNC_7(VAR_3, '\n')) != 0)
     *VAR_4 = '\0';
 if (VAR_3[0])
     return (VAR_3);
 if (VAR_2 != 0)
     return (VAR_2);
    }
}
