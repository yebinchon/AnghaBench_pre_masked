
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errbuf; } ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_direction_t ;


 int FUNC_0 (int ,int,char*) ;

__attribute__((used)) static int FUNC_1(pcap_t *VAR_0, pcap_direction_t VAR_1) {
 FUNC_0(VAR_0->errbuf, sizeof(VAR_0->errbuf),
     "Setting direction is not supported on ACN adapters");
 return -1;
}
