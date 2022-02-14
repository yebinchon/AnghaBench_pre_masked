
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct stat {int st_mode; int st_gid; int st_uid; int st_birthtim; int st_ctim; int st_mtim; int st_atim; } ;
struct mqfs_node {int mn_mode; int mn_gid; int mn_uid; int mn_birth; int mn_ctime; int mn_mtime; int mn_atime; } ;
struct file {struct mqfs_node* f_data; } ;
struct TYPE_2__ {int mi_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct stat*,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_2, struct stat *VAR_3, struct ucred *VAR_4,
 struct thread *VAR_5)
{
 struct mqfs_node *VAR_6 = VAR_2->f_data;

 FUNC_0(VAR_3, sizeof *VAR_3);
 FUNC_1(&VAR_1.mi_lock);
 VAR_3->st_atim = VAR_6->mn_atime;
 VAR_3->st_mtim = VAR_6->mn_mtime;
 VAR_3->st_ctim = VAR_6->mn_ctime;
 VAR_3->st_birthtim = VAR_6->mn_birth;
 VAR_3->st_uid = VAR_6->mn_uid;
 VAR_3->st_gid = VAR_6->mn_gid;
 VAR_3->st_mode = VAR_0 | VAR_6->mn_mode;
 FUNC_2(&VAR_1.mi_lock);
 return (0);
}
