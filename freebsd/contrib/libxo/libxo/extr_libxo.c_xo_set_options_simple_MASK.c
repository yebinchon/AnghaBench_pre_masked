
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xo_xof_flags_t ;
typedef int xo_handle_t ;
typedef int ssize_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,char*,char*) ;
 scalar_t__ FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_10 (xo_handle_t *VAR_2, const char *VAR_3)
{
    xo_xof_flags_t VAR_4;
    char *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;
    ssize_t VAR_10 = FUNC_5(VAR_3) + 1;

    VAR_9 = FUNC_2(VAR_10);
    FUNC_3(VAR_9, VAR_3, VAR_10);

    for (VAR_5 = VAR_9, VAR_6 = VAR_5 + VAR_10 - 1; VAR_5 && VAR_5 < VAR_6; VAR_5 = VAR_8) {
 VAR_8 = FUNC_4(VAR_5, ',');
 if (VAR_8)
     *VAR_8++ = '\0';

 VAR_7 = FUNC_4(VAR_5, '=');
 if (VAR_7)
     *VAR_7++ = '\0';

 if (FUNC_9("colors", VAR_5)) {
     FUNC_8(VAR_2, VAR_7);
     continue;
 }

 VAR_4 = FUNC_7(VAR_1, VAR_5, -1);
 if (VAR_4 != 0) {
     FUNC_1(VAR_2, VAR_4);
 } else if (FUNC_9(VAR_5, "no-color")) {
     FUNC_0(VAR_2, VAR_0);
 } else {
     FUNC_6(VAR_2, "unknown simple option: %s", VAR_5);
     return -1;
 }
    }

    return 0;
}
