
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {scalar_t__ key; } ;
struct ipc_ids {int in_use; int ipcs_idr; } ;
typedef scalar_t__ key_t ;


 struct kern_ipc_perm* FUNC_0 (int *,int) ;
 int FUNC_1 (struct kern_ipc_perm*) ;

__attribute__((used)) static struct kern_ipc_perm *FUNC_2(struct ipc_ids *VAR_0, key_t VAR_1)
{
 struct kern_ipc_perm *VAR_2;
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = 0; VAR_4 < VAR_0->in_use; VAR_3++) {
  VAR_2 = FUNC_0(&VAR_0->ipcs_idr, VAR_3);

  if (VAR_2 == ((void*)0))
   continue;

  if (VAR_2->key != VAR_1) {
   VAR_4++;
   continue;
  }

  FUNC_1(VAR_2);
  return VAR_2;
 }

 return ((void*)0);
}
