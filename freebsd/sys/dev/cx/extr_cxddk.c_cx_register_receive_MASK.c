
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* call_on_rx ) (TYPE_1__*,char*,int) ;} ;
typedef TYPE_1__ cx_chan_t ;



void FUNC_0 (cx_chan_t *VAR_0,
 void (*VAR_1) (cx_chan_t *VAR_2, char *VAR_3, int VAR_4))
{
 VAR_0->call_on_rx = VAR_1;
}
