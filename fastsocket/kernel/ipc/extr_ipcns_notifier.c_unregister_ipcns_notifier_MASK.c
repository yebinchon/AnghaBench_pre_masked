
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_namespace {scalar_t__ auto_msgmni; int ipcns_nb; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;

void FUNC_1(struct ipc_namespace *VAR_1)
{
 FUNC_0(&VAR_0, &VAR_1->ipcns_nb);
 VAR_1->auto_msgmni = 0;
}
