
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errbuf; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(pcap_t *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1->errbuf, VAR_0,
     "Non-blocking mode isn't supported for TurboCap ports");
 return -1;
}
