
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_usb_linux {int * mmapbuf; int mmapbuflen; } ;
struct TYPE_4__ {struct pcap_usb_linux* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(pcap_t* VAR_0)
{
 struct pcap_usb_linux *VAR_1 = VAR_0->priv;


 if (VAR_1->mmapbuf != ((void*)0)) {
  FUNC_0(VAR_1->mmapbuf, VAR_1->mmapbuflen);
  VAR_1->mmapbuf = ((void*)0);
 }
 FUNC_1(VAR_0);
}
