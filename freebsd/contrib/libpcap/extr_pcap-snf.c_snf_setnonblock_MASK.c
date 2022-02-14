
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_snf {int snf_timeout; } ;
struct TYPE_4__ {int timeout; } ;
struct TYPE_5__ {TYPE_1__ opt; struct pcap_snf* priv; } ;
typedef TYPE_2__ pcap_t ;



__attribute__((used)) static int
FUNC_0(pcap_t *VAR_0, int VAR_1)
{
 struct pcap_snf *VAR_2 = VAR_0->priv;

 if (VAR_1)
  VAR_2->snf_timeout = 0;
 else {
  if (VAR_0->opt.timeout <= 0)
   VAR_2->snf_timeout = -1;
  else
   VAR_2->snf_timeout = VAR_0->opt.timeout;
 }
 return (0);
}
