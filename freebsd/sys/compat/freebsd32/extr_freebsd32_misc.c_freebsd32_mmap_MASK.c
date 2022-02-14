
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct freebsd32_mmap_args {int prot; int pos; int fd; int flags; int len; scalar_t__ addr; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct thread*,uintptr_t,int ,int,int ,int ,int ) ;
 int VAR_3 ;

int
FUNC_2(struct thread *VAR_4, struct freebsd32_mmap_args *VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_5->prot;

 if (VAR_2 && (VAR_6 & VAR_1))
  VAR_6 |= VAR_0;


 return (FUNC_1(VAR_4, (uintptr_t)VAR_5->addr, VAR_5->len, VAR_6,
     VAR_5->flags, VAR_5->fd, FUNC_0(VAR_3, VAR_5->pos)));
}
