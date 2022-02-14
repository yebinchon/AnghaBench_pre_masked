
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_snf {int snf_timeout; int * snf_inj; int snf_handle; int snf_ring; int snf_boardnum; } ;
struct TYPE_4__ {char* device; int buffer_size; int timeout; } ;
struct TYPE_5__ {scalar_t__ snapshot; int selectable_fd; int cleanup_op; int stats_op; int setnonblock_op; int getnonblock_op; int set_datalink_op; int * setdirection_op; int setfilter_op; int inject_op; int read_op; int linktype; int errbuf; TYPE_1__ opt; struct pcap_snf* priv; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int,char*,...) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int *,int,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,int *,int ) ;

__attribute__((used)) static int
FUNC_8(pcap_t* VAR_12)
{
 struct pcap_snf *VAR_13 = VAR_12->priv;
 char *VAR_14 = VAR_12->opt.device;
 const char *VAR_15 = ((void*)0);
 int VAR_16;
 int VAR_17 = -1, VAR_18 = -1;

 if (VAR_14 == ((void*)0)) {
  FUNC_3(VAR_12->errbuf, VAR_2, "device is NULL");
  return -1;
 }



 if ((VAR_15 = FUNC_1("SNF_FLAGS")) && *VAR_15)
  VAR_17 = FUNC_7(VAR_15, ((void*)0), 0);
 else if ((VAR_15 = FUNC_1("SNF_NUM_RINGS")) && *VAR_15 && FUNC_0(VAR_15) > 1)
  VAR_17 = VAR_3;
 else
  VAR_15 = ((void*)0);
 VAR_16 = FUNC_4(VAR_13->snf_boardnum,
   0,
   ((void*)0),
                        (VAR_12->opt.buffer_size > 0 && VAR_12->opt.buffer_size < 1048576) ? 1048576 : VAR_12->opt.buffer_size,
   VAR_17,
   &VAR_13->snf_handle);
 if (VAR_16 != 0) {
  FUNC_2(VAR_12->errbuf, VAR_2,
      VAR_16, "snf_open failed");
  return -1;
 }

 if ((VAR_15 = FUNC_1("SNF_PCAP_RING_ID")) && *VAR_15) {
  VAR_18 = (int) FUNC_7(VAR_15, ((void*)0), 0);
 }
 VAR_16 = FUNC_5(VAR_13->snf_handle, VAR_18, &VAR_13->snf_ring);
 if (VAR_16 != 0) {
  FUNC_2(VAR_12->errbuf, VAR_2,
      VAR_16, "snf_ring_open_id(ring=%d) failed", VAR_18);
  return -1;
 }
 if (VAR_12->snapshot <= 0 || VAR_12->snapshot > VAR_1)
  VAR_12->snapshot = VAR_1;

 if (VAR_12->opt.timeout <= 0)
  VAR_13->snf_timeout = -1;
 else
  VAR_13->snf_timeout = VAR_12->opt.timeout;

 VAR_16 = FUNC_6(VAR_13->snf_handle);
 if (VAR_16 != 0) {
  FUNC_2(VAR_12->errbuf, VAR_2,
      VAR_16, "snf_start failed");
  return -1;
 }





 VAR_12->selectable_fd = -1;

 VAR_12->linktype = VAR_0;
 VAR_12->read_op = VAR_8;
 VAR_12->inject_op = VAR_5;
 VAR_12->setfilter_op = VAR_10;
 VAR_12->setdirection_op = ((void*)0);
 VAR_12->set_datalink_op = VAR_9;
 VAR_12->getnonblock_op = VAR_4;
 VAR_12->setnonblock_op = VAR_11;
 VAR_12->stats_op = VAR_6;
 VAR_12->cleanup_op = VAR_7;



 return 0;
}
