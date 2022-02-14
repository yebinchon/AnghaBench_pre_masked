
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef scalar_t__ uint64_t ;
struct octeon_device {int dummy; } ;
struct lio_sg_entry {int dummy; } ;
struct lio_gather {int node; scalar_t__ sg_dma_ptr; struct lio_sg_entry* sg; } ;
struct lio {int glist_entry_size; int tx_qsize; int * ghead; scalar_t__* glists_dma_base; int ** glists_virt_base; int * glist_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_6 ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (struct octeon_device*,struct lio*) ;
 int * FUNC_6 (int,int *) ;
 void* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct octeon_device *VAR_7, struct lio *VAR_8, int VAR_9)
{
 struct lio_gather *VAR_10;
 int VAR_11, VAR_12;

 VAR_8->glist_lock = FUNC_7(VAR_9 * sizeof(*VAR_8->glist_lock), VAR_3,
     VAR_4 | VAR_5);
 if (VAR_8->glist_lock == ((void*)0))
  return (1);

 VAR_8->ghead = FUNC_7(VAR_9 * sizeof(*VAR_8->ghead), VAR_3,
       VAR_4 | VAR_5);
 if (VAR_8->ghead == ((void*)0)) {
  FUNC_4((void *)VAR_8->glist_lock, VAR_3);
  VAR_8->glist_lock = ((void*)0);
  return (1);
 }

 VAR_8->glist_entry_size = FUNC_1((FUNC_0(VAR_0) >> 2) *
      VAR_1);




 VAR_8->glists_virt_base = FUNC_7(VAR_9 * sizeof(void *), VAR_3,
           VAR_4 | VAR_5);
 VAR_8->glists_dma_base = FUNC_7(VAR_9 * sizeof(vm_paddr_t), VAR_3,
          VAR_4 | VAR_5);
 if ((VAR_8->glists_virt_base == ((void*)0)) || (VAR_8->glists_dma_base == ((void*)0))) {
  FUNC_5(VAR_7, VAR_8);
  return (1);
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  FUNC_8(&VAR_8->glist_lock[VAR_11], "glist_lock", ((void*)0), VAR_2);

  FUNC_2(&VAR_8->ghead[VAR_11]);

  VAR_8->glists_virt_base[VAR_11] =
      FUNC_6(VAR_8->glist_entry_size * VAR_8->tx_qsize,
      (vm_paddr_t *)&VAR_8->glists_dma_base[VAR_11]);
  if (VAR_8->glists_virt_base[VAR_11] == ((void*)0)) {
   FUNC_5(VAR_7, VAR_8);
   return (1);
  }

  for (VAR_12 = 0; VAR_12 < VAR_8->tx_qsize; VAR_12++) {
   VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_3, VAR_4 | VAR_5);
   if (VAR_10 == ((void*)0))
    break;

   VAR_10->sg = (struct lio_sg_entry *)(uintptr_t)
       ((uint64_t)(uintptr_t)VAR_8->glists_virt_base[VAR_11] +
        (VAR_12 * VAR_8->glist_entry_size));
   VAR_10->sg_dma_ptr = (uint64_t)VAR_8->glists_dma_base[VAR_11] +
    (VAR_12 * VAR_8->glist_entry_size);
   FUNC_3(&VAR_8->ghead[VAR_11], &VAR_10->node, VAR_6);
  }

  if (VAR_12 != VAR_8->tx_qsize) {
   FUNC_5(VAR_7, VAR_8);
   return (1);
  }
 }

 return (0);
}
