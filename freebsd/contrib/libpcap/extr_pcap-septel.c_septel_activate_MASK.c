
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ snapshot; int selectable_fd; int stats_op; int setnonblock_op; int getnonblock_op; int * set_datalink_op; int setfilter_op; int inject_op; int read_op; scalar_t__ bufsize; int linktype; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static pcap_t *FUNC_0(pcap_t* VAR_8) {

  VAR_8->linktype = VAR_0;
  if (VAR_8->snapshot <= 0 || VAR_8->snapshot > VAR_1)
    VAR_8->snapshot = VAR_1;

  VAR_8->bufsize = 0;




  VAR_8->selectable_fd = -1;

  VAR_8->read_op = VAR_4;
  VAR_8->inject_op = VAR_3;
  VAR_8->setfilter_op = VAR_5;
  VAR_8->set_datalink_op = ((void*)0);
  VAR_8->getnonblock_op = VAR_2;
  VAR_8->setnonblock_op = VAR_6;
  VAR_8->stats_op = VAR_7;

  return 0;
}
