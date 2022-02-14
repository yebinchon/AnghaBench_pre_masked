
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_usb_linux {int packets_read; int * mmapbuf; } ;
struct TYPE_6__ {int tv_usec; int tv_sec; } ;
struct pcap_pkthdr {scalar_t__ len; scalar_t__ caplen; TYPE_1__ ts; } ;
struct mon_bin_mfetch {size_t* offvec; int nfetch; int nflush; } ;
typedef int pcap_usb_header_mmapped ;
struct TYPE_8__ {char event_type; scalar_t__ data_len; int ts_usec; int ts_sec; } ;
typedef TYPE_3__ pcap_usb_header ;
struct TYPE_7__ {int * bf_insns; } ;
struct TYPE_9__ {scalar_t__ snapshot; int fd; int errbuf; TYPE_2__ fcode; scalar_t__ break_loop; struct pcap_usb_linux* priv; } ;
typedef TYPE_4__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int *) ;
typedef size_t int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ,...) ;
 int FUNC_3 (int ,int ,scalar_t__,char*,int ) ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_7, int VAR_8, pcap_handler VAR_9, u_char *VAR_10)
{
 struct pcap_usb_linux *VAR_11 = VAR_7->priv;
 struct mon_bin_mfetch VAR_12;
 int32_t VAR_13[VAR_5];
 struct pcap_pkthdr VAR_14;
 pcap_usb_header* VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 u_int VAR_18, VAR_19;

 VAR_19 = VAR_7->snapshot - sizeof(pcap_usb_header);

 for (;;) {
  int VAR_20, VAR_21;
  int VAR_22 = VAR_8 - VAR_17;
  if (VAR_22 <= 0)
   VAR_22 = VAR_5;
  if (VAR_22 > VAR_5)
   VAR_22 = VAR_5;


  VAR_12.offvec = VAR_13;
  VAR_12.nfetch = VAR_22;
  VAR_12.nflush = VAR_16;

  do {
   VAR_21 = FUNC_2(VAR_7->fd, VAR_3, &VAR_12);
   if (VAR_7->break_loop)
   {
    VAR_7->break_loop = 0;
    return -2;
   }
  } while ((VAR_21 == -1) && (VAR_6 == VAR_1));
  if (VAR_21 < 0)
  {
   if (VAR_6 == VAR_0)
    return 0;

   FUNC_3(VAR_7->errbuf,
       VAR_4, VAR_6, "Can't mfetch fd %d",
       VAR_7->fd);
   return -1;
  }


  VAR_16 = VAR_12.nfetch;
  for (VAR_20=0; VAR_20<VAR_12.nfetch; ++VAR_20) {

   VAR_15 = (pcap_usb_header*) &VAR_11->mmapbuf[VAR_13[VAR_20]];
   if (VAR_15->event_type == '@')
    continue;



   VAR_18 = VAR_19;
   if (VAR_15->data_len < VAR_18)
    VAR_18 = VAR_15->data_len;


   VAR_14.caplen = VAR_18 + sizeof(pcap_usb_header_mmapped);
   VAR_14.len = VAR_15->data_len + sizeof(pcap_usb_header_mmapped);
   VAR_14.ts.tv_sec = VAR_15->ts_sec;
   VAR_14.ts.tv_usec = VAR_15->ts_usec;

   if (VAR_7->fcode.bf_insns == ((void*)0) ||
       FUNC_1(VAR_7->fcode.bf_insns, (u_char*) VAR_15,
         VAR_14.len, VAR_14.caplen)) {
    VAR_11->packets_read++;
    VAR_9(VAR_10, &VAR_14, (u_char*) VAR_15);
    VAR_17++;
   }
  }


  if (FUNC_0(VAR_8) || (VAR_17 == VAR_8))
   break;
 }


 if (FUNC_2(VAR_7->fd, VAR_2, VAR_16) == -1) {
  FUNC_3(VAR_7->errbuf, VAR_4,
      VAR_6, "Can't mflush fd %d", VAR_7->fd);
  return -1;
 }
 return VAR_17;
}
