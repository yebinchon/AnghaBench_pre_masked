
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char const) ;

void
FUNC_1(const unsigned char *VAR_0, int VAR_1)
{
    if (VAR_1 > 16)
 VAR_1 = 16;
    while (VAR_1-- > 0) {
 FUNC_0(" %02x", *VAR_0);
 ++VAR_0;
    }
}
