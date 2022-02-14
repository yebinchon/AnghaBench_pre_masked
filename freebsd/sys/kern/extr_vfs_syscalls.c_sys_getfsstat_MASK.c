
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {size_t* td_retval; } ;
struct getfsstat_args {scalar_t__ bufsize; int mode; int buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int *,scalar_t__,size_t*,int ,int ) ;

int
FUNC_1(struct thread *VAR_3, struct getfsstat_args *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 if (VAR_4->bufsize < 0 || VAR_4->bufsize > VAR_1)
  return (VAR_0);
 VAR_6 = FUNC_0(VAR_3, &VAR_4->buf, VAR_4->bufsize, &VAR_5,
     VAR_2, VAR_4->mode);
 if (VAR_6 == 0)
  VAR_3->td_retval[0] = VAR_5;
 return (VAR_6);
}
