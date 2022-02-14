
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

void
FUNC_5(char *VAR_4)
{
    if (VAR_0 && VAR_0 != VAR_3)
 FUNC_0(VAR_0);
    if (VAR_4 && (FUNC_3(VAR_4, "-") != 0)) {
 VAR_0 = FUNC_1(VAR_4, "w");
 if (VAR_0) {
     FUNC_4((char *)VAR_1, VAR_4);
     return;
 }
 FUNC_2(VAR_2, "Cannot open %s.\n", VAR_4);
    }
    VAR_0 = VAR_3;
    FUNC_4((char *)VAR_1, "(standard output)");
}
