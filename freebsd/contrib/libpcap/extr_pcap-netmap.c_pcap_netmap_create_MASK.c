
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_netmap {int dummy; } ;
struct TYPE_4__ {int activate_op; } ;
typedef TYPE_1__ pcap_t ;


 TYPE_1__* FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,int) ;

pcap_t *
FUNC_2(const char *VAR_1, char *VAR_2, int *VAR_3)
{
 pcap_t *VAR_4;

 *VAR_3 = (!FUNC_1(VAR_1, "netmap:", 7) || !FUNC_1(VAR_1, "vale", 4));
 if (! *VAR_3)
  return ((void*)0);
 VAR_4 = FUNC_0(VAR_2, sizeof (struct pcap_netmap));
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_4->activate_op = VAR_0;
 return (VAR_4);
}
