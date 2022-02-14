
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int (* read_op ) (TYPE_1__*,int,int ,int *) ;} ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_handler ;


 int FUNC_0 (TYPE_1__*,int,int ,int *) ;

int
FUNC_1(pcap_t *VAR_0, int VAR_1, pcap_handler VAR_2, u_char *VAR_3)
{
 return (VAR_0->read_op(VAR_0, VAR_1, VAR_2, VAR_3));
}
