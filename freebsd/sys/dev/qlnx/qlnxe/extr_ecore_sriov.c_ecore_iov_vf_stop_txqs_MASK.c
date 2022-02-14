
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct ecore_vf_queue {TYPE_1__* cids; } ;
struct ecore_vf_info {struct ecore_vf_queue* vf_queues; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ p_cid; int b_is_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_vf_info*,size_t,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_4,
         struct ecore_vf_info *VAR_5,
         u16 VAR_6,
         u8 VAR_7)
{
 struct ecore_vf_queue *VAR_8;
 enum _ecore_status_t VAR_9 = VAR_2;

 if (!FUNC_1(VAR_4, VAR_5, VAR_6,
        VAR_1))
  return VAR_0;

 VAR_8 = &VAR_5->vf_queues[VAR_6];
 if (!VAR_8->cids[VAR_7].p_cid ||
     !VAR_8->cids[VAR_7].b_is_tx)
  return VAR_0;

 VAR_9 = FUNC_0(VAR_4,
         VAR_8->cids[VAR_7].p_cid);
 if (VAR_9 != VAR_2)
  return VAR_9;

 VAR_8->cids[VAR_7].p_cid = VAR_3;
 return VAR_2;
}
