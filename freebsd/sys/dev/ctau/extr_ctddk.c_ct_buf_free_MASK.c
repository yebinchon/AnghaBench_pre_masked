
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tn; int te; } ;
typedef TYPE_1__ ct_chan_t ;


 int VAR_0 ;

int FUNC_0 (ct_chan_t *VAR_1)
{
 return (VAR_0 + VAR_1->tn - VAR_1->te - 1) % VAR_0;
}
