
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tstamp_type; scalar_t__ nocapture_local; scalar_t__ protocol; int tstamp_precision; scalar_t__ immediate; scalar_t__ rfmon; scalar_t__ promisc; scalar_t__ buffer_size; scalar_t__ timeout; } ;
struct TYPE_7__ {scalar_t__ bpf_codegen_flags; TYPE_1__ opt; scalar_t__ snapshot; int setnonblock_op; int can_set_rfmon_op; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;

pcap_t *
FUNC_2(char *VAR_3, size_t VAR_4)
{
 pcap_t *VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 == ((void*)0))
  return (((void*)0));







 VAR_5->can_set_rfmon_op = VAR_1;






 VAR_5->setnonblock_op = VAR_2;

 FUNC_0(VAR_5);


 VAR_5->snapshot = 0;
 VAR_5->opt.timeout = 0;
 VAR_5->opt.buffer_size = 0;
 VAR_5->opt.promisc = 0;
 VAR_5->opt.rfmon = 0;
 VAR_5->opt.immediate = 0;
 VAR_5->opt.tstamp_type = -1;
 VAR_5->opt.tstamp_precision = VAR_0;




 VAR_5->opt.protocol = 0;
 VAR_5->bpf_codegen_flags = 0;

 return (VAR_5);
}
