
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TERMTYPE ;


 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (int ,int,int,int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;
 int FUNC_5 (int,char*,char*) ;

__attribute__((used)) static char *
FUNC_6(TERMTYPE *VAR_2, char *VAR_3, int VAR_4, char *VAR_5, const char *VAR_6)
{
    char *VAR_7;

    VAR_0 = 0;
    VAR_7 = FUNC_1(VAR_1,
     VAR_4 == 1,
     VAR_4 == 2,
     VAR_4 == 3,
     VAR_4 == 4,
     VAR_4 == 5,
     VAR_4 == 6,
     VAR_4 == 7,
     VAR_4 == 8,
     VAR_4 == 9);
    if (VAR_7 != 0) {
 if (FUNC_0(VAR_5)) {
     if (!FUNC_5(VAR_4, VAR_7, VAR_5)) {
  FUNC_4("%s differs from sgr(%d)\n\t%s=%s\n\tsgr(%d)=%s",
       VAR_6, VAR_4,
       VAR_6, FUNC_3(1, VAR_5),
       VAR_4, FUNC_3(2, VAR_7));
     }
 } else if (FUNC_2(VAR_7, VAR_3)) {
     FUNC_4("sgr(%d) present, but not %s", VAR_4, VAR_6);
 }
    } else if (FUNC_0(VAR_5)) {
 FUNC_4("sgr(%d) missing, but %s present", VAR_4, VAR_6);
    }
    if (VAR_0)
 FUNC_4("stack error in sgr(%d) string", VAR_4);
    return VAR_7;
}
