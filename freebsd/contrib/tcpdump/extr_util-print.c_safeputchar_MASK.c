
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int *) ;

void
FUNC_2(netdissect_options *VAR_0,
            const u_char VAR_1)
{
 FUNC_1((VAR_0, (VAR_1 < 0x80 && FUNC_0(VAR_1)) ? "%c" : "\\0x%02x", VAR_1));
}
