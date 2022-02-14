
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u_int ;
struct sockaddr_nit {int snit_ifname; int snit_family; } ;
struct sockaddr {int dummy; } ;
typedef int snit ;
struct TYPE_7__ {int device; scalar_t__ rfmon; } ;
struct TYPE_8__ {int snapshot; int fd; int bufsize; int selectable_fd; int dlt_count; int stats_op; int setnonblock_op; int getnonblock_op; int * set_datalink_op; int * setdirection_op; int setfilter_op; int inject_op; int read_op; void** dlt_list; int errbuf; int * buffer; void* linktype; TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(pcap_t *VAR_18)
{
 int VAR_19;
 struct sockaddr_nit VAR_20;

 if (VAR_18->opt.rfmon) {





  return (VAR_9);
 }
 if (VAR_18->snapshot <= 0 || VAR_18->snapshot > VAR_4)
  VAR_18->snapshot = VAR_4;

 if (VAR_18->snapshot < 96)



  VAR_18->snapshot = 96;

 FUNC_2(VAR_18, 0, sizeof(*VAR_18));
 VAR_18->fd = VAR_19 = FUNC_6(VAR_0, VAR_10, VAR_6);
 if (VAR_19 < 0) {
  FUNC_5(VAR_18->errbuf, VAR_7,
      VAR_11, "socket");
  goto bad;
 }
 VAR_20.snit_family = VAR_0;
 (void)FUNC_7(VAR_20.snit_ifname, VAR_18->opt.device, VAR_5);

 if (FUNC_0(VAR_19, (struct sockaddr *)&VAR_20, sizeof(VAR_20))) {







  FUNC_5(VAR_18->errbuf, VAR_7,
      VAR_11, "bind: %s", VAR_20.snit_ifname);
  goto bad;
 }
 if (FUNC_3(VAR_18) < 0)
  goto bad;




 VAR_18->linktype = VAR_3;

 VAR_18->bufsize = VAR_1;
 VAR_18->buffer = FUNC_1(VAR_18->bufsize);
 if (VAR_18->buffer == ((void*)0)) {
  FUNC_5(VAR_18->errbuf, VAR_7,
      VAR_11, "malloc");
  goto bad;
 }




 VAR_18->selectable_fd = VAR_18->fd;
 VAR_18->dlt_list = (u_int *) FUNC_1(sizeof(u_int) * 2);



 if (VAR_18->dlt_list != ((void*)0)) {
  VAR_18->dlt_list[0] = VAR_3;
  VAR_18->dlt_list[1] = VAR_2;
  VAR_18->dlt_count = 2;
 }

 VAR_18->read_op = VAR_15;
 VAR_18->inject_op = VAR_14;
 VAR_18->setfilter_op = VAR_12;
 VAR_18->setdirection_op = ((void*)0);
 VAR_18->set_datalink_op = ((void*)0);
 VAR_18->getnonblock_op = VAR_13;
 VAR_18->setnonblock_op = VAR_16;
 VAR_18->stats_op = VAR_17;

 return (0);
 bad:
 FUNC_4(VAR_18);
 return (VAR_8);
}
