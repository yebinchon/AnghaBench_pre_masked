
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct thread {TYPE_2__* td_proc; } ;
struct statfs {int f_blocks; int f_files; int f_ffree; scalar_t__ f_bavail; scalar_t__ f_bfree; void* f_iosize; void* f_bsize; scalar_t__ f_flags; } ;
struct mount {int dummy; } ;
struct filedesc {int fd_nfiles; int fd_freefile; TYPE_1__* fd_ofiles; } ;
struct TYPE_4__ {struct filedesc* p_fd; } ;
struct TYPE_3__ {int * fde_file; } ;


 void* VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_5(struct mount *VAR_4, struct statfs *VAR_5)
{
 struct thread *VAR_6;
 struct filedesc *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 uint64_t VAR_12;

 VAR_6 = VAR_3;







 VAR_8 = FUNC_2(VAR_6, VAR_2);
 VAR_7 = VAR_6->td_proc->p_fd;
 FUNC_0(VAR_7);
 VAR_12 = FUNC_4(VAR_6->td_proc, VAR_1);
 if (VAR_8 > VAR_12)
  VAR_8 = VAR_12;
 VAR_10 = FUNC_3(VAR_7->fd_nfiles, VAR_8);
 VAR_11 = 0;
 for (VAR_9 = VAR_7->fd_freefile; VAR_9 < VAR_10; VAR_9++)
  if (VAR_7->fd_ofiles[VAR_9].fde_file == ((void*)0))
   VAR_11++;





 if (VAR_7->fd_nfiles < VAR_8)
  VAR_11 += (VAR_8 - VAR_7->fd_nfiles);
 FUNC_1(VAR_7);

 VAR_5->f_flags = 0;
 VAR_5->f_bsize = VAR_0;
 VAR_5->f_iosize = VAR_0;
 VAR_5->f_blocks = 2;
 VAR_5->f_bfree = 0;
 VAR_5->f_bavail = 0;
 VAR_5->f_files = VAR_8 + 1;
 VAR_5->f_ffree = VAR_11;
 return (0);
}
