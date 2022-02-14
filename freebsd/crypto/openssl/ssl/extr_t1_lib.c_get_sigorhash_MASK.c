
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(int *VAR_5, int *VAR_6, const char *VAR_7)
{
    if (FUNC_2(VAR_7, "RSA") == 0) {
        *VAR_5 = VAR_2;
    } else if (FUNC_2(VAR_7, "RSA-PSS") == 0 || FUNC_2(VAR_7, "PSS") == 0) {
        *VAR_5 = VAR_3;
    } else if (FUNC_2(VAR_7, "DSA") == 0) {
        *VAR_5 = VAR_0;
    } else if (FUNC_2(VAR_7, "ECDSA") == 0) {
        *VAR_5 = VAR_1;
    } else {
        *VAR_6 = FUNC_1(VAR_7);
        if (*VAR_6 == VAR_4)
            *VAR_6 = FUNC_0(VAR_7);
    }
}
