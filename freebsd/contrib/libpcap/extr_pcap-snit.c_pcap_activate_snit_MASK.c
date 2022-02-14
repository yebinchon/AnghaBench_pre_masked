
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u_int ;
struct strioctl {int ic_len; char* ic_dp; int ic_cmd; int ic_timout; } ;
struct ifreq {char* ifr_name; } ;
struct TYPE_6__ {int device; scalar_t__ rfmon; } ;
struct TYPE_7__ {int snapshot; int fd; int bufsize; int selectable_fd; int dlt_count; int stats_op; int setnonblock_op; int getnonblock_op; int * set_datalink_op; int * setdirection_op; int setfilter_op; int inject_op; int read_op; void** dlt_list; int errbuf; int * buffer; void* linktype; TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;
typedef int ifr ;
typedef int chunksize ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (int,int ,char*) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,scalar_t__,char*,...) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_7(pcap_t *VAR_29)
{
 struct strioctl VAR_30;
 struct ifreq VAR_31;
 int VAR_32 = VAR_1;
 int VAR_33;
 static const char VAR_34[] = "/dev/nit";
 int VAR_35;

 if (VAR_29->opt.rfmon) {




  return (VAR_20);
 }
 if (VAR_29->snapshot <= 0 || VAR_29->snapshot > VAR_11)
  VAR_29->snapshot = VAR_11;

 if (VAR_29->snapshot < 96)



  VAR_29->snapshot = 96;
 VAR_29->fd = VAR_33 = FUNC_3(VAR_34, VAR_16);
 if (VAR_33 < 0 && VAR_22 == VAR_4)
  VAR_29->fd = VAR_33 = FUNC_3(VAR_34, VAR_15);
 if (VAR_33 < 0) {
  if (VAR_22 == VAR_4)
   VAR_35 = VAR_19;
  else
   VAR_35 = VAR_18;
  FUNC_5(VAR_29->errbuf, VAR_17,
      VAR_22, "%s", VAR_34);
  goto bad;
 }


 if (FUNC_0(VAR_33, VAR_9, (char *)VAR_21) < 0) {
  FUNC_5(VAR_29->errbuf, VAR_17,
      VAR_22, "I_SRDOPT");
  VAR_35 = VAR_18;
  goto bad;
 }
 if (FUNC_0(VAR_33, VAR_8, "nbuf") < 0) {
  FUNC_5(VAR_29->errbuf, VAR_17,
      VAR_22, "push nbuf");
  VAR_35 = VAR_18;
  goto bad;
 }

 VAR_30.ic_cmd = VAR_13;
 VAR_30.ic_timout = VAR_6;
 VAR_30.ic_len = sizeof(VAR_32);
 VAR_30.ic_dp = (char *)&VAR_32;
 if (FUNC_0(VAR_33, VAR_10, (char *)&VAR_30) < 0) {
  FUNC_5(VAR_29->errbuf, VAR_17,
      VAR_22, "NIOCSCHUNK");
  VAR_35 = VAR_18;
  goto bad;
 }


 FUNC_6(VAR_31.ifr_name, VAR_29->opt.device, sizeof(VAR_31.ifr_name));
 VAR_31.ifr_name[sizeof(VAR_31.ifr_name) - 1] = '\0';
 VAR_30.ic_cmd = VAR_12;
 VAR_30.ic_len = sizeof(VAR_31);
 VAR_30.ic_dp = (char *)&VAR_31;
 if (FUNC_0(VAR_33, VAR_10, (char *)&VAR_30) < 0) {





  FUNC_5(VAR_29->errbuf, VAR_17,
      VAR_22, "NIOCBIND: %s", VAR_31.ifr_name);
  VAR_35 = VAR_18;
  goto bad;
 }


 VAR_30.ic_cmd = VAR_14;
 VAR_30.ic_len = sizeof(VAR_29->snapshot);
 VAR_30.ic_dp = (char *)&VAR_29->snapshot;
 if (FUNC_0(VAR_33, VAR_10, (char *)&VAR_30) < 0) {
  FUNC_5(VAR_29->errbuf, VAR_17,
      VAR_22, "NIOCSSNAP");
  VAR_35 = VAR_18;
  goto bad;
 }
 if (FUNC_2(VAR_29) < 0) {
  VAR_35 = VAR_18;
  goto bad;
 }

 (void)FUNC_0(VAR_33, VAR_7, (char *)VAR_5);



 VAR_29->linktype = VAR_3;

 VAR_29->bufsize = VAR_0;
 VAR_29->buffer = FUNC_1(VAR_29->bufsize);
 if (VAR_29->buffer == ((void*)0)) {
  FUNC_5(VAR_29->errbuf, VAR_17,
      VAR_22, "malloc");
  VAR_35 = VAR_18;
  goto bad;
 }





 VAR_29->selectable_fd = VAR_29->fd;
 VAR_29->dlt_list = (u_int *) FUNC_1(sizeof(u_int) * 2);



 if (VAR_29->dlt_list != ((void*)0)) {
  VAR_29->dlt_list[0] = VAR_3;
  VAR_29->dlt_list[1] = VAR_2;
  VAR_29->dlt_count = 2;
 }

 VAR_29->read_op = VAR_26;
 VAR_29->inject_op = VAR_25;
 VAR_29->setfilter_op = VAR_23;
 VAR_29->setdirection_op = ((void*)0);
 VAR_29->set_datalink_op = ((void*)0);
 VAR_29->getnonblock_op = VAR_24;
 VAR_29->setnonblock_op = VAR_27;
 VAR_29->stats_op = VAR_28;

 return (0);
 bad:
 FUNC_4(VAR_29);
 return (VAR_35);
}
