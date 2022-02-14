
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct filecaps {int fc_rights; } ;
struct cloudabi_sys_fd_create1_args {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct thread*,int ,int,int ,struct filecaps*,int ) ;

int
FUNC_2(struct thread *VAR_8,
    struct cloudabi_sys_fd_create1_args *VAR_9)
{
 struct filecaps VAR_10 = {};

 switch (VAR_9->type) {
 case 128:
  FUNC_0(&VAR_10.fc_rights, VAR_0, VAR_1,
      VAR_2);
  return (FUNC_1(VAR_8, VAR_7, VAR_6 | VAR_5, 0,
      &VAR_10, VAR_4));
 default:
  return (VAR_3);
 }
}
