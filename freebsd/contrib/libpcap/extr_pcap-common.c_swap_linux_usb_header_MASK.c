
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ status; scalar_t__ offset; scalar_t__ len; } ;
typedef TYPE_3__ usb_isodesc ;
typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct pcap_pkthdr {scalar_t__ caplen; } ;
struct TYPE_5__ {scalar_t__ error_count; scalar_t__ numdesc; } ;
struct TYPE_6__ {TYPE_1__ iso; } ;
struct TYPE_8__ {scalar_t__ ts_usec; scalar_t__ status; scalar_t__ urb_len; scalar_t__ data_len; scalar_t__ transfer_type; scalar_t__ interval; scalar_t__ start_frame; scalar_t__ xfer_flags; scalar_t__ ndesc; TYPE_2__ s; void* ts_sec; int bus_id; void* id; } ;
typedef TYPE_4__ pcap_usb_header_mmapped ;
typedef scalar_t__ bpf_u_int32 ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(const struct pcap_pkthdr *VAR_1, u_char *VAR_2,
    int VAR_3)
{
 pcap_usb_header_mmapped *VAR_4 = (pcap_usb_header_mmapped *)VAR_2;
 bpf_u_int32 VAR_5 = 0;
 VAR_5 += 8;
 if (VAR_1->caplen < VAR_5)
  return;
 VAR_4->id = FUNC_0(VAR_4->id);

 VAR_5 += 4;

 VAR_5 += 2;
 if (VAR_1->caplen < VAR_5)
  return;
 VAR_4->bus_id = FUNC_2(VAR_4->bus_id);

 VAR_5 += 2;

 VAR_5 += 8;
 if (VAR_1->caplen < VAR_5)
  return;
 VAR_4->ts_sec = FUNC_0(VAR_4->ts_sec);

 VAR_5 += 4;
 if (VAR_1->caplen < VAR_5)
  return;
 VAR_4->ts_usec = FUNC_1(VAR_4->ts_usec);

 VAR_5 += 4;
 if (VAR_1->caplen < VAR_5)
  return;
 VAR_4->status = FUNC_1(VAR_4->status);

 VAR_5 += 4;
 if (VAR_1->caplen < VAR_5)
  return;
 VAR_4->urb_len = FUNC_1(VAR_4->urb_len);

 VAR_5 += 4;
 if (VAR_1->caplen < VAR_5)
  return;
 VAR_4->data_len = FUNC_1(VAR_4->data_len);

 if (VAR_4->transfer_type == VAR_0) {
  VAR_5 += 4;
  if (VAR_1->caplen < VAR_5)
   return;
  VAR_4->s.iso.error_count = FUNC_1(VAR_4->s.iso.error_count);

  VAR_5 += 4;
  if (VAR_1->caplen < VAR_5)
   return;
  VAR_4->s.iso.numdesc = FUNC_1(VAR_4->s.iso.numdesc);
 } else
  VAR_5 += 8;
 if (VAR_3) {
  VAR_5 += 4;
  if (VAR_1->caplen < VAR_5)
   return;
  VAR_4->interval = FUNC_1(VAR_4->interval);

  VAR_5 += 4;
  if (VAR_1->caplen < VAR_5)
   return;
  VAR_4->start_frame = FUNC_1(VAR_4->start_frame);

  VAR_5 += 4;
  if (VAR_1->caplen < VAR_5)
   return;
  VAR_4->xfer_flags = FUNC_1(VAR_4->xfer_flags);

  VAR_5 += 4;
  if (VAR_1->caplen < VAR_5)
   return;
  VAR_4->ndesc = FUNC_1(VAR_4->ndesc);

  if (VAR_4->transfer_type == VAR_0) {

   usb_isodesc *VAR_6;
   uint32_t VAR_7;

   VAR_6 = (usb_isodesc *)(void *)(VAR_2+VAR_5);
   for (VAR_7 = 0; VAR_7 < VAR_4->ndesc; VAR_7++) {
    VAR_5 += 4;
    if (VAR_1->caplen < VAR_5)
     return;
    VAR_6->status = FUNC_1(VAR_6->status);

    VAR_5 += 4;
    if (VAR_1->caplen < VAR_5)
     return;
    VAR_6->offset = FUNC_1(VAR_6->offset);

    VAR_5 += 4;
    if (VAR_1->caplen < VAR_5)
     return;
    VAR_6->len = FUNC_1(VAR_6->len);

    VAR_5 += 4;

    VAR_6++;
   }
  }
 }
}
