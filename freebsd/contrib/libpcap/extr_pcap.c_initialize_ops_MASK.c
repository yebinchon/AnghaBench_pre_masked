
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ stats_op_t ;
typedef scalar_t__ stats_ex_op_t ;
typedef scalar_t__ setuserbuffer_op_t ;
typedef scalar_t__ setmode_op_t ;
typedef scalar_t__ setmintocopy_op_t ;
typedef scalar_t__ setfilter_op_t ;
typedef scalar_t__ setdirection_op_t ;
typedef scalar_t__ setbuff_op_t ;
typedef scalar_t__ set_datalink_op_t ;
typedef scalar_t__ read_op_t ;
struct TYPE_3__ {int oneshot_callback; int cleanup_op; int get_airpcap_handle_op; scalar_t__ live_dump_ended_op; scalar_t__ live_dump_op; scalar_t__ setuserbuffer_op; int sendqueue_transmit_op; scalar_t__ oid_set_request_op; scalar_t__ oid_get_request_op; int getevent_op; scalar_t__ setmintocopy_op; scalar_t__ setmode_op; scalar_t__ setbuff_op; scalar_t__ stats_ex_op; scalar_t__ stats_op; scalar_t__ getnonblock_op; scalar_t__ set_datalink_op; scalar_t__ setdirection_op; scalar_t__ setfilter_op; scalar_t__ inject_op; scalar_t__ read_op; } ;
typedef TYPE_1__ pcap_t ;
typedef scalar_t__ oid_set_request_op_t ;
typedef scalar_t__ oid_get_request_op_t ;
typedef scalar_t__ live_dump_op_t ;
typedef scalar_t__ live_dump_ended_op_t ;
typedef scalar_t__ inject_op_t ;
typedef scalar_t__ getnonblock_op_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(pcap_t *VAR_7)
{





 VAR_7->read_op = (read_op_t)VAR_3;
 VAR_7->inject_op = (inject_op_t)VAR_3;
 VAR_7->setfilter_op = (setfilter_op_t)VAR_3;
 VAR_7->setdirection_op = (setdirection_op_t)VAR_3;
 VAR_7->set_datalink_op = (set_datalink_op_t)VAR_3;
 VAR_7->getnonblock_op = (getnonblock_op_t)VAR_3;
 VAR_7->stats_op = (stats_op_t)VAR_3;
 VAR_7->cleanup_op = VAR_0;





 VAR_7->oneshot_callback = VAR_5;
}
