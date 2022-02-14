
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tstamp_precision; } ;
struct TYPE_5__ {TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;



int
FUNC_0(pcap_t *VAR_0)
{
        return (VAR_0->opt.tstamp_precision);
}
