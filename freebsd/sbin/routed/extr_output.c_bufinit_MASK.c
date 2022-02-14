
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * rip_nets; int rip_vers; void* rip_cmd; } ;
struct TYPE_12__ {TYPE_1__ rip; } ;
struct TYPE_8__ {int * rip_nets; void* rip_cmd; } ;
struct TYPE_11__ {TYPE_2__ rip; } ;
struct TYPE_10__ {TYPE_2__* buf; int * base; } ;
struct TYPE_9__ {TYPE_1__* buf; int * base; } ;


 void* VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;

void
FUNC_0(void)
{
 VAR_3.rip.rip_cmd = VAR_0;
 VAR_4.buf = &VAR_3.rip;
 VAR_4.base = &VAR_4.buf->rip_nets[0];

 VAR_2.rip.rip_cmd = VAR_0;
 VAR_2.rip.rip_vers = VAR_1;
 VAR_5.buf = &VAR_2.rip;
 VAR_5.base = &VAR_5.buf->rip_nets[0];
}
