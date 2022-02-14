
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bitmap_ipmac {int dsize; scalar_t__ members; } ;



__attribute__((used)) static inline void *
FUNC_0(const struct bitmap_ipmac *VAR_0, u32 VAR_1)
{
 return (void *)((char *)VAR_0->members + VAR_1 * VAR_0->dsize);
}
