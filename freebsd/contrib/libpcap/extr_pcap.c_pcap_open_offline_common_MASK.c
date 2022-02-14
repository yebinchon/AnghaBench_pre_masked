
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tstamp_precision; } ;
struct TYPE_6__ {TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (char*,size_t) ;

pcap_t *
FUNC_1(char *VAR_1, size_t VAR_2)
{
 pcap_t *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3->opt.tstamp_precision = VAR_0;

 return (VAR_3);
}
