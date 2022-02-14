
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct fuse_data {int ref; int rename_lock; int daemon_timeout; int daemoncred; int aw_head; int aw_mtx; int ms_mtx; TYPE_1__ ks_rsel; scalar_t__ ms_count; int ms_head; struct cdev* fdev; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ucred*) ;
 int FUNC_3 (int *,int *) ;
 struct fuse_data* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *,char*) ;

struct fuse_data *
FUNC_7(struct cdev *VAR_5, struct ucred *VAR_6)
{
 struct fuse_data *VAR_7;

 VAR_7 = FUNC_4(sizeof(struct fuse_data), VAR_2, VAR_3 | VAR_4);

 VAR_7->fdev = VAR_5;
 FUNC_5(&VAR_7->ms_mtx, "fuse message list mutex", ((void*)0), VAR_1);
 FUNC_0(&VAR_7->ms_head);
 VAR_7->ms_count = 0;
 FUNC_3(&VAR_7->ks_rsel.si_note, &VAR_7->ms_mtx);
 FUNC_5(&VAR_7->aw_mtx, "fuse answer list mutex", ((void*)0), VAR_1);
 FUNC_1(&VAR_7->aw_head);
 VAR_7->daemoncred = FUNC_2(VAR_6);
 VAR_7->daemon_timeout = VAR_0;
 FUNC_6(&VAR_7->rename_lock, "fuse rename lock");
 VAR_7->ref = 1;

 return VAR_7;
}
