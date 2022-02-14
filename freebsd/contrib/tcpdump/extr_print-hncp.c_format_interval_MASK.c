
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
    static char VAR_1[4][sizeof("0000000.000s")];
    static int VAR_2 = 0;
    VAR_2 = (VAR_2 + 1) % 4;
    FUNC_0(VAR_1[VAR_2], sizeof(VAR_1[VAR_2]), "%u.%03us", VAR_0 / 1000, VAR_0 % 1000);
    return VAR_1[VAR_2];
}
