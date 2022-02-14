
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vring {TYPE_1__* desc; } ;
struct virtqueue {char* vq_ring_mem; int vq_nentries; int vq_alignment; struct vring vq_ring; } ;
struct TYPE_2__ {int next; } ;


 int VAR_0 ;
 int FUNC_0 (struct vring*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct virtqueue *VAR_1)
{
 struct vring *VAR_2;
 char *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = VAR_1->vq_ring_mem;
 VAR_5 = VAR_1->vq_nentries;
 VAR_2 = &VAR_1->vq_ring;

 FUNC_0(VAR_2, VAR_5, VAR_3, VAR_1->vq_alignment);

 for (VAR_4 = 0; VAR_4 < VAR_5 - 1; VAR_4++)
  VAR_2->desc[VAR_4].next = VAR_4 + 1;
 VAR_2->desc[VAR_4].next = VAR_0;
}
