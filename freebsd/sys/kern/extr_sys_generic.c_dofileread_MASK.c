
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; struct thread* uio_td; int uio_offset; int uio_rw; } ;
struct thread {scalar_t__* td_retval; int td_ucred; } ;
struct file {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct thread*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct uio* FUNC_2 (struct uio*) ;
 int FUNC_3 (struct file*,struct uio*,int ,int,struct thread*) ;
 int FUNC_4 (int,int ,struct uio*,int) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_5, int VAR_6, struct file *VAR_7, struct uio *VAR_8,
    off_t VAR_9, int VAR_10)
{
 ssize_t VAR_11;
 int VAR_12;




 FUNC_0(VAR_6);


 if (VAR_8->uio_resid == 0) {
  VAR_5->td_retval[0] = 0;
  return (0);
 }
 VAR_8->uio_rw = VAR_4;
 VAR_8->uio_offset = VAR_9;
 VAR_8->uio_td = VAR_5;




 VAR_11 = VAR_8->uio_resid;
 if ((VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_5->td_ucred, VAR_10, VAR_5))) {
  if (VAR_8->uio_resid != VAR_11 && (VAR_12 == VAR_1 ||
      VAR_12 == VAR_0 || VAR_12 == VAR_2))
   VAR_12 = 0;
 }
 VAR_11 -= VAR_8->uio_resid;






 VAR_5->td_retval[0] = VAR_11;
 return (VAR_12);
}
