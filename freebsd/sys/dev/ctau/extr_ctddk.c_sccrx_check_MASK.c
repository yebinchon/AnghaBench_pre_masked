
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sccrx_e; int sccrx_b; scalar_t__ sccrx_empty; } ;
typedef TYPE_1__ ct_chan_t ;


 int VAR_0 ;

int FUNC_0 (ct_chan_t *VAR_1)
{
 int VAR_2;

 if (VAR_1->sccrx_empty)
  VAR_2 = 0;
 else
  VAR_2 = (VAR_0 + VAR_1->sccrx_e - 1 - VAR_1->sccrx_b) %
    VAR_0 + 1;
 return VAR_2;
}
