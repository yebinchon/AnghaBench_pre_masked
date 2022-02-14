
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;
struct epoll_copyin_args {int changelist; } ;


 int FUNC_0 (struct kevent*,int,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, struct kevent *VAR_1, int VAR_2)
{
 struct epoll_copyin_args *VAR_3;

 VAR_3 = (struct epoll_copyin_args*) VAR_0;

 FUNC_0(VAR_1, VAR_3->changelist, VAR_2 * sizeof(*VAR_1));
 VAR_3->changelist += VAR_2;

 return (0);
}
