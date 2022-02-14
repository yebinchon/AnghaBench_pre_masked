
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union al_udma_desc {int dummy; } al_udma_desc ;
typedef size_t uint32_t ;
struct al_udma_q {size_t cdesc_size; size_t size; void* cdesc_base_ptr; void* desc_base_ptr; } ;
struct al_udma {struct al_udma_q* udma_q; } ;
typedef enum al_udma_ring_type { ____Placeholder_al_udma_ring_type } al_udma_ring_type ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,...) ;

void FUNC_1(struct al_udma *VAR_2, uint32_t VAR_3,
  enum al_udma_ring_type VAR_4)
{
 struct al_udma_q *VAR_5;
 uint32_t VAR_6;
 void *VAR_7;
 uint32_t VAR_8;

 if (!VAR_2)
  return;

 if (VAR_3 >= VAR_1)
  return;

 VAR_5 = &VAR_2->udma_q[VAR_3];
 if (VAR_4 == VAR_0) {
  VAR_7 = VAR_5->desc_base_ptr;
  VAR_6 = sizeof(union al_udma_desc);
  if (VAR_7)
   FUNC_0("Q[%d] submission ring pointers:\n", VAR_3);
  else {
   FUNC_0("Q[%d] submission ring is not allocated\n", VAR_3);
   return;
  }
 } else {
  VAR_7 = VAR_5->cdesc_base_ptr;
  VAR_6 = VAR_5->cdesc_size;
  if (VAR_7)
   FUNC_0("Q[%d] completion ring pointers:\n", VAR_3);
  else {
   FUNC_0("Q[%d] completion ring is not allocated\n", VAR_3);
   return;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->size; VAR_8++) {
  uint32_t *VAR_9 = (void*)((uintptr_t)VAR_7 + VAR_8 * VAR_6);
  if (VAR_6 == 16)
   FUNC_0("[%04d](%p): %08x %08x %08x %08x\n",
     VAR_8,
     VAR_9,
     (uint32_t)*VAR_9,
     (uint32_t)*(VAR_9+1),
     (uint32_t)*(VAR_9+2),
     (uint32_t)*(VAR_9+3));
  else if (VAR_6 == 8)
   FUNC_0("[%04d](%p): %08x %08x\n",
     VAR_8,
     VAR_9,
     (uint32_t)*VAR_9,
     (uint32_t)*(VAR_9+1));
  else if (VAR_6 == 4)
   FUNC_0("[%04d](%p): %08x\n",
     VAR_8,
     VAR_9,
     (uint32_t)*VAR_9);
  else
   break;
 }
}
