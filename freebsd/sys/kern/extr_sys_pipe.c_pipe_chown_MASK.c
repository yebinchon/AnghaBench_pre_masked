
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct pipe {int pipe_state; } ;
struct file {struct pipe* f_data; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int ,struct ucred*,struct thread*) ;
 int FUNC_1 (struct file*,int ,int ,struct ucred*,struct thread*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_1, uid_t VAR_2, gid_t VAR_3, struct ucred *VAR_4,
    struct thread *VAR_5)
{
 struct pipe *VAR_6;
 int VAR_7;

 VAR_6 = VAR_1->f_data;
 if (VAR_6->pipe_state & VAR_0)
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 return (VAR_7);
}
