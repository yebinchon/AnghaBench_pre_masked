
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int tstamp_precision; } ;
struct TYPE_7__ {int snapshot; int linktype; int activated; scalar_t__ bpf_codegen_flags; int cleanup_op; int get_airpcap_handle_op; int live_dump_ended_op; int live_dump_op; int setuserbuffer_op; int sendqueue_transmit_op; int oid_set_request_op; int oid_get_request_op; int getevent_op; int setmintocopy_op; int setmode_op; int setbuff_op; int stats_ex_op; int stats_op; int setnonblock_op; int getnonblock_op; int set_datalink_op; int setdirection_op; int setfilter_op; int inject_op; int read_op; int can_set_rfmon_op; TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;




 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

pcap_t *
FUNC_2(int VAR_22, int VAR_23, u_int VAR_24)
{
 pcap_t *VAR_25;

 switch (VAR_24) {

 case 129:
 case 128:
  break;

 default:






  VAR_24 = 129;
  break;
 }
 VAR_25 = FUNC_0(sizeof(*VAR_25));
 if (VAR_25 == ((void*)0))
  return ((void*)0);
 FUNC_1 (VAR_25, 0, sizeof(*VAR_25));
 VAR_25->snapshot = VAR_23;
 VAR_25->linktype = VAR_22;
 VAR_25->opt.tstamp_precision = VAR_24;
 VAR_25->can_set_rfmon_op = VAR_0;
 VAR_25->read_op = VAR_10;
 VAR_25->inject_op = VAR_5;
 VAR_25->setfilter_op = VAR_15;
 VAR_25->setdirection_op = VAR_14;
 VAR_25->set_datalink_op = VAR_12;
 VAR_25->getnonblock_op = VAR_4;
 VAR_25->setnonblock_op = VAR_18;
 VAR_25->stats_op = VAR_20;
 VAR_25->cleanup_op = VAR_1;




 VAR_25->bpf_codegen_flags = 0;

 VAR_25->activated = 1;
 return (VAR_25);
}
