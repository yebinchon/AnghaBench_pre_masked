
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {TYPE_1__* used; } ;
struct virtqueue {scalar_t__ vq_used_cons_idx; scalar_t__ vq_nentries; TYPE_2__ vq_ring; } ;
struct TYPE_3__ {scalar_t__ idx; } ;


 int FUNC_0 (struct virtqueue*,int,char*) ;

int
FUNC_1(struct virtqueue *VAR_0)
{
 uint16_t VAR_1, VAR_2;

 VAR_1 = VAR_0->vq_ring.used->idx;

 VAR_2 = (uint16_t)(VAR_1 - VAR_0->vq_used_cons_idx);
 FUNC_0(VAR_0, VAR_2 <= VAR_0->vq_nentries, "used more than available");

 return (VAR_2);
}
