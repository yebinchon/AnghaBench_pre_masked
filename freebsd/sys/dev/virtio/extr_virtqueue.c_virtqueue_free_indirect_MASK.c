
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vq_desc_extra {scalar_t__ indirect_paddr; int * indirect; } ;
struct virtqueue {int vq_nentries; scalar_t__ vq_indirect_mem_size; int vq_flags; struct vq_desc_extra* vq_descx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct virtqueue *VAR_2)
{
 struct vq_desc_extra *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->vq_nentries; VAR_4++) {
  VAR_3 = &VAR_2->vq_descx[VAR_4];

  if (VAR_3->indirect == ((void*)0))
   break;

  FUNC_0(VAR_3->indirect, VAR_0);
  VAR_3->indirect = ((void*)0);
  VAR_3->indirect_paddr = 0;
 }

 VAR_2->vq_flags &= ~VAR_1;
 VAR_2->vq_indirect_mem_size = 0;
}
