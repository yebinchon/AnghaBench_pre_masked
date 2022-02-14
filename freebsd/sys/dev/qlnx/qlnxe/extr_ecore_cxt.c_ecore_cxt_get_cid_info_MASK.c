
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {TYPE_3__* ilt_shadow; TYPE_2__* clients; } ;
struct ecore_cxt_info {size_t iid; int type; int * p_cxt; } ;
struct ecore_cid_acquired_map {int dummy; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {scalar_t__ p_virt; } ;
struct TYPE_4__ {size_t val; } ;
struct TYPE_5__ {TYPE_1__ p_size; } ;


 size_t FUNC_0 (struct ecore_hwfn*) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,size_t,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_2 (size_t) ;
 struct ecore_cid_acquired_map* VAR_6 ;
 int FUNC_3 (struct ecore_hwfn*,size_t,int ,int*,struct ecore_cid_acquired_map**) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_7,
         struct ecore_cxt_info *VAR_8)
{
 struct ecore_cxt_mngr *VAR_9 = VAR_7->p_cxt_mngr;
 struct ecore_cid_acquired_map *VAR_10 = VAR_6;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 enum protocol_type VAR_15;
 bool VAR_16;


 VAR_16 = FUNC_3(VAR_7, VAR_8->iid,
       VAR_0,
       &VAR_15, &VAR_10);

 if (!VAR_16)
  return VAR_1;


 VAR_8->type = VAR_15;


 VAR_12 = VAR_7->p_cxt_mngr->clients[VAR_5].p_size.val;

 VAR_11 = FUNC_0(VAR_7);
 VAR_13 = FUNC_2(VAR_12) / VAR_11;
 VAR_14 = VAR_8->iid / VAR_13;


 if (!VAR_9->ilt_shadow[VAR_14].p_virt)
  return VAR_1;

 VAR_8->p_cxt = (u8 *)VAR_9->ilt_shadow[VAR_14].p_virt +
         VAR_8->iid % VAR_13 * VAR_11;

 FUNC_1(VAR_7, (VAR_3 | VAR_2),
     "Accessing ILT shadow[%d]: CXT pointer is at %p (for iid %d)\n",
     (VAR_8->iid / VAR_13), VAR_8->p_cxt, VAR_8->iid);

 return VAR_4;
}
