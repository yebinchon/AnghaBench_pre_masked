
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ooo_opaque {int dummy; } ;
struct ecore_ooo_isle {int dummy; } ;
struct TYPE_8__ {int num_of_cqes; void* p_cqes; } ;
struct ecore_ooo_info {int cid_base; int max_num_archipelagos; struct ecore_ooo_info* p_isles_mem; struct ecore_ooo_info* p_archipelagos_mem; TYPE_4__ ooo_history; int isles_list; int free_isles_list; int list_entry; int buffers_list; int ready_buffers_list; int free_buffers_list; } ;
struct ecore_ooo_archipelago {int dummy; } ;
struct TYPE_6__ {int num_cons; } ;
struct TYPE_7__ {TYPE_2__ iscsi_pf_params; } ;
struct TYPE_5__ {int personality; } ;
struct ecore_hwfn {int p_dev; struct ecore_ooo_info* p_ooo_info; TYPE_3__ pf_params; TYPE_1__ hw_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct ecore_ooo_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_6 ;
 void* FUNC_4 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_6 (struct ecore_hwfn*,int ) ;

enum _ecore_status_t FUNC_7(struct ecore_hwfn *VAR_9)
{
 u16 VAR_10 = 0, VAR_11;
 struct ecore_ooo_info *VAR_12;
 u16 VAR_13 = 0;
 u32 VAR_14;

 switch (VAR_9->hw_info.personality) {
 case 128:
  VAR_10 =
   VAR_9->pf_params.iscsi_pf_params.num_cons;
  VAR_11 =(u16)FUNC_6(VAR_9,
            VAR_7);
  break;
 case 129:
 case 130:
  VAR_10 =
   (u16)FUNC_5(VAR_9,
          VAR_8,
          VAR_6);
  VAR_11 = (u16)FUNC_6(VAR_9,
             VAR_8);
  break;
 default:
  FUNC_0(VAR_9, 1,
     "Failed to allocate ecore_ooo_info: unknown personalization\n");
  return VAR_0;
 }

 VAR_13 = VAR_1 + VAR_10;

 if (!VAR_10) {
  FUNC_0(VAR_9, 1,
     "Failed to allocate ecore_ooo_info: unknown amount of connections\n");
  return VAR_0;
 }

 VAR_12 = FUNC_4(VAR_9->p_dev, VAR_5,
     sizeof(*VAR_12));
 if (!VAR_12) {
  FUNC_0(VAR_9, 1, "Failed to allocate ecore_ooo_info\n");
  return VAR_3;
 }
 VAR_12->cid_base = VAR_11;
 VAR_12->max_num_archipelagos = VAR_10;

 FUNC_2(&VAR_12->free_buffers_list);
 FUNC_2(&VAR_12->ready_buffers_list);
 FUNC_2(&VAR_12->free_isles_list);

 VAR_12->p_isles_mem =
  FUNC_4(VAR_9->p_dev, VAR_5,
       sizeof(struct ecore_ooo_isle) *
       VAR_13);
 if (!VAR_12->p_isles_mem) {
  FUNC_0(VAR_9,1,
     "Failed to allocate ecore_ooo_info (isles)\n");
  goto no_isles_mem;
 }

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  FUNC_2(&VAR_12->p_isles_mem[VAR_14].buffers_list);
  FUNC_3(&VAR_12->p_isles_mem[VAR_14].list_entry,
        &VAR_12->free_isles_list);
 }

 VAR_12->p_archipelagos_mem =
  FUNC_4(VAR_9->p_dev, VAR_5,
       sizeof(struct ecore_ooo_archipelago) *
       VAR_10);
 if (!VAR_12->p_archipelagos_mem) {
  FUNC_0(VAR_9,1,
    "Failed to allocate ecore_ooo_info(archpelagos)\n");
  goto no_archipelagos_mem;
 }

 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  FUNC_2(&VAR_12->p_archipelagos_mem[VAR_14].isles_list);
 }

 VAR_12->ooo_history.p_cqes =
  FUNC_4(VAR_9->p_dev, VAR_5,
       sizeof(struct ooo_opaque) *
       VAR_2);
 if (!VAR_12->ooo_history.p_cqes) {
  FUNC_0(VAR_9,1,
     "Failed to allocate ecore_ooo_info(history)\n");
  goto no_history_mem;
 }
 VAR_12->ooo_history.num_of_cqes =
  VAR_2;

 VAR_9->p_ooo_info = VAR_12;
 return VAR_4;

no_history_mem:
 FUNC_1(VAR_9->p_dev, VAR_12->p_archipelagos_mem);
no_archipelagos_mem:
 FUNC_1(VAR_9->p_dev, VAR_12->p_isles_mem);
no_isles_mem:
 FUNC_1(VAR_9->p_dev, VAR_12);
 return VAR_3;
}
