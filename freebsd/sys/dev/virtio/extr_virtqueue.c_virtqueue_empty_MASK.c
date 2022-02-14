
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {scalar_t__ vq_nentries; scalar_t__ vq_free_cnt; } ;



int
FUNC_0(struct virtqueue *VAR_0)
{

 return (VAR_0->vq_nentries == VAR_0->vq_free_cnt);
}
