
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int promisc; } ;
struct TYPE_6__ {TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

int
FUNC_1(pcap_t *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_1))
  return (VAR_0);
 VAR_1->opt.promisc = VAR_2;
 return (0);
}
