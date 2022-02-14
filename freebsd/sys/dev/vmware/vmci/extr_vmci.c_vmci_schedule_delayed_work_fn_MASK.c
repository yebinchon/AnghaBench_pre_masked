
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmci_work_fn ;
struct vmci_delayed_work_info {void* data; int * work_fn; } ;
struct TYPE_2__ {int vmci_delayed_work_task; int vmci_delayed_work_lock; int vmci_delayed_work_infos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;
 struct vmci_delayed_work_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct vmci_delayed_work_info*,int ) ;
 TYPE_1__* VAR_5 ;

int
FUNC_5(vmci_work_fn *VAR_6, void *VAR_7)
{
 struct vmci_delayed_work_info *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8),
     VAR_1);

 if (!VAR_8)
  return (VAR_0);

 VAR_8->work_fn = VAR_6;
 VAR_8->data = VAR_7;
 FUNC_0(&VAR_5->vmci_delayed_work_lock);
 FUNC_4(&VAR_5->vmci_delayed_work_infos,
     VAR_8, VAR_3);
 FUNC_1(&VAR_5->vmci_delayed_work_lock);

 FUNC_2(VAR_4,
     &VAR_5->vmci_delayed_work_task);

 return (VAR_2);
}
