
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ocfs2_dinode {int i_ctime_nsec; int i_ctime; int i_mtime_nsec; int i_mtime; int i_atime_nsec; int i_atime; int i_clusters; int i_mode; int i_gid; int i_uid; int i_size; int i_dyn_features; int i_attr; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct inode {TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; scalar_t__ i_blocks; void* i_mode; scalar_t__ i_gid; scalar_t__ i_uid; int i_nlink; } ;
struct TYPE_8__ {int ip_lock; void* ip_dyn_features; scalar_t__ ip_attr; scalar_t__ ip_clusters; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct inode*,void*) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct ocfs2_dinode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct inode *VAR_0,
    struct ocfs2_dinode *VAR_1)
{
 FUNC_9(&FUNC_0(VAR_0)->ip_lock);

 FUNC_0(VAR_0)->ip_clusters = FUNC_4(VAR_1->i_clusters);
 FUNC_0(VAR_0)->ip_attr = FUNC_4(VAR_1->i_attr);
 FUNC_0(VAR_0)->ip_dyn_features = FUNC_3(VAR_1->i_dyn_features);
 FUNC_8(VAR_0);
 FUNC_2(VAR_0, FUNC_5(VAR_1->i_size));
 VAR_0->i_nlink = FUNC_7(VAR_1);
 VAR_0->i_uid = FUNC_4(VAR_1->i_uid);
 VAR_0->i_gid = FUNC_4(VAR_1->i_gid);
 VAR_0->i_mode = FUNC_3(VAR_1->i_mode);
 if (FUNC_1(VAR_0->i_mode) && FUNC_4(VAR_1->i_clusters) == 0)
  VAR_0->i_blocks = 0;
 else
  VAR_0->i_blocks = FUNC_6(VAR_0);
 VAR_0->i_atime.tv_sec = FUNC_5(VAR_1->i_atime);
 VAR_0->i_atime.tv_nsec = FUNC_4(VAR_1->i_atime_nsec);
 VAR_0->i_mtime.tv_sec = FUNC_5(VAR_1->i_mtime);
 VAR_0->i_mtime.tv_nsec = FUNC_4(VAR_1->i_mtime_nsec);
 VAR_0->i_ctime.tv_sec = FUNC_5(VAR_1->i_ctime);
 VAR_0->i_ctime.tv_nsec = FUNC_4(VAR_1->i_ctime_nsec);

 FUNC_10(&FUNC_0(VAR_0)->ip_lock);
}
