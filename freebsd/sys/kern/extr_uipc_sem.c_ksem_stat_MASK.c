
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct stat {int st_mode; int st_gid; int st_uid; int st_birthtim; int st_mtim; int st_ctim; int st_atim; } ;
struct ksem {int ks_mode; int ks_gid; int ks_uid; int ks_birthtime; int ks_mtime; int ks_ctime; int ks_atime; } ;
struct file {int f_cred; struct ksem* f_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct stat*,int) ;
 int FUNC_1 (struct ucred*,int ,struct ksem*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_2, struct stat *VAR_3, struct ucred *VAR_4,
    struct thread *VAR_5)
{
 struct ksem *VAR_6;




 VAR_6 = VAR_2->f_data;
 FUNC_0(VAR_3, sizeof(*VAR_3));

 FUNC_2(&VAR_1);
 VAR_3->st_atim = VAR_6->ks_atime;
 VAR_3->st_ctim = VAR_6->ks_ctime;
 VAR_3->st_mtim = VAR_6->ks_mtime;
 VAR_3->st_birthtim = VAR_6->ks_birthtime;
 VAR_3->st_uid = VAR_6->ks_uid;
 VAR_3->st_gid = VAR_6->ks_gid;
 VAR_3->st_mode = VAR_0 | VAR_6->ks_mode;
 FUNC_3(&VAR_1);

 return (0);
}
