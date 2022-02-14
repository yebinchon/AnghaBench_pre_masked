
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_11__ {scalar_t__ ps_ifdrop; scalar_t__ ps_recv; scalar_t__ ps_drop; } ;
struct pcap_dag {int dag_stream; int dag_fcs_bits; int dag_timeout; int * dag_ref; TYPE_1__ stat; scalar_t__ dag_mem_top; scalar_t__ dag_mem_bottom; struct timeval required_select_timeout; int drop_attr; int dag_root; } ;
struct TYPE_12__ {char* device; int timeout; scalar_t__ immediate; } ;
struct TYPE_13__ {scalar_t__ snapshot; int linktype; int selectable_fd; int fd; int cleanup_op; int stats_op; int setnonblock_op; int getnonblock_op; int set_datalink_op; int * setdirection_op; int setfilter_op; int inject_op; int read_op; int errbuf; scalar_t__ bufsize; TYPE_2__ opt; void* linktype_ext; struct timeval* required_select_timeout; struct pcap_dag* priv; } ;
typedef TYPE_3__ pcap_t ;
struct TYPE_14__ {int device_code; } ;
typedef TYPE_4__ daginf_t ;
typedef int dag_size_t ;


 void* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ,int,int*,struct timeval*,struct timeval*) ;
 TYPE_4__* FUNC_12 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (char*,char*,scalar_t__,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_14 (int ,int,int,struct timeval*,struct timeval*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_15 (int ,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_16 (int ,int) ;
 int FUNC_17 (TYPE_3__*) ;
 int VAR_12 ;
 int FUNC_18 (int ,char*,char*) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (int ,int ,int ,char*,...) ;
 int VAR_16 ;
 int FUNC_25 (int ,int ,char*,...) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 char* FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (char*) ;

__attribute__((used)) static int FUNC_28(pcap_t* VAR_19)
{
 struct pcap_dag *VAR_20 = VAR_19->priv;
 char *VAR_21;
 int VAR_22;
 daginf_t* VAR_23;
 char * VAR_24 = ((void*)0);
 char * VAR_25 = VAR_19->opt.device;
 dag_size_t VAR_26;
 struct timeval VAR_27;
 struct timeval VAR_28;

 if (VAR_25 == ((void*)0)) {
  FUNC_25(VAR_19->errbuf, VAR_3, "device is NULL");
  return -1;
 }


 VAR_24 = (char *)FUNC_21(FUNC_27(VAR_25) + 16);
 if (VAR_24 == ((void*)0)) {
  FUNC_24(VAR_19->errbuf, VAR_3,
      VAR_12, "Can't allocate string for device name");
  goto fail;
 }


 if (FUNC_13(VAR_25, VAR_24, FUNC_27(VAR_25) + 16, &VAR_20->dag_stream) < 0) {
  FUNC_24(VAR_19->errbuf, VAR_3,
      VAR_12, "dag_parse_name");
  goto fail;
 }
 VAR_25 = VAR_24;

 if (VAR_20->dag_stream%2) {
  FUNC_25(VAR_19->errbuf, VAR_3, "dag_parse_name: tx (even numbered) streams not supported for capture");
  goto fail;
 }


 if((VAR_20->dag_ref = FUNC_8((char *)VAR_25)) == ((void*)0)) {
  FUNC_24(VAR_19->errbuf, VAR_3,
      VAR_12, "dag_config_init %s", VAR_25);
  goto fail;
 }

 if((VAR_19->fd = FUNC_5(VAR_20->dag_ref)) < 0) {
  FUNC_24(VAR_19->errbuf, VAR_3,
      VAR_12, "dag_config_get_card_fd %s", VAR_25);
  goto fail;
 }


 if (FUNC_2(VAR_19->fd, VAR_20->dag_stream, 0, 0) < 0) {
  FUNC_24(VAR_19->errbuf, VAR_3,
      VAR_12, "dag_attach_stream");
  goto failclose;
 }


 VAR_20->drop_attr = VAR_14;
 VAR_20->dag_root = FUNC_7(VAR_20->dag_ref);
 if ( FUNC_3(VAR_20->dag_root, VAR_13, 0) )
 {
  VAR_20->drop_attr = FUNC_6(VAR_20->dag_ref, VAR_15, VAR_20->dag_stream/2);
 }




 if (FUNC_11(VAR_19->fd, VAR_20->dag_stream,
    &VAR_26, &VAR_27, &VAR_28) < 0) {
  FUNC_24(VAR_19->errbuf, VAR_3,
      VAR_12, "dag_get_stream_poll");
  goto faildetach;
 }





 VAR_20->required_select_timeout = VAR_28;
 VAR_19->required_select_timeout = &VAR_20->required_select_timeout;
 if (VAR_19->snapshot <= 0 || VAR_19->snapshot > VAR_0)
  VAR_19->snapshot = VAR_0;

 if (VAR_19->opt.immediate) {



  VAR_26 = 0;
 } else {




  VAR_26 = 65536;
 }




 VAR_27.tv_sec = VAR_19->opt.timeout/1000;
 VAR_27.tv_usec = (VAR_19->opt.timeout%1000) * 1000;

 if (FUNC_14(VAR_19->fd, VAR_20->dag_stream,
    VAR_26, &VAR_27, &VAR_28) < 0) {
  FUNC_24(VAR_19->errbuf, VAR_3,
      VAR_12, "dag_set_stream_poll");
  goto faildetach;
 }
 if(FUNC_15(VAR_19->fd, VAR_20->dag_stream) < 0) {
  FUNC_24(VAR_19->errbuf, VAR_3,
      VAR_12, "dag_start_stream %s", VAR_25);
  goto faildetach;
 }






 VAR_20->dag_mem_bottom = 0;
 VAR_20->dag_mem_top = 0;





 VAR_23 = FUNC_12(VAR_19->fd);
 if ((0x4200 == VAR_23->device_code) || (0x4230 == VAR_23->device_code)) {

  VAR_20->dag_fcs_bits = 0;


  VAR_19->linktype_ext = FUNC_0(0);
 } else {



  VAR_20->dag_fcs_bits = 32;


  if ((VAR_21 = FUNC_20("ERF_FCS_BITS")) != ((void*)0)) {
   if ((VAR_22 = FUNC_1(VAR_21)) == 0 || VAR_22 == 16 || VAR_22 == 32) {
    VAR_20->dag_fcs_bits = VAR_22;
   } else {
    FUNC_25(VAR_19->errbuf, VAR_3,
     "pcap_activate %s: bad ERF_FCS_BITS value (%d) in environment", VAR_25, VAR_22);
    goto failstop;
   }
  }




  if ((VAR_21 = FUNC_20("ERF_DONT_STRIP_FCS")) != ((void*)0)) {


   VAR_19->linktype_ext = FUNC_0(VAR_20->dag_fcs_bits/16);


   VAR_20->dag_fcs_bits = 0;
  }
 }

 VAR_20->dag_timeout = VAR_19->opt.timeout;

 VAR_19->linktype = -1;
 if (FUNC_10(VAR_19) < 0)
  goto failstop;

 VAR_19->bufsize = 0;

 if (FUNC_22(VAR_19) < 0) {
  FUNC_24(VAR_19->errbuf, VAR_3,
      VAR_12, "new_pcap_dag %s", VAR_25);
  goto failstop;
 }




 VAR_19->selectable_fd = -1;

 if (VAR_24 != ((void*)0)) {
  FUNC_19((char *)VAR_24);
 }

 VAR_19->read_op = VAR_7;
 VAR_19->inject_op = VAR_5;
 VAR_19->setfilter_op = VAR_9;
 VAR_19->setdirection_op = ((void*)0);
 VAR_19->set_datalink_op = VAR_8;
 VAR_19->getnonblock_op = VAR_16;
 VAR_19->setnonblock_op = VAR_10;
 VAR_19->stats_op = VAR_11;
 VAR_19->cleanup_op = VAR_6;
 VAR_20->stat.ps_drop = 0;
 VAR_20->stat.ps_recv = 0;
 VAR_20->stat.ps_ifdrop = 0;
 return 0;

failstop:
 if (FUNC_16(VAR_19->fd, VAR_20->dag_stream) < 0) {
  FUNC_18(VAR_18,"dag_stop_stream: %s\n", FUNC_26(VAR_12));
 }

faildetach:
 if (FUNC_9(VAR_19->fd, VAR_20->dag_stream) < 0)
  FUNC_18(VAR_18,"dag_detach_stream: %s\n", FUNC_26(VAR_12));

failclose:
 FUNC_4(VAR_20->dag_ref);
 FUNC_17(VAR_19);

fail:
 FUNC_23(VAR_19);
 if (VAR_24 != ((void*)0)) {
  FUNC_19((char *)VAR_24);
 }

 return VAR_4;
}
