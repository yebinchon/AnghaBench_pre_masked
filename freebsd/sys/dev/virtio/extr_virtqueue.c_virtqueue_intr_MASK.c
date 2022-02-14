
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int vq_intrhand_arg; int (* vq_intrhand ) (int ) ;} ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct virtqueue *VAR_0)
{

 VAR_0->vq_intrhand(VAR_0->vq_intrhand_arg);
}
