
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_rpcap {int rmt_flags; scalar_t__ currentfilter; scalar_t__ rmt_clientside; } ;
struct TYPE_3__ {struct pcap_rpcap* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(pcap_t *VAR_1, const char *VAR_2)
{
 struct pcap_rpcap *VAR_3 = VAR_1->priv;
 if (VAR_3->rmt_clientside &&
     (VAR_3->rmt_flags & VAR_0))
 {
  if (VAR_3->currentfilter)
   FUNC_0(VAR_3->currentfilter);

  if (VAR_2 == ((void*)0))
   VAR_2 = "";

  VAR_3->currentfilter = FUNC_1(VAR_2);
 }
}
