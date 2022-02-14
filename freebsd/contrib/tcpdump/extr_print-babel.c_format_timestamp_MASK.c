
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int const,int const) ;

__attribute__((used)) static const char *
FUNC_1(const uint32_t VAR_0)
{
    static char VAR_1[sizeof("0000.000000s")];
    FUNC_0(VAR_1, sizeof(VAR_1), "%u.%06us", VAR_0 / 1000000, VAR_0 % 1000000);
    return VAR_1;
}
