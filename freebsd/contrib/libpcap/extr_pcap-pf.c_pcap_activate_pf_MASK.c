
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_int ;
struct timeval {int tv_sec; int tv_usec; } ;
struct pcap_pf {int OrigMissed; } ;
struct enfilter {int enf_Priority; scalar_t__ enf_FilterLen; } ;
struct endevp {int end_dev_type; } ;
struct TYPE_5__ {int device; int timeout; scalar_t__ promisc; int immediate; } ;
struct TYPE_6__ {int fd; scalar_t__ snapshot; scalar_t__ linktype; int offset; int dlt_count; scalar_t__ fddipad; int bufsize; int selectable_fd; int stats_op; int setnonblock_op; int getnonblock_op; int * set_datalink_op; int * setdirection_op; int setfilter_op; int inject_op; int read_op; int errbuf; int * buffer; TYPE_1__ opt; void** dlt_list; struct pcap_pf* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int caddr_t ;
typedef int Filter ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 short VAR_14 ;
 short VAR_15 ;






 short VAR_16 ;
 short VAR_17 ;
 short VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (struct enfilter*,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,scalar_t__,char*,...) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_5 (int ,int ,char*,int) ;
 int VAR_32 ;
 void* FUNC_6 (int,int ) ;

__attribute__((used)) static int
FUNC_7(pcap_t *VAR_33)
{
 struct pcap_pf *VAR_34 = VAR_33->priv;
 short VAR_35;
 int VAR_36 = -1;
 struct enfilter VAR_37;
 struct endevp VAR_38;
 int VAR_39;
 VAR_33->fd = FUNC_6(VAR_33->opt.device, VAR_21);
 if (VAR_33->fd == -1 && VAR_26 == VAR_7)
  VAR_33->fd = FUNC_6(VAR_33->opt.device, VAR_20);
 if (VAR_33->fd < 0) {
  if (VAR_26 == VAR_7) {
   FUNC_5(VAR_33->errbuf, VAR_22,
       "pf open: %s: Permission denied\n"
"your system may not be properly configured; see the packetfilter(4) man page",
       VAR_33->opt.device);
   VAR_39 = VAR_24;
  } else {
   FUNC_4(VAR_33->errbuf, VAR_22,
       VAR_26, "pf open: %s", VAR_33->opt.device);
   VAR_39 = VAR_23;
  }
  goto bad;
 }
 if (VAR_33->snapshot <= 0 || VAR_33->snapshot > VAR_19)
  VAR_33->snapshot = VAR_19;

 VAR_34->OrigMissed = -1;
 VAR_35 = VAR_18|VAR_16;
 if (!VAR_33->opt.immediate)
  VAR_35 |= VAR_14;
 if (VAR_33->opt.promisc)
  VAR_35 |= VAR_17;
 if (FUNC_0(VAR_33->fd, VAR_9, (caddr_t)&VAR_35) < 0) {
  FUNC_4(VAR_33->errbuf, VAR_22,
      VAR_26, "EIOCMBIS");
  VAR_39 = VAR_23;
  goto bad;
 }






 if (FUNC_0(VAR_33->fd, VAR_11, (caddr_t)&VAR_36) < 0) {
  FUNC_4(VAR_33->errbuf, VAR_22,
      VAR_26, "EIOCSETW");
  VAR_39 = VAR_23;
  goto bad;
 }

 if (FUNC_0(VAR_33->fd, VAR_8, (caddr_t)&VAR_38) < 0) {
  FUNC_4(VAR_33->errbuf, VAR_22,
      VAR_26, "EIOCDEVP");
  VAR_39 = VAR_23;
  goto bad;
 }




 switch (VAR_38.end_dev_type) {

 case 133:
  VAR_33->linktype = VAR_2;
  VAR_33->offset = 2;
  VAR_33->dlt_list = (u_int *) FUNC_1(sizeof(u_int) * 2);



  if (VAR_33->dlt_list != ((void*)0)) {
   VAR_33->dlt_list[0] = VAR_2;
   VAR_33->dlt_list[1] = VAR_1;
   VAR_33->dlt_count = 2;
  }
  break;

 case 132:
  VAR_33->linktype = VAR_3;
  break;


 case 129:
  VAR_33->linktype = VAR_6;
  break;



 case 130:
  VAR_33->linktype = VAR_5;
  break;



 case 131:




  VAR_33->linktype = VAR_2;
  VAR_33->offset = 2;
  break;



 case 128:
  VAR_33->linktype = VAR_4;
  break;


 default:
  FUNC_5(VAR_33->errbuf, VAR_22,
      "unknown data-link type %u", VAR_38.end_dev_type);
  VAR_39 = VAR_23;
  goto bad;
 }

 if (VAR_33->linktype == VAR_3) {
  VAR_33->fddipad = VAR_25;


  VAR_33->snapshot += VAR_25;
 } else
  VAR_33->fddipad = 0;
 if (FUNC_0(VAR_33->fd, VAR_13, (caddr_t)&VAR_33->snapshot) < 0) {
  FUNC_4(VAR_33->errbuf, VAR_22,
      VAR_26, "EIOCTRUNCATE");
  VAR_39 = VAR_23;
  goto bad;
 }

 FUNC_2(&VAR_37, 0, sizeof(VAR_37));
 VAR_37.enf_Priority = 37;
 VAR_37.enf_FilterLen = 0;
 if (FUNC_0(VAR_33->fd, VAR_10, (caddr_t)&VAR_37) < 0) {
  FUNC_4(VAR_33->errbuf, VAR_22,
      VAR_26, "EIOCSETF");
  VAR_39 = VAR_23;
  goto bad;
 }

 if (VAR_33->opt.timeout != 0) {
  struct timeval VAR_40;
  VAR_40.tv_sec = VAR_33->opt.timeout / 1000;
  VAR_40.tv_usec = (VAR_33->opt.timeout * 1000) % 1000000;
  if (FUNC_0(VAR_33->fd, VAR_12, (caddr_t)&VAR_40) < 0) {
   FUNC_4(VAR_33->errbuf, VAR_22,
       VAR_26, "EIOCSRTIMEOUT");
   VAR_39 = VAR_23;
   goto bad;
  }
 }

 VAR_33->bufsize = VAR_0;
 VAR_33->buffer = FUNC_1(VAR_33->bufsize + VAR_33->offset);
 if (VAR_33->buffer == ((void*)0)) {
  FUNC_4(VAR_33->errbuf, VAR_22,
      VAR_26, "malloc");
  VAR_39 = VAR_23;
  goto bad;
 }




 VAR_33->selectable_fd = VAR_33->fd;

 VAR_33->read_op = VAR_29;
 VAR_33->inject_op = VAR_28;
 VAR_33->setfilter_op = VAR_30;
 VAR_33->setdirection_op = ((void*)0);
 VAR_33->set_datalink_op = ((void*)0);
 VAR_33->getnonblock_op = VAR_27;
 VAR_33->setnonblock_op = VAR_31;
 VAR_33->stats_op = VAR_32;

 return (0);
 bad:
 FUNC_3(VAR_33);
 return (VAR_39);
}
