
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int snapshot; int activated; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;

int
FUNC_0(pcap_t *VAR_1)
{
 if (!VAR_1->activated)
  return (VAR_0);
 return (VAR_1->snapshot);
}
