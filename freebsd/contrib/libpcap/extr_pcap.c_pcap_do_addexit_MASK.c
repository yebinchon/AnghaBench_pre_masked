
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errbuf; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;

int
FUNC_2(pcap_t *VAR_3)
{




 if (!VAR_1) {
  if (FUNC_0(VAR_2) != 0) {



   FUNC_1(VAR_3->errbuf, "atexit failed", VAR_0);
   return (0);
  }
  VAR_1 = 1;
 }
 return (1);
}
