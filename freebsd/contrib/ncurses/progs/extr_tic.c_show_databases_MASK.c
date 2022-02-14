
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 () ;
 char* VAR_1 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*,char const*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_4)
{
    bool VAR_5 = (VAR_4 != 0) || FUNC_6("TERMINFO") != 0;
    char *VAR_6;
    const char *VAR_7 = 0;

    if (VAR_4 == 0) {
 VAR_4 = FUNC_2(0);
    }
    if ((VAR_6 = FUNC_8(VAR_4)) != 0) {
 FUNC_7("%s\n", VAR_6);
 FUNC_5(VAR_6);
    } else {
 VAR_7 = VAR_4;
    }

    if ((VAR_4 = FUNC_1())) {
 if ((VAR_6 = FUNC_8(VAR_4)) != 0) {
     FUNC_7("%s\n", VAR_6);
     FUNC_5(VAR_6);
 } else if (!VAR_5) {
     VAR_7 = VAR_4;
 }
    }




    if (VAR_7) {
 FUNC_3(VAR_3);
 FUNC_4(VAR_2, "%s: %s (no permission)\n", VAR_1, VAR_7);
 FUNC_0(VAR_0);
    }
}
