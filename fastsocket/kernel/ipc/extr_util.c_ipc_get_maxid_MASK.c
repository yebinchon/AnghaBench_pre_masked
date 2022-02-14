
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int dummy; } ;
struct ipc_ids {int in_use; int ipcs_idr; } ;


 int VAR_0 ;
 struct kern_ipc_perm* FUNC_0 (int *,int) ;

int FUNC_1(struct ipc_ids *VAR_1)
{
 struct kern_ipc_perm *VAR_2;
 int VAR_3 = -1;
 int VAR_4, VAR_5;

 if (VAR_1->in_use == 0)
  return -1;

 if (VAR_1->in_use == VAR_0)
  return VAR_0 - 1;


 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_4 < VAR_1->in_use; VAR_5++) {
  VAR_2 = FUNC_0(&VAR_1->ipcs_idr, VAR_5);
  if (VAR_2 != ((void*)0)) {
   VAR_3 = VAR_5;
   VAR_4++;
  }
 }
 return VAR_3;
}
