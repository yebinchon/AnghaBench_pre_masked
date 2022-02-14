
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int sg; } ;
typedef TYPE_1__ xdma_channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(xdma_channel_t *VAR_2)
{

 if (VAR_2->flags & VAR_1)
  FUNC_0(VAR_2->sg, VAR_0);

 VAR_2->flags &= ~VAR_1;
}
