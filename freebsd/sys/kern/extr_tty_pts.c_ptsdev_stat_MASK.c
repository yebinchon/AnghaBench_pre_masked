
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct tty {struct cdev* t_dev; } ;
struct thread {int dummy; } ;
struct stat {int st_mode; int st_gid; int st_uid; int st_mtim; int st_ctim; int st_atim; int st_rdev; int st_ino; } ;
struct pts_softc {int * pts_cdev; } ;
struct file {struct tty* f_data; } ;
struct cdev {int si_mode; int si_gid; int si_uid; int si_mtime; int si_ctime; int si_atime; } ;


 int VAR_0 ;
 int FUNC_0 (struct stat*,int) ;
 int FUNC_1 (int *) ;
 struct pts_softc* FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_1, struct stat *VAR_2, struct ucred *VAR_3,
    struct thread *VAR_4)
{
 struct tty *VAR_5 = VAR_1->f_data;



 struct cdev *VAR_6 = VAR_5->t_dev;
 FUNC_0(VAR_2, sizeof *VAR_2);





  VAR_2->st_ino = VAR_2->st_rdev = FUNC_3(VAR_5);

 VAR_2->st_atim = VAR_6->si_atime;
 VAR_2->st_ctim = VAR_6->si_ctime;
 VAR_2->st_mtim = VAR_6->si_mtime;
 VAR_2->st_uid = VAR_6->si_uid;
 VAR_2->st_gid = VAR_6->si_gid;
 VAR_2->st_mode = VAR_6->si_mode | VAR_0;

 return (0);
}
