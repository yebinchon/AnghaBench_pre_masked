
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_dlpi {scalar_t__ send_fd; } ;
struct TYPE_3__ {int errbuf; int fd; struct pcap_dlpi* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void const*,size_t) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,void const*,size_t) ;

__attribute__((used)) static int
FUNC_5(pcap_t *VAR_2, const void *VAR_3, size_t VAR_4)
{



 int VAR_5;
 FUNC_3(VAR_2->errbuf, "send: Not supported on this version of this OS",
     VAR_0);
 VAR_5 = -1;

 return (VAR_5);
}
