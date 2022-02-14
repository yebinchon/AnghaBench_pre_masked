
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_info {int state; } ;
typedef enum fd_fork_state { ____Placeholder_fd_fork_state } fd_fork_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct fd_info* FUNC_0 (int *,int) ;

__attribute__((used)) static inline enum fd_fork_state FUNC_1(int VAR_2)
{
 struct fd_info *VAR_3;

 VAR_3 = FUNC_0(&VAR_1, VAR_2);
 return VAR_3 ? VAR_3->state : VAR_0;
}
