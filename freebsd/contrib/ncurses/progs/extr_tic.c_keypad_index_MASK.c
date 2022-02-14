
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* strchr ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static long
FUNC_1(const char *VAR_0)
{
    char *VAR_1;
    const char *VAR_2 = "PQRSwxymtuvlqrsPpn";
    int VAR_3;
    long VAR_4 = -1;

    if ((VAR_3 = FUNC_0(VAR_0)) != '\0') {
 VAR_1 = (strchr) (VAR_2, VAR_3);
 if (VAR_1 != 0)
     VAR_4 = (long) (VAR_1 - VAR_2);
    }
    return VAR_4;
}
