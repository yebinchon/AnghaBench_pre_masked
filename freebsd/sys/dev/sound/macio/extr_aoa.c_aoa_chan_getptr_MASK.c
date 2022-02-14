
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct aoa_dma {int slot; int blksz; int running; } ;
typedef int kobj_t ;



__attribute__((used)) static u_int32_t
FUNC_0(kobj_t VAR_0, void *VAR_1)
{
 struct aoa_dma *VAR_2 = VAR_1;

 if (!VAR_2->running)
  return (0);

 return (VAR_2->slot * VAR_2->blksz);
}
