
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* setnonblock_op ) (TYPE_1__*,int) ;int errbuf; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

int
FUNC_2(pcap_t *VAR_1, int VAR_2, char *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_1->setnonblock_op(VAR_1, VAR_2);
 if (VAR_4 == -1) {
  FUNC_0(VAR_3, VAR_1->errbuf, VAR_0);
 }
 return (VAR_4);
}
