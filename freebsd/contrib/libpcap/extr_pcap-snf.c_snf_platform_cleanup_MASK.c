
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_snf {int snf_handle; int snf_ring; scalar_t__ snf_inj; } ;
struct TYPE_4__ {struct pcap_snf* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(pcap_t *VAR_0)
{
 struct pcap_snf *VAR_1 = VAR_0->priv;





 FUNC_3(VAR_1->snf_ring);
 FUNC_1(VAR_1->snf_handle);
 FUNC_0(VAR_0);
}
