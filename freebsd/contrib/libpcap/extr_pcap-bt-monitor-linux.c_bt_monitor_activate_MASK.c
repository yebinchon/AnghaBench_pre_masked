
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_hci {int hci_channel; int hci_dev; int hci_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {scalar_t__ rfmon; } ;
struct TYPE_6__ {scalar_t__ snapshot; scalar_t__ bufsize; scalar_t__ fd; scalar_t__ selectable_fd; int errbuf; int buffer; int stats_op; int setnonblock_op; int getnonblock_op; int * set_datalink_op; int setdirection_op; int setfilter_op; int inject_op; int read_op; int linktype; TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;
typedef int pcap_bluetooth_linux_monitor_header ;
typedef int opt ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ,int*,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(pcap_t* VAR_21)
{
    struct sockaddr_hci VAR_22;
    int VAR_23 = VAR_8;
    int VAR_24;

    if (VAR_21->opt.rfmon) {

        return VAR_9;
    }
    if (VAR_21->snapshot <= 0 || VAR_21->snapshot > VAR_6)
        VAR_21->snapshot = VAR_6;

    VAR_21->bufsize = VAR_2 + sizeof(pcap_bluetooth_linux_monitor_header) + VAR_21->snapshot;
    VAR_21->linktype = VAR_3;

    VAR_21->read_op = VAR_14;
    VAR_21->inject_op = VAR_13;
    VAR_21->setfilter_op = VAR_18;
    VAR_21->setdirection_op = VAR_15;
    VAR_21->set_datalink_op = ((void*)0);
    VAR_21->getnonblock_op = VAR_19;
    VAR_21->setnonblock_op = VAR_20;
    VAR_21->stats_op = VAR_16;

    VAR_21->fd = FUNC_5(VAR_0, VAR_10, VAR_1);
    if (VAR_21->fd < 0) {
        FUNC_3(VAR_21->errbuf, VAR_7,
            VAR_17, "Can't create raw socket");
        return VAR_8;
    }

    VAR_21->buffer = FUNC_1(VAR_21->bufsize);
    if (!VAR_21->buffer) {
        FUNC_3(VAR_21->errbuf, VAR_7,
            VAR_17, "Can't allocate dump buffer");
        goto close_fail;
    }


    VAR_22.hci_family = VAR_0;
    VAR_22.hci_dev = VAR_5;
    VAR_22.hci_channel = VAR_4;

    if (FUNC_0(VAR_21->fd, (struct sockaddr *) &VAR_22, sizeof(VAR_22)) < 0) {
        FUNC_3(VAR_21->errbuf, VAR_7,
            VAR_17, "Can't attach to interface");
        goto close_fail;
    }

    VAR_24 = 1;
    if (FUNC_4(VAR_21->fd, VAR_11, VAR_12, &VAR_24, sizeof(VAR_24)) < 0) {
        FUNC_3(VAR_21->errbuf, VAR_7,
            VAR_17, "Can't enable time stamp");
        goto close_fail;
    }

    VAR_21->selectable_fd = VAR_21->fd;

    return 0;

close_fail:
    FUNC_2(VAR_21);
    return VAR_23;
}
