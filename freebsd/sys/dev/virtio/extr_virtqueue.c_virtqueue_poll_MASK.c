
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct virtqueue {int vq_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (struct virtqueue*,int *) ;

void *
FUNC_3(struct virtqueue *VAR_0, uint32_t *VAR_1)
{
 void *VAR_2;

 FUNC_0(VAR_0->vq_dev);
 while ((VAR_2 = FUNC_2(VAR_0, VAR_1)) == ((void*)0)) {
  FUNC_1();
  FUNC_0(VAR_0->vq_dev);
 }

 return (VAR_2);
}
