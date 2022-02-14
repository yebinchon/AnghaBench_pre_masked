
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int dummy; } ;
struct socket {struct sockbuf so_rcv; } ;


 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*) ;

__attribute__((used)) static __inline int
FUNC_2(struct socket *VAR_0, struct sockbuf *VAR_1)
{
 return (VAR_1 == &VAR_0->so_rcv ? FUNC_0(VAR_0) : FUNC_1(VAR_0));
}
