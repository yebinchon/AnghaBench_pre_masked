
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct kern_ipc_perm {int seq; int id; int cgid; int gid; int uid; int cuid; int lock; scalar_t__ deleted; } ;
struct ipc_ids {int in_use; scalar_t__ seq; scalar_t__ seq_max; int ipcs_idr; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct kern_ipc_perm*,int*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ipc_ids* VAR_2, struct kern_ipc_perm* VAR_3, int VAR_4)
{
 uid_t VAR_5;
 gid_t VAR_6;
 int VAR_7, VAR_8;

 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;

 if (VAR_2->in_use >= VAR_4)
  return -VAR_0;

 FUNC_6(&VAR_3->lock);
 VAR_3->deleted = 0;
 FUNC_3();
 FUNC_5(&VAR_3->lock);

 VAR_8 = FUNC_1(&VAR_2->ipcs_idr, VAR_3, &VAR_7);
 if (VAR_8) {
  FUNC_7(&VAR_3->lock);
  FUNC_4();
  return VAR_8;
 }

 VAR_2->in_use++;

 FUNC_0(&VAR_5, &VAR_6);
 VAR_3->cuid = VAR_3->uid = VAR_5;
 VAR_3->gid = VAR_3->cgid = VAR_6;

 VAR_3->seq = VAR_2->seq++;
 if(VAR_2->seq > VAR_2->seq_max)
  VAR_2->seq = 0;

 VAR_3->id = FUNC_2(VAR_7, VAR_3->seq);
 return VAR_7;
}
