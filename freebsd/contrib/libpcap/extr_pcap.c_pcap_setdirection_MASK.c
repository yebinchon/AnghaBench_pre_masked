
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* setdirection_op ) (TYPE_1__*,int ) ;int errbuf; } ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_direction_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int
FUNC_2(pcap_t *VAR_1, pcap_direction_t VAR_2)
{
 if (VAR_1->setdirection_op == ((void*)0)) {
  FUNC_0(VAR_1->errbuf, VAR_0,
      "Setting direction is not implemented on this platform");
  return (-1);
 } else
  return (VAR_1->setdirection_op(VAR_1, VAR_2));
}
