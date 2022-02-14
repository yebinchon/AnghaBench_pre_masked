
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ve_lastused; } ;
typedef TYPE_1__ vdev_cache_entry_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void const*,void const*) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_0, const void *VAR_1)
{
 const vdev_cache_entry_t *VAR_2 = (const vdev_cache_entry_t *)VAR_0;
 const vdev_cache_entry_t *VAR_3 = (const vdev_cache_entry_t *)VAR_1;

 int VAR_4 = FUNC_0(VAR_2->ve_lastused, VAR_3->ve_lastused);
 if (FUNC_1(VAR_4))
  return (VAR_4);




 return (FUNC_2(VAR_0, VAR_1));
}
