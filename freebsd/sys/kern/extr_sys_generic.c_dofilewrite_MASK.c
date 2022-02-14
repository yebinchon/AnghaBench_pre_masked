
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; int uio_offset; struct thread* uio_td; int uio_rw; } ;
struct thread {scalar_t__* td_retval; int td_proc; int td_ucred; } ;
struct file {scalar_t__ f_type; } ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct thread*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct uio* FUNC_4 (struct uio*) ;
 int FUNC_5 (struct file*,struct uio*,int ,int,struct thread*) ;
 int FUNC_6 (int,int ,struct uio*,int) ;
 int FUNC_7 (struct thread*,int ) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_8, int VAR_9, struct file *VAR_10, struct uio *VAR_11,
    off_t VAR_12, int VAR_13)
{
 ssize_t VAR_14;
 int VAR_15;




 FUNC_0(VAR_9);
 VAR_11->uio_rw = VAR_7;
 VAR_11->uio_td = VAR_8;
 VAR_11->uio_offset = VAR_12;




 VAR_14 = VAR_11->uio_resid;
 if ((VAR_15 = FUNC_5(VAR_10, VAR_11, VAR_8->td_ucred, VAR_13, VAR_8))) {
  if (VAR_11->uio_resid != VAR_14 && (VAR_15 == VAR_3 ||
      VAR_15 == VAR_1 || VAR_15 == VAR_4))
   VAR_15 = 0;

  if (VAR_10->f_type != VAR_0 && VAR_15 == VAR_2) {
   FUNC_2(VAR_8->td_proc);
   FUNC_7(VAR_8, VAR_6);
   FUNC_3(VAR_8->td_proc);
  }
 }
 VAR_14 -= VAR_11->uio_resid;






 VAR_8->td_retval[0] = VAR_14;
 return (VAR_15);
}
