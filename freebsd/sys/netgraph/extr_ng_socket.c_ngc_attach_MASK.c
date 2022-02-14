
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct ngpcb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct thread*,int ) ;
 struct ngpcb* FUNC_2 (struct socket*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct ngpcb *const VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 if (VAR_6)
  return (VAR_6);
 if (VAR_5 != ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_2));
}
