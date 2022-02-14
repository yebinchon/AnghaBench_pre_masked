
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errbuf; scalar_t__ activated; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;

int
FUNC_1(pcap_t *VAR_1)
{
 if (VAR_1->activated) {
  FUNC_0(VAR_1->errbuf, VAR_0, "can't perform "
   " operation on activated capture");
  return (-1);
 }
 return (0);
}
