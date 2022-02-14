
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* call_on_err ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ ct_chan_t ;



void FUNC_0 (ct_chan_t *VAR_0, void (*VAR_1) (ct_chan_t*, int))
{
 VAR_0->call_on_err = VAR_1;
}
