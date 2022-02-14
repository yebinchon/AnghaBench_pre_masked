
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct ngpcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*) ;
 struct ngpcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, int VAR_2, struct thread *VAR_3)
{
 struct ngpcb *const VAR_4 = FUNC_1(VAR_1);

 if (VAR_4 != ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_1));
}
