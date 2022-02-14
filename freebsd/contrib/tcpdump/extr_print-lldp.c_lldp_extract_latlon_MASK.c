
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static uint64_t
FUNC_1(const u_char *VAR_0)
{
    uint64_t VAR_1;

    VAR_1 = *VAR_0 & 0x3;
    VAR_1 = (VAR_1 << 32) | FUNC_0(VAR_0+1);

    return VAR_1;
}
