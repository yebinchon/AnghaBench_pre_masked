
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct pcap_dlpi {int dlpi_hd; } ;
struct TYPE_11__ {int device; scalar_t__ promisc; scalar_t__ rfmon; } ;
struct TYPE_12__ {scalar_t__ snapshot; int (* cleanup_op ) (TYPE_2__*) ;int stats_op; int setnonblock_op; int getnonblock_op; int * set_datalink_op; int * setdirection_op; int setfilter_op; int inject_op; int read_op; int fd; int selectable_fd; int errbuf; TYPE_1__ opt; struct pcap_dlpi* priv; } ;
typedef TYPE_2__ pcap_t ;
struct TYPE_13__ {int di_mactype; } ;
typedef TYPE_3__ dlpi_info_t ;
typedef int dlpi_handle_t ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (int ,int ,scalar_t__,char*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_10 (int ,char*,int,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int
FUNC_12(pcap_t *VAR_29)
{
 struct pcap_dlpi *VAR_30 = VAR_29->priv;
 int VAR_31 = 0;
 int VAR_32;
 dlpi_handle_t VAR_33;
 dlpi_info_t VAR_34;






 VAR_32 = FUNC_3(VAR_29->opt.device, &VAR_33, VAR_4|VAR_3);
 if (VAR_32 != VAR_5) {
  if (VAR_32 == VAR_1 || VAR_32 == VAR_2)
   VAR_31 = VAR_17;
  else if (VAR_32 == VAR_9 &&
      (VAR_22 == VAR_11 || VAR_22 == VAR_10))
   VAR_31 = VAR_18;
  else
   VAR_31 = VAR_16;
  FUNC_10(VAR_29->opt.device, "dlpi_open", VAR_32,
      VAR_29->errbuf);
  return (VAR_31);
 }
 VAR_30->dlpi_hd = VAR_33;

 if (VAR_29->opt.rfmon) {




  VAR_31 = VAR_20;
  goto bad;
 }


 if ((VAR_32 = FUNC_0(VAR_30->dlpi_hd, VAR_0, 0)) != VAR_5) {
  VAR_31 = VAR_16;
  FUNC_10(VAR_29->opt.device, "dlpi_bind", VAR_32, VAR_29->errbuf);
  goto bad;
 }
 if (VAR_29->snapshot <= 0 || VAR_29->snapshot > VAR_14)
  VAR_29->snapshot = VAR_14;


 if (VAR_29->opt.promisc) {
  VAR_32 = FUNC_4(VAR_29, VAR_7);
  if (VAR_32 < 0) {
   if (VAR_32 == VAR_18)
    VAR_31 = VAR_19;
   else
    VAR_31 = VAR_32;
   goto bad;
  }
 } else {

  VAR_32 = FUNC_4(VAR_29, VAR_6);
  if (VAR_32 < 0) {
   VAR_31 = VAR_32;
   goto bad;
  }
 }


 VAR_32 = FUNC_4(VAR_29, VAR_8);
 if (VAR_32 < 0) {




  if (VAR_29->opt.promisc)
   VAR_31 = VAR_21;
  else {
   VAR_31 = VAR_32;
   goto bad;
  }
 }


 if ((VAR_32 = FUNC_2(VAR_30->dlpi_hd, &VAR_34, 0)) != VAR_5) {
  VAR_31 = VAR_16;
  FUNC_10(VAR_29->opt.device, "dlpi_info", VAR_32, VAR_29->errbuf);
  goto bad;
 }

 if (FUNC_11(VAR_29, VAR_34.di_mactype) != 0) {
  VAR_31 = VAR_16;
  goto bad;
 }

 VAR_29->fd = FUNC_1(VAR_30->dlpi_hd);


 if (FUNC_8(VAR_29, VAR_29->snapshot) != 0) {
  VAR_31 = VAR_16;
  goto bad;
 }




 if (FUNC_5(VAR_29->fd, VAR_13, VAR_12) != 0) {
  VAR_31 = VAR_16;
  FUNC_9(VAR_29->errbuf, VAR_15,
      VAR_22, "FLUSHR");
  goto bad;
 }


 if (FUNC_6(VAR_29) != 0) {
  VAR_31 = VAR_16;
  goto bad;
 }





 VAR_29->selectable_fd = VAR_29->fd;

 VAR_29->read_op = VAR_26;
 VAR_29->inject_op = VAR_25;
 VAR_29->setfilter_op = VAR_23;
 VAR_29->setdirection_op = ((void*)0);
 VAR_29->set_datalink_op = ((void*)0);
 VAR_29->getnonblock_op = VAR_24;
 VAR_29->setnonblock_op = VAR_27;
 VAR_29->stats_op = VAR_28;
 VAR_29->cleanup_op = FUNC_7;

 return (VAR_31);
bad:
 FUNC_7(VAR_29);
 return (VAR_31);
}
