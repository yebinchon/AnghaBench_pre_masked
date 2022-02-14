
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int device; scalar_t__ rfmon; } ;
struct TYPE_6__ {scalar_t__ snapshot; int fd; scalar_t__ bufsize; scalar_t__ offset; int selectable_fd; int errbuf; int buffer; int linktype; TYPE_1__ opt; int stats_op; int read_op; int (* cleanup_op ) (TYPE_2__*) ;int setnonblock_op; int getnonblock_op; int * set_datalink_op; int setdirection_op; int setfilter_op; int inject_op; } ;
typedef TYPE_2__ pcap_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4(pcap_t *VAR_12) {
 int VAR_13;

 if (VAR_12->opt.rfmon) {




  return VAR_3;
 }



 VAR_12->inject_op = VAR_6;
 VAR_12->setfilter_op = VAR_9;
 VAR_12->setdirection_op = VAR_8;
 VAR_12->set_datalink_op = ((void*)0);
 VAR_12->getnonblock_op = VAR_5;
 VAR_12->setnonblock_op = VAR_10;
 VAR_12->cleanup_op = FUNC_2;
 VAR_12->read_op = VAR_7;
 VAR_12->stats_op = VAR_11;

 VAR_13 = FUNC_0(VAR_12->opt.device, VAR_12->errbuf,
     &VAR_12->linktype);
 if (VAR_13 == -1)
  return VAR_2;
 if (VAR_12->snapshot <= 0 || VAR_12->snapshot > VAR_0)
  VAR_12->snapshot = VAR_0;

 VAR_12->fd = VAR_13;
 VAR_12->bufsize = VAR_12->snapshot;



 VAR_12->buffer = FUNC_1(VAR_12->bufsize + VAR_12->offset);
 if (!VAR_12->buffer) {
  FUNC_3(VAR_12->errbuf, VAR_1,
      VAR_4, "malloc");
  FUNC_2(VAR_12);
  return VAR_2;
 }





 VAR_12->selectable_fd = VAR_12->fd;

 return 0;
}
