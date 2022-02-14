
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_dlpi {int dlpi_hd; } ;
struct TYPE_3__ {int errbuf; struct pcap_dlpi* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,void const*,size_t,int *) ;
 int FUNC_2 (int ,char*,int,int ) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct pcap_dlpi *VAR_4 = VAR_1->priv;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->dlpi_hd, ((void*)0), 0, VAR_2, VAR_3, ((void*)0));
 if (VAR_5 != VAR_0) {
  FUNC_2(FUNC_0(VAR_4->dlpi_hd), "dlpi_send", VAR_5,
      VAR_1->errbuf);
  return (-1);
 }





 return (VAR_3);
}
