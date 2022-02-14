
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_0, "Usage: modpipe -w [-m modspec ...] < in > out\n");
 FUNC_1(VAR_0, "modspec is one of:\n");
 FUNC_1(VAR_0, "    xor:offset:value       - XOR \"value\" at \"offset\"\n");
 FUNC_1(VAR_0, "    andor:offset:val1:val2 - AND \"val1\" then OR \"val2\" at \"offset\"\n");
 FUNC_0(1);
}
