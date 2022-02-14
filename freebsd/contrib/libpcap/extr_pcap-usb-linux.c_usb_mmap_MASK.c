
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_usb_linux {int mmapbuflen; scalar_t__ mmapbuf; } ;
struct TYPE_3__ {int fd; struct pcap_usb_linux* priv; } ;
typedef TYPE_1__ pcap_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static
int FUNC_2(pcap_t* VAR_4)
{
 struct pcap_usb_linux *VAR_5 = VAR_4->priv;
 int VAR_6 = FUNC_0(VAR_4->fd, VAR_2);
 if (VAR_6 < 0)
  return 0;

 VAR_5->mmapbuflen = VAR_6;
 VAR_5->mmapbuf = FUNC_1(0, VAR_5->mmapbuflen, VAR_3,
     VAR_1, VAR_4->fd, 0);
 return VAR_5->mmapbuf != VAR_0;
}
