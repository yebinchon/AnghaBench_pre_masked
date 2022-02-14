
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct files_struct {int dummy; } ;
struct file {int f_mode; int sub_file; struct socket* private_data; } ;
struct fdtable {unsigned int max_fds; int * fd; int open_fds; } ;
struct TYPE_4__ {int pid; struct files_struct* files; } ;
struct TYPE_3__ {scalar_t__ sk_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 struct fdtable* FUNC_2 (struct files_struct*) ;
 int FUNC_3 (struct socket*,unsigned int) ;
 scalar_t__ FUNC_4 (struct file*,unsigned int,int) ;
 struct file* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(void)
{
 struct files_struct *VAR_4 = VAR_3->files;
 struct fdtable *VAR_5;
 struct file *VAR_6;
 unsigned int VAR_7;
 int VAR_8 = 0;

 FUNC_0(VAR_0, "Spawn all listen socket of pid(%u)\n", VAR_3->pid);

 FUNC_6();
 VAR_5 = FUNC_2(VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_5->max_fds; ++VAR_7) {
  if (FUNC_1(VAR_7, VAR_5->open_fds)) {
   VAR_6 = FUNC_5(VAR_5->fd[VAR_7]);
   if (VAR_6 && VAR_6->f_mode & VAR_1) {
    struct socket * VAR_9 = VAR_6->private_data;

    FUNC_0(VAR_0, "fd(%d) is fastsocket fd, sock state(%d) subfile(%p)\n",
     VAR_7, VAR_9->sk->sk_state, VAR_6->sub_file);

    if (VAR_9->sk->sk_state == VAR_2) {
     if (VAR_6->sub_file) {

      FUNC_3(VAR_9, VAR_7);

      VAR_6 = FUNC_5(VAR_5->fd[VAR_7]);
     }
     VAR_8 += FUNC_4(VAR_6, VAR_7, -1);
    }
   }

   FUNC_7();
  }
 }
 FUNC_7();

 return VAR_8;
}
