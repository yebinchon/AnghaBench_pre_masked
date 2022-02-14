
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cuse_client_command {int dummy; } ;
struct cuse_client {int fflags; struct cuse_client_command* cmds; } ;
struct cdev {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct cuse_client**) ;
 int FUNC_1 (struct cuse_client*) ;
 int FUNC_2 (struct cuse_client_command*,int ,int ) ;
 int FUNC_3 (struct cuse_client_command*,int ,int ,int ,int ) ;
 int FUNC_4 (struct cuse_client_command*) ;
 int FUNC_5 (struct cuse_client_command*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct cuse_client_command *VAR_5;
 struct cuse_client *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(&VAR_6);
 if (VAR_7 != 0)
  return (0);

 VAR_5 = &VAR_6->cmds[VAR_0];

 FUNC_4(VAR_5);

 FUNC_6();
 FUNC_3(VAR_5, 0, 0, VAR_6->fflags, 0);

 VAR_7 = FUNC_2(VAR_5, 0, 0);
 FUNC_7();

 FUNC_5(VAR_5);

 FUNC_6();
 FUNC_1(VAR_6);
 FUNC_7();

 return (0);
}
