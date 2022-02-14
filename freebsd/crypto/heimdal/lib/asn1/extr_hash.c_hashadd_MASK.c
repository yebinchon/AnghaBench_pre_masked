
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

unsigned
FUNC_1(const char *VAR_0)
{
    unsigned VAR_1;

    FUNC_0(VAR_0);

    for (VAR_1 = 0; *VAR_0; ++VAR_0)
 VAR_1 += *VAR_0;
    return VAR_1;
}
