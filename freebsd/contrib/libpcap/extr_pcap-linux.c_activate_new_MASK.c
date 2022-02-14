
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int val ;
struct pcap_linux {int cooked; char* mondevice; int ifindex; int vlan_offset; void* lo_ifindex; scalar_t__ sock_packet; } ;
typedef int packet_mreq ;
typedef int socklen_t ;
struct TYPE_7__ {char* device; scalar_t__ tstamp_precision; scalar_t__ promisc; scalar_t__ rfmon; } ;
struct TYPE_8__ {int linktype; scalar_t__ snapshot; scalar_t__ bufsize; int fd; int bpf_codegen_flags; int errbuf; TYPE_1__ opt; scalar_t__ offset; scalar_t__ dlt_count; int * dlt_list; struct pcap_linux* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int nsec_tstamps ;
typedef int mr ;
typedef int bpf_extensions ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_0 (int) ;
 int VAR_28 ;
 int FUNC_1 (TYPE_2__*,int,char const*) ;
 scalar_t__ VAR_29 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int ,int ,int*,int*) ;
 int FUNC_4 (int,int,int ,int) ;
 int FUNC_5 (int,char const*,int ) ;
 void* FUNC_6 (int,char const*,int ) ;
 int FUNC_7 (TYPE_2__*,int,int,char const*,int) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int ,int ,scalar_t__,char*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int ,char*,...) ;
 scalar_t__ FUNC_12 (int,int ,int ,int*,int) ;
 int FUNC_13 (int ,int ,int) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (int ,char*,int ) ;
 scalar_t__ FUNC_16 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_17(pcap_t *VAR_30)
{
 FUNC_15(VAR_28,
  "New packet capturing interface not supported by build "
  "environment", VAR_13);
 return 0;

}
