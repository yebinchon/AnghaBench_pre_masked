
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int dummy; } ;
struct socket {struct sockbuf so_rcv; } ;



struct sockbuf *
FUNC_0(struct socket *VAR_0)
{

 return (&VAR_0->so_rcv);
}
