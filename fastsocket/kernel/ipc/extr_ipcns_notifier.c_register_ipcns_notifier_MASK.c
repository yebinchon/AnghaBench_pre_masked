
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int priority; int notifier_call; } ;
struct ipc_namespace {int auto_msgmni; TYPE_1__ ipcns_nb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int FUNC_2(struct ipc_namespace *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_3->ipcns_nb, 0, sizeof(VAR_3->ipcns_nb));
 VAR_3->ipcns_nb.notifier_call = VAR_1;
 VAR_3->ipcns_nb.priority = VAR_0;
 VAR_4 = FUNC_0(&VAR_2, &VAR_3->ipcns_nb);
 if (!VAR_4)
  VAR_3->auto_msgmni = 1;
 return VAR_4;
}
