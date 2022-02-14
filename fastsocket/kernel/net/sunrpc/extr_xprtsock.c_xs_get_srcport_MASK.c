
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ resvport; } ;
struct sock_xprt {unsigned short srcport; TYPE_1__ xprt; } ;


 unsigned short FUNC_0 () ;

__attribute__((used)) static unsigned short FUNC_1(struct sock_xprt *VAR_0)
{
 unsigned short VAR_1 = VAR_0->srcport;

 if (VAR_1 == 0 && VAR_0->xprt.resvport)
  VAR_1 = FUNC_0();
 return VAR_1;
}
