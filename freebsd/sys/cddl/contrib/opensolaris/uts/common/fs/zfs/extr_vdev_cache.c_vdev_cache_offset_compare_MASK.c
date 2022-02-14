
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ve_offset; } ;
typedef TYPE_1__ vdev_cache_entry_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const vdev_cache_entry_t *VAR_2 = (const vdev_cache_entry_t *)VAR_0;
 const vdev_cache_entry_t *VAR_3 = (const vdev_cache_entry_t *)VAR_1;

 return (FUNC_0(VAR_2->ve_offset, VAR_3->ve_offset));
}
