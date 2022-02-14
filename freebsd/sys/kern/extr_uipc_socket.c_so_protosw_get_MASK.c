
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct protosw* so_proto; } ;
struct protosw {int dummy; } ;



struct protosw *
FUNC_0(const struct socket *VAR_0)
{

 return (VAR_0->so_proto);
}
