
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const char *VAR_2,
     char *VAR_3, char *VAR_4)
{



    if (FUNC_3(VAR_3, VAR_1, VAR_2) != 0 && !VAR_0) {
 FUNC_1("No utmpx entry.  You must exec \"login\" from the "
        "lowest level shell.\n");
 FUNC_0(1);
    }
    FUNC_2(VAR_4, VAR_1, VAR_2);
}
