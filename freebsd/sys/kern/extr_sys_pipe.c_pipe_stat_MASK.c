
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct stat {scalar_t__ st_size; int st_ino; int st_dev; int st_gid; int st_uid; int st_ctim; int st_mtim; int st_atim; int st_blksize; int st_blocks; int st_mode; } ;
struct TYPE_6__ {scalar_t__ cnt; } ;
struct TYPE_5__ {scalar_t__ cnt; } ;
struct pipe {int pipe_state; int pipe_ino; int pipe_ctime; int pipe_mtime; int pipe_atime; TYPE_2__ pipe_buffer; TYPE_1__ pipe_map; int pipe_pair; } ;
struct file {TYPE_3__* f_cred; struct pipe* f_data; } ;
struct TYPE_8__ {int (* fo_stat ) (struct file*,struct stat*,struct ucred*,struct thread*) ;} ;
struct TYPE_7__ {int cr_gid; int cr_uid; } ;


 int VAR_0 ;
 int FUNC_0 (struct pipe*) ;
 int VAR_1 ;
 int FUNC_1 (struct pipe*) ;
 int VAR_2 ;
 int FUNC_2 (struct stat*,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct ucred*,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct file*,struct stat*,struct ucred*,struct thread*) ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_5, struct stat *VAR_6, struct ucred *VAR_7,
    struct thread *VAR_8)
{
 struct pipe *VAR_9;




 VAR_9 = VAR_5->f_data;
 FUNC_0(VAR_9);
 if (VAR_9->pipe_state & VAR_1) {
  FUNC_1(VAR_9);
  return (VAR_4.fo_stat(VAR_5, VAR_6, VAR_7, VAR_8));
 }

 FUNC_1(VAR_9);

 FUNC_2(VAR_6, sizeof(*VAR_6));
 VAR_6->st_mode = VAR_2;
 VAR_6->st_blksize = VAR_0;
 if (VAR_9->pipe_map.cnt != 0)
  VAR_6->st_size = VAR_9->pipe_map.cnt;
 else
  VAR_6->st_size = VAR_9->pipe_buffer.cnt;
 VAR_6->st_blocks = FUNC_3(VAR_6->st_size, VAR_6->st_blksize);
 VAR_6->st_atim = VAR_9->pipe_atime;
 VAR_6->st_mtim = VAR_9->pipe_mtime;
 VAR_6->st_ctim = VAR_9->pipe_ctime;
 VAR_6->st_uid = VAR_5->f_cred->cr_uid;
 VAR_6->st_gid = VAR_5->f_cred->cr_gid;
 VAR_6->st_dev = VAR_3;
 VAR_6->st_ino = VAR_9->pipe_ino;



 return (0);
}
