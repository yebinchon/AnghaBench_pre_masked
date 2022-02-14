
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_desc {int next; } ;
struct virtqueue {int vq_max_indirect_size; int vq_indirect_mem_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct vring_desc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct virtqueue *VAR_1,
    struct vring_desc *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, VAR_1->vq_indirect_mem_size);

 for (VAR_3 = 0; VAR_3 < VAR_1->vq_max_indirect_size - 1; VAR_3++)
  VAR_2[VAR_3].next = VAR_3 + 1;
 VAR_2[VAR_3].next = VAR_0;
}
