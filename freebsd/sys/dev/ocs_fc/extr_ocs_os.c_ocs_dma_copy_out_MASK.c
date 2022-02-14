
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ len; int virt; } ;
typedef TYPE_1__ ocs_dma_t ;
typedef int int32_t ;


 int FUNC_0 (void*,int ,scalar_t__) ;

int32_t
FUNC_1(ocs_dma_t *VAR_0, void *VAR_1, uint32_t VAR_2)
{
 if (!VAR_0)
  return -1;
 if (!VAR_1)
  return -1;
 if (VAR_2 == 0)
  return 0;
 if (VAR_2 > VAR_0->len)
  VAR_2 = VAR_0->len;
 FUNC_0(VAR_1, VAR_0->virt, VAR_2);
 return VAR_2;
}
