
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static u64 FUNC_0(const unsigned char *VAR_0)
{
    return (((u64)(VAR_0[0] & 0xff)) |
            ((u64)(VAR_0[1] & 0xff) << 8) |
            ((u64)(VAR_0[2] & 0xff) << 16) |
            ((u64)(VAR_0[3] & 0xff) << 24) |
            ((u64)(VAR_0[4] & 0xff) << 32) |
            ((u64)(VAR_0[5] & 0xff) << 40) |
            ((u64)(VAR_0[6] & 0xff) << 48) |
            ((u64)(VAR_0[7] & 0xff) << 56));
}
