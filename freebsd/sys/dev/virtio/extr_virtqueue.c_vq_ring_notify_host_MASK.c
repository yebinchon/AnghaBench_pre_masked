
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int vq_queue_index; int vq_dev; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct virtqueue *VAR_0)
{

 FUNC_0(VAR_0->vq_dev, VAR_0->vq_queue_index);
}
