
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int lock; scalar_t__ deleted; } ;
struct ipc_ids {int ipcs_idr; } ;


 int VAR_0 ;
 struct kern_ipc_perm* FUNC_0 (int ) ;
 struct kern_ipc_perm* FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct kern_ipc_perm *FUNC_7(struct ipc_ids *VAR_1, int VAR_2)
{
 struct kern_ipc_perm *VAR_3;
 int VAR_4 = FUNC_2(VAR_2);

 FUNC_3();
 VAR_3 = FUNC_1(&VAR_1->ipcs_idr, VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_4();
  return FUNC_0(-VAR_0);
 }

 FUNC_5(&VAR_3->lock);




 if (VAR_3->deleted) {
  FUNC_6(&VAR_3->lock);
  FUNC_4();
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
