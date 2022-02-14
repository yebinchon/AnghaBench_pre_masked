
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int head; int alloc_buf_count; int lock; } ;
struct octeon_device {TYPE_1__ sc_buf_pool; } ;
struct lio_soft_command {int node; int size; scalar_t__ dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (int *,char*,int *,int ) ;

int
FUNC_6(struct octeon_device *VAR_4)
{
 struct lio_soft_command *VAR_5;
 uint64_t VAR_6;
 int VAR_7;

 FUNC_0(&VAR_4->sc_buf_pool.head);
 FUNC_5(&VAR_4->sc_buf_pool.lock, "sc_pool_lock", ((void*)0), VAR_2);
 FUNC_2(&VAR_4->sc_buf_pool.alloc_buf_count, 0);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = (struct lio_soft_command *)
   FUNC_3(VAR_1, (vm_paddr_t *)&VAR_6);
  if (VAR_5 == ((void*)0)) {
   FUNC_4(VAR_4);
   return (1);
  }

  VAR_5->dma_addr = VAR_6;
  VAR_5->size = VAR_1;

  FUNC_1(&VAR_4->sc_buf_pool.head, &VAR_5->node, VAR_3);
 }

 return (0);
}
