
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slow_path_element {int dummy; } ;
struct ecore_spq_entry {int dummy; } ;
struct ecore_spq {int chain; int lock; int p_phys; struct ecore_spq_entry* p_virt; } ;
struct ecore_hwfn {int p_dev; struct ecore_spq* p_spq; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ecore_spq_entry* FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,struct ecore_spq*) ;
 void* VAR_6 ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,int *) ;
 struct ecore_spq* FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,int,int *,void*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

enum _ecore_status_t FUNC_8(struct ecore_hwfn *VAR_7)
{
 struct ecore_spq_entry *VAR_8 = VAR_6;
 struct ecore_spq *VAR_9 = VAR_6;
 dma_addr_t VAR_10 = 0;
 u32 VAR_11;


 VAR_9 =
     FUNC_4(VAR_7->p_dev, VAR_5, sizeof(struct ecore_spq));
 if (!VAR_9) {
  FUNC_0(VAR_7, 0, "Failed to allocate `struct ecore_spq'\n");
  return VAR_3;
 }


 if (FUNC_5(VAR_7->p_dev,
         VAR_2,
         VAR_1,
         VAR_0,
         0,
         sizeof(struct slow_path_element),
         &VAR_9->chain, VAR_6)) {
  FUNC_0(VAR_7, 0, "Failed to allocate spq chain\n");
  goto spq_allocate_fail;
 }


 VAR_11 = FUNC_7(&VAR_9->chain);
 VAR_8 = FUNC_1(VAR_7->p_dev, &VAR_10,
      VAR_11 *
      sizeof(struct ecore_spq_entry));
 if (!VAR_8) {
  goto spq_allocate_fail;
 }

 VAR_9->p_virt = VAR_8;
 VAR_9->p_phys = VAR_10;






 VAR_7->p_spq = VAR_9;
 return VAR_4;

spq_allocate_fail:
 FUNC_6(VAR_7->p_dev, &VAR_9->chain);
 FUNC_2(VAR_7->p_dev, VAR_9);
 return VAR_3;
}
