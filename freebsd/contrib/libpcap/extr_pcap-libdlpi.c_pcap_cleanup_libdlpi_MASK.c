
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_dlpi {int * dlpi_hd; } ;
struct TYPE_4__ {int fd; struct pcap_dlpi* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(pcap_t *VAR_0)
{
 struct pcap_dlpi *VAR_1 = VAR_0->priv;

 if (VAR_1->dlpi_hd != ((void*)0)) {
  FUNC_0(VAR_1->dlpi_hd);
  VAR_1->dlpi_hd = ((void*)0);
  VAR_0->fd = -1;
 }
 FUNC_1(VAR_0);
}
