
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {scalar_t__ vq_queued_cnt; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct virtqueue*) ;

void
FUNC_3(struct virtqueue *VAR_0)
{


 FUNC_0();

 if (FUNC_1(VAR_0))
  FUNC_2(VAR_0);
 VAR_0->vq_queued_cnt = 0;
}
