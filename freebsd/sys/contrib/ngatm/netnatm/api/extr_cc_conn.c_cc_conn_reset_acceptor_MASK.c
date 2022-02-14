
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccconn {TYPE_1__* acceptor; } ;
struct TYPE_2__ {int * accepted; } ;



void
FUNC_0(struct ccconn *VAR_0)
{
 if (VAR_0->acceptor != ((void*)0)) {
  VAR_0->acceptor->accepted = ((void*)0);
  VAR_0->acceptor = ((void*)0);
 }
}
