
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_mem_map_args {int flags; int off; int fd; int len; scalar_t__ addr; int prot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct thread*,uintptr_t,int ,int,int,int ,int ) ;

int
FUNC_2(struct thread *VAR_8, struct cloudabi_sys_mem_map_args *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;


 VAR_11 = 0;
 if (VAR_9->flags & VAR_0)
  VAR_11 |= VAR_4;
 if (VAR_9->flags & VAR_1)
  VAR_11 |= VAR_5;
 if (VAR_9->flags & VAR_2)
  VAR_11 |= VAR_6;
 if (VAR_9->flags & VAR_3)
  VAR_11 |= VAR_7;


 VAR_10 = FUNC_0(VAR_9->prot, &VAR_12);
 if (VAR_10 != 0)
  return (VAR_10);

 return (FUNC_1(VAR_8, (uintptr_t)VAR_9->addr, VAR_9->len, VAR_12, VAR_11,
     VAR_9->fd, VAR_9->off));
}
