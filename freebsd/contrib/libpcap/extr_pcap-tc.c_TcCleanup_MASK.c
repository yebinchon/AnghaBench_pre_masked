
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcap_tc {int * PpiPacket; int * TcInstance; int * TcPacketsBuffer; } ;
struct TYPE_5__ {struct pcap_tc* priv; } ;
typedef TYPE_1__ pcap_t ;
struct TYPE_6__ {int (* InstanceClose ) (int *) ;int (* PacketsBufferDestroy ) (int *) ;} ;


 int FUNC_0 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(pcap_t *VAR_1)
{
 struct pcap_tc *VAR_2 = VAR_1->priv;

 if (VAR_2->TcPacketsBuffer != ((void*)0))
 {
  VAR_0.PacketsBufferDestroy(VAR_2->TcPacketsBuffer);
  VAR_2->TcPacketsBuffer = ((void*)0);
 }
 if (VAR_2->TcInstance != ((void*)0))
 {



  VAR_0.InstanceClose(VAR_2->TcInstance);
  VAR_2->TcInstance = ((void*)0);
 }

 if (VAR_2->PpiPacket != ((void*)0))
 {
  FUNC_0(VAR_2->PpiPacket);
  VAR_2->PpiPacket = ((void*)0);
 }

 FUNC_1(VAR_1);
}
