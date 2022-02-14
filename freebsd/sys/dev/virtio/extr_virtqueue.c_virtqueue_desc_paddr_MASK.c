
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct TYPE_2__ {int desc; } ;
struct virtqueue {TYPE_1__ vq_ring; } ;


 int FUNC_0 (int ) ;

vm_paddr_t
FUNC_1(struct virtqueue *VAR_0)
{

 return (FUNC_0(VAR_0->vq_ring.desc));
}
