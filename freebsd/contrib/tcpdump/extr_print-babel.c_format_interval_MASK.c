
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int const,int const) ;

__attribute__((used)) static const char *
FUNC_1(const uint16_t VAR_0)
{
    static char VAR_1[sizeof("000.00s")];

    if (VAR_0 == 0)
        return "0.0s (bogus)";
    FUNC_0(VAR_1, sizeof(VAR_1), "%u.%02us", VAR_0 / 100, VAR_0 % 100);
    return VAR_1;
}
