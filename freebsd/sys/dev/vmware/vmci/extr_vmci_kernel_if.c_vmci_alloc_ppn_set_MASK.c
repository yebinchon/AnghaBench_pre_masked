
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long* vmci_ppn_list ;
typedef int uint64_t ;
struct vmci_queue {TYPE_2__* kernel_if; } ;
struct ppn_set {int initialized; int num_produce_pages; int num_consume_pages; unsigned long* produce_ppns; unsigned long* consume_ppns; } ;
typedef int pfn ;
struct TYPE_4__ {TYPE_1__* dmas; } ;
struct TYPE_3__ {unsigned long dma_paddr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long* FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned long*,int) ;

int
FUNC_2(void *VAR_6, uint64_t VAR_7, void *VAR_8,
    uint64_t VAR_9, struct ppn_set *VAR_10)
{
 struct vmci_queue *VAR_11 = VAR_8;
 struct vmci_queue *VAR_12 = VAR_6;
 vmci_ppn_list VAR_13;
 vmci_ppn_list VAR_14;
 uint64_t VAR_15;

 if (!VAR_12 || !VAR_7 || !VAR_11 ||
     !VAR_9 || !VAR_10)
  return (VAR_2);

 if (VAR_10->initialized)
  return (VAR_1);

 VAR_14 =
     FUNC_0(VAR_7 * sizeof(*VAR_14),
     VAR_4);
 if (!VAR_14)
  return (VAR_3);

 VAR_13 =
     FUNC_0(VAR_9 * sizeof(*VAR_13),
     VAR_4);
 if (!VAR_13) {
  FUNC_1(VAR_14,
      VAR_7 * sizeof(*VAR_14));
  return (VAR_3);
 }

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  unsigned long VAR_16;

  VAR_14[VAR_15] =
      VAR_16 = VAR_12->kernel_if->dmas[VAR_15].dma_paddr >> VAR_0;





  if (sizeof(VAR_16) >
      sizeof(*VAR_14) && VAR_16 != VAR_14[VAR_15])
   goto ppn_error;
 }
 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  unsigned long VAR_17;

  VAR_13[VAR_15] =
      VAR_17 = VAR_11->kernel_if->dmas[VAR_15].dma_paddr >> VAR_0;





  if (sizeof(VAR_17) >
      sizeof(*VAR_13) && VAR_17 != VAR_13[VAR_15])
   goto ppn_error;

 }

 VAR_10->num_produce_pages = VAR_7;
 VAR_10->num_consume_pages = VAR_9;
 VAR_10->produce_ppns = VAR_14;
 VAR_10->consume_ppns = VAR_13;
 VAR_10->initialized = 1;
 return (VAR_5);

ppn_error:
 FUNC_1(VAR_14, VAR_7 *
     sizeof(*VAR_14));
 FUNC_1(VAR_13, VAR_9 *
     sizeof(*VAR_13));
 return (VAR_2);
}
