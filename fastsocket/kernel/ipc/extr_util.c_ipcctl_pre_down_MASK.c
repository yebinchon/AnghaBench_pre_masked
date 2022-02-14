
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct kern_ipc_perm {scalar_t__ cuid; scalar_t__ uid; } ;
struct ipc_ids {int rw_mutex; } ;
struct ipc64_perm {int mode; int gid; int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kern_ipc_perm* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct kern_ipc_perm*) ;
 int FUNC_2 (struct kern_ipc_perm*) ;
 int FUNC_3 (struct kern_ipc_perm*) ;
 int FUNC_4 (int,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 struct kern_ipc_perm* FUNC_8 (struct ipc_ids*,int) ;
 int FUNC_9 (struct kern_ipc_perm*) ;
 int FUNC_10 (int *) ;

struct kern_ipc_perm *FUNC_11(struct ipc_ids *VAR_3, int VAR_4, int VAR_5,
          struct ipc64_perm *VAR_6, int VAR_7)
{
 struct kern_ipc_perm *VAR_8;
 uid_t VAR_9;
 int VAR_10;

 FUNC_7(&VAR_3->rw_mutex);
 VAR_8 = FUNC_8(VAR_3, VAR_4);
 if (FUNC_1(VAR_8)) {
  VAR_10 = FUNC_2(VAR_8);
  goto out_up;
 }

 FUNC_3(VAR_8);
 if (VAR_5 == VAR_2)
  FUNC_4(VAR_7, VAR_6->uid,
      VAR_6->gid, VAR_6->mode);

 VAR_9 = FUNC_6();
 if (VAR_9 == VAR_8->cuid ||
     VAR_9 == VAR_8->uid || FUNC_5(VAR_0))
  return VAR_8;

 VAR_10 = -VAR_1;
 FUNC_9(VAR_8);
out_up:
 FUNC_10(&VAR_3->rw_mutex);
 return FUNC_0(VAR_10);
}
