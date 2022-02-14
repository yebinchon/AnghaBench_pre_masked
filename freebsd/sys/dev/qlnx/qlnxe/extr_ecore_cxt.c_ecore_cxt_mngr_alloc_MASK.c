
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_8__ {int val; void* reg; } ;
struct TYPE_7__ {void* reg; } ;
struct TYPE_6__ {void* reg; } ;
struct ecore_ilt_client_cfg {TYPE_3__ p_size; TYPE_2__ last; TYPE_1__ first; } ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; TYPE_5__* p_dev; } ;
struct ecore_cxt_mngr {int mutex; int vf_count; int * task_type_size; struct ecore_ilt_client_cfg* clients; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_10__ {TYPE_4__* p_iov_info; int ilt_page_size; } ;
struct TYPE_9__ {int total_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ,int ) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct ecore_hwfn*,int *) ;
 int FUNC_3 (int *) ;
 struct ecore_cxt_mngr* FUNC_4 (TYPE_5__*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct ecore_hwfn*) ;
 int FUNC_6 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_7(struct ecore_hwfn *VAR_19)
{
 struct ecore_ilt_client_cfg *VAR_20;
 struct ecore_cxt_mngr *VAR_21;
 u32 VAR_22;

 VAR_21 = FUNC_4(VAR_19->p_dev, VAR_5, sizeof(*VAR_21));
 if (!VAR_21) {
  FUNC_0(VAR_19, 0, "Failed to allocate `struct ecore_cxt_mngr'\n");
  return VAR_2;
 }


 VAR_20 = VAR_21->clients;
 VAR_20[VAR_6].first.reg = FUNC_1(VAR_0, VAR_4);
 VAR_20[VAR_6].last.reg = FUNC_1(VAR_0, VAR_13);
 VAR_20[VAR_6].p_size.reg = FUNC_1(VAR_0, VAR_14);

 VAR_20[VAR_9].first.reg = FUNC_1(VAR_15, VAR_4);
 VAR_20[VAR_9].last.reg = FUNC_1(VAR_15, VAR_13);
 VAR_20[VAR_9].p_size.reg = FUNC_1(VAR_15, VAR_14);

 VAR_20[VAR_11].first.reg = FUNC_1(VAR_17, VAR_4);
 VAR_20[VAR_11].last.reg = FUNC_1(VAR_17, VAR_13);
 VAR_20[VAR_11].p_size.reg = FUNC_1(VAR_17, VAR_14);

 VAR_20[VAR_10].first.reg = FUNC_1(VAR_16, VAR_4);
 VAR_20[VAR_10].last.reg = FUNC_1(VAR_16, VAR_13);
 VAR_20[VAR_10].p_size.reg = FUNC_1(VAR_16, VAR_14);

 VAR_20[VAR_7].first.reg = FUNC_1(VAR_1, VAR_4);
 VAR_20[VAR_7].last.reg = FUNC_1(VAR_1, VAR_13);
 VAR_20[VAR_7].p_size.reg = FUNC_1(VAR_1, VAR_14);

 VAR_20[VAR_12].first.reg = FUNC_1(VAR_18, VAR_4);
 VAR_20[VAR_12].last.reg = FUNC_1(VAR_18, VAR_13);
 VAR_20[VAR_12].p_size.reg = FUNC_1(VAR_18, VAR_14);


 for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++)
  VAR_21->clients[VAR_22].p_size.val = VAR_19->p_dev->ilt_page_size;


 VAR_21->task_type_size[0] = FUNC_5(VAR_19);
 VAR_21->task_type_size[1] = FUNC_6(VAR_19);

 if (VAR_19->p_dev->p_iov_info)
  VAR_21->vf_count = VAR_19->p_dev->p_iov_info->total_vfs;





 FUNC_3(&VAR_21->mutex);


 VAR_19->p_cxt_mngr = VAR_21;

 return VAR_3;
}
