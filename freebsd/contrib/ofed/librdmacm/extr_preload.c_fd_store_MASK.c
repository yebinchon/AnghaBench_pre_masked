
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_info {int fd; int type; int state; } ;
typedef enum fd_type { ____Placeholder_fd_type } fd_type ;
typedef enum fd_fork_state { ____Placeholder_fd_fork_state } fd_fork_state ;


 int VAR_0 ;
 struct fd_info* FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(int VAR_1, int VAR_2, enum fd_type VAR_3, enum fd_fork_state VAR_4)
{
 struct fd_info *VAR_5;

 VAR_5 = FUNC_0(&VAR_0, VAR_1);
 VAR_5->fd = VAR_2;
 VAR_5->type = VAR_3;
 VAR_5->state = VAR_4;
}
