
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_6__ {int sendsize; int recvsize; struct TYPE_6__* in_base; struct TYPE_6__* out_base; } ;
typedef TYPE_2__ RECSTREAM ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_1(XDR *VAR_0)
{
 RECSTREAM *VAR_1 = (RECSTREAM *)VAR_0->x_private;

 FUNC_0(VAR_1->out_base, VAR_1->sendsize);
 FUNC_0(VAR_1->in_base, VAR_1->recvsize);
 FUNC_0(VAR_1, sizeof(RECSTREAM));
}
