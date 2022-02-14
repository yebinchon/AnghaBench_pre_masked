
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bool_t ;
struct TYPE_4__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_5__ {int recvsize; int in_maxrec; int nonblock; } ;
typedef TYPE_2__ RECSTREAM ;


 int VAR_0 ;

bool_t
FUNC_0(XDR *VAR_1, int VAR_2)
{
 RECSTREAM *VAR_3 = (RECSTREAM *)(VAR_1->x_private);

 VAR_3->nonblock = VAR_0;
 if (VAR_2 == 0)
  VAR_2 = VAR_3->recvsize;
 VAR_3->in_maxrec = VAR_2;
 return VAR_0;
}
