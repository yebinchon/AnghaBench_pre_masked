
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct pcap_linux {int dummy; } ;
struct TYPE_6__ {int tstamp_precision_count; int * tstamp_precision_list; int can_set_rfmon_op; int activate_op; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,TYPE_1__*,char*) ;
 int * FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ,int ,char*) ;

pcap_t *
FUNC_5(const char *VAR_6, char *VAR_7)
{
 pcap_t *VAR_8;

 VAR_8 = FUNC_3(VAR_7, sizeof (struct pcap_linux));
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->activate_op = VAR_4;
 VAR_8->can_set_rfmon_op = VAR_5;
 return VAR_8;
}
