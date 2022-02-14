
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_dos {void (* wait_proc ) () ;} ;
struct TYPE_4__ {int timeout; } ;
struct TYPE_5__ {TYPE_1__ opt; struct pcap_dos* priv; } ;
typedef TYPE_2__ pcap_t ;



void FUNC_0 (pcap_t *VAR_0, void (*VAR_1)(void), int VAR_2)
{
  if (VAR_0)
  {
    struct pcap_dos *VAR_3 = VAR_0->priv;

    VAR_3->wait_proc = VAR_1;
    VAR_0->opt.timeout = VAR_2;
  }
}
