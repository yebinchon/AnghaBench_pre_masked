
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct pcap_netmap {scalar_t__ must_clear_promisc; struct nm_desc* d; } ;
struct nm_desc {int dummy; } ;
struct TYPE_5__ {struct pcap_netmap* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nm_desc*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void
FUNC_3(pcap_t *VAR_3)
{
 struct pcap_netmap *VAR_4 = VAR_3->priv;
 struct nm_desc *VAR_5 = VAR_4->d;
 uint32_t VAR_6 = 0;

 if (VAR_4->must_clear_promisc) {
  FUNC_2(VAR_3, VAR_1, &VAR_6);
  if (VAR_6 & VAR_0) {
   VAR_6 &= ~VAR_0;
   FUNC_2(VAR_3, VAR_2, &VAR_6);
  }
 }
 FUNC_0(VAR_5);
 FUNC_1(VAR_3);
}
