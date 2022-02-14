
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int local_relpath; } ;
typedef TYPE_1__ commit_queue_item_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0,
                    const void *VAR_1)
{
  const commit_queue_item_t *VAR_2
              = *(const commit_queue_item_t **)VAR_0;
  const commit_queue_item_t *VAR_3
              = *(const commit_queue_item_t **)VAR_1;

  return FUNC_0(VAR_2->local_relpath, VAR_3->local_relpath);
}
