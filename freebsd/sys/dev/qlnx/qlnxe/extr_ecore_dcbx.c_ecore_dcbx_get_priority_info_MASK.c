
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dcbx_results {TYPE_1__* arr; } ;
struct ecore_dcbx_app_prio {void* eth; void* fcoe; void* roce_v2; void* roce; void* iscsi; } ;
struct TYPE_2__ {void* priority; scalar_t__ enable; scalar_t__ update; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,void*,void*,void*,void*,void*) ;
 void* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1(struct ecore_hwfn *VAR_7,
        struct ecore_dcbx_app_prio *VAR_8,
        struct ecore_dcbx_results *VAR_9)
{
 u8 VAR_10;

 VAR_8->roce = VAR_5;
 VAR_8->roce_v2 = VAR_5;
 VAR_8->iscsi = VAR_5;
 VAR_8->fcoe = VAR_5;

 if (VAR_9->arr[VAR_3].update &&
     VAR_9->arr[VAR_3].enable)
  VAR_8->roce = VAR_9->arr[VAR_3].priority;

 if (VAR_9->arr[VAR_4].update &&
     VAR_9->arr[VAR_4].enable) {
  VAR_10 = VAR_9->arr[VAR_4].priority;
  VAR_8->roce_v2 = VAR_10;
 }

 if (VAR_9->arr[VAR_2].update &&
     VAR_9->arr[VAR_2].enable)
  VAR_8->iscsi = VAR_9->arr[VAR_2].priority;

 if (VAR_9->arr[VAR_1].update &&
     VAR_9->arr[VAR_1].enable)
  VAR_8->fcoe = VAR_9->arr[VAR_1].priority;

 if (VAR_9->arr[VAR_0].update &&
     VAR_9->arr[VAR_0].enable)
  VAR_8->eth = VAR_9->arr[VAR_0].priority;

 FUNC_0(VAR_7, VAR_6,
     "Priorities: iscsi %d, roce %d, roce v2 %d, fcoe %d, eth %d\n",
     VAR_8->iscsi, VAR_8->roce, VAR_8->roce_v2, VAR_8->fcoe,
     VAR_8->eth);
}
