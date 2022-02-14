
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ B ;



__attribute__((used)) static inline uint64_t
FUNC_0(const void *VAR_0, size_t VAR_1)
{
    const uint32_t *VAR_2 = (const uint32_t *) ((uintptr_t)(VAR_0) + (2 * VAR_1 - 1) * 64);

    return (((uint64_t)(VAR_2[1]) << 32) + VAR_2[0]);
}
