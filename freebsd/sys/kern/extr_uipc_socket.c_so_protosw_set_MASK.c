
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct protosw* so_proto; } ;
struct protosw {int dummy; } ;



void
FUNC_0(struct socket *VAR_0, struct protosw *VAR_1)
{

 VAR_0->so_proto = VAR_1;
}
