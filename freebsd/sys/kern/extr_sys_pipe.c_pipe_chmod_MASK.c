
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct pipe {int pipe_state; } ;
struct file {struct pipe* f_data; } ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,struct ucred*,struct thread*) ;
 int FUNC_1 (struct file*,int ,struct ucred*,struct thread*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_1, mode_t VAR_2, struct ucred *VAR_3, struct thread *VAR_4)
{
 struct pipe *VAR_5;
 int VAR_6;

 VAR_5 = VAR_1->f_data;
 if (VAR_5->pipe_state & VAR_0)
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 return (VAR_6);
}
