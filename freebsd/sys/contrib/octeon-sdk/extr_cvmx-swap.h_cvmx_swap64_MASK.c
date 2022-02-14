
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(uint64_t VAR_0)
{
    return ((VAR_0 >> 56) |
            (((VAR_0 >> 48) & 0xfful) << 8) |
            (((VAR_0 >> 40) & 0xfful) << 16) |
            (((VAR_0 >> 32) & 0xfful) << 24) |
            (((VAR_0 >> 24) & 0xfful) << 32) |
            (((VAR_0 >> 16) & 0xfful) << 40) |
            (((VAR_0 >> 8) & 0xfful) << 48) |
            (((VAR_0 >> 0) & 0xfful) << 56));
}
