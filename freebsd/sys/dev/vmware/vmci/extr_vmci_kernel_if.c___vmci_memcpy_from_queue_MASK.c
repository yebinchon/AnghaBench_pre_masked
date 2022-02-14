
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
struct vmci_queue_kernel_if {TYPE_1__* dmas; } ;
struct vmci_queue {struct vmci_queue_kernel_if* kernel_if; } ;
struct iovec {int dummy; } ;
struct TYPE_2__ {scalar_t__ dma_vaddr; } ;


 int FUNC_0 (void*) ;
 size_t FUNC_1 (size_t,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (struct iovec*,int *,size_t) ;

__attribute__((used)) static int
FUNC_4(void *VAR_2, const struct vmci_queue *VAR_3,
    uint64_t VAR_4, size_t VAR_5, bool VAR_6)
{
 struct vmci_queue_kernel_if *VAR_7 = VAR_3->kernel_if;
 size_t VAR_8 = 0;

 while (VAR_8 < VAR_5) {
  const uint64_t VAR_9 =
      (VAR_4 + VAR_8) / VAR_0;
  const size_t VAR_10 =
      (VAR_4 + VAR_8) & (VAR_0 - 1);
  void *VAR_11;
  size_t VAR_12;


  VAR_11 = (void *)VAR_7->dmas[VAR_9 + 1].dma_vaddr;

  FUNC_0(VAR_11);




  VAR_12 = FUNC_1(VAR_0 - VAR_10, VAR_5 - VAR_8);

  if (VAR_6) {
   struct iovec *VAR_13 = (struct iovec *)VAR_2;


   FUNC_3(VAR_13, (uint8_t *)VAR_11 +
       VAR_10, VAR_12);
  } else
   FUNC_2((uint8_t *)VAR_2 + VAR_8,
       (uint8_t *)VAR_11 + VAR_10, VAR_12);

  VAR_8 += VAR_12;
 }

 return (VAR_1);
}
