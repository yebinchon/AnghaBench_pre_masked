
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct pcap_dlpi {int dlpi_hd; } ;
struct TYPE_4__ {int cc; size_t bufsize; int offset; int errbuf; scalar_t__ buffer; scalar_t__ break_loop; int * bp; struct pcap_dlpi* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_handler ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,size_t*,int,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int,int *,int) ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_4, int VAR_5, pcap_handler VAR_6, u_char *VAR_7)
{
 struct pcap_dlpi *VAR_8 = VAR_4->priv;
 int VAR_9;
 u_char *VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_9 = VAR_4->cc;
 if (VAR_9 != 0) {
  VAR_10 = VAR_4->bp;
  goto process_pkts;
 }
 do {

  if (VAR_4->break_loop) {





   VAR_4->break_loop = 0;
   return (-2);
  }

  VAR_11 = VAR_4->bufsize;
  VAR_10 = (u_char *)VAR_4->buffer + VAR_4->offset;

  VAR_12 = FUNC_1(VAR_8->dlpi_hd, ((void*)0), ((void*)0), VAR_10,
      &VAR_11, -1, ((void*)0));
  if (VAR_12 != VAR_0) {





   if (VAR_12 == VAR_1 && VAR_3 == VAR_2) {
    VAR_9 = 0;
    continue;
   }
   FUNC_2(FUNC_0(VAR_8->dlpi_hd),
       "dlpi_recv", VAR_12, VAR_4->errbuf);
   return (-1);
  }
  VAR_9 = VAR_11;
 } while (VAR_9 == 0);

process_pkts:
 return (FUNC_3(VAR_4, VAR_6, VAR_7, VAR_5, VAR_10, VAR_9));
}
