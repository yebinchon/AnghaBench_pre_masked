
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int * security; } ;
struct sem_array {struct kern_ipc_perm sem_perm; } ;



__attribute__((used)) static void FUNC_0(struct sem_array *VAR_0)
{
 struct kern_ipc_perm *VAR_1 = &VAR_0->sem_perm;

 VAR_1->security = ((void*)0);
}
