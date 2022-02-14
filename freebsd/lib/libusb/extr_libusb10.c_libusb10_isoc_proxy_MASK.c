
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct libusb_transfer {scalar_t__ num_iso_packets; size_t actual_length; int endpoint; TYPE_1__* iso_packet_desc; int * buffer; } ;
struct libusb_super_transfer {int rem_len; } ;
struct libusb20_transfer {int dummy; } ;
struct TYPE_2__ {size_t length; int actual_length; } ;




 int VAR_0 ;
 int FUNC_0 (struct libusb20_transfer*,struct libusb_super_transfer*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 size_t FUNC_3 (struct libusb20_transfer*) ;
 int FUNC_4 (struct libusb20_transfer*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct libusb20_transfer*) ;
 int FUNC_6 (struct libusb20_transfer*) ;
 struct libusb_super_transfer* FUNC_7 (struct libusb20_transfer*) ;
 int FUNC_8 (struct libusb20_transfer*) ;
 int FUNC_9 (struct libusb20_transfer*,scalar_t__) ;
 int FUNC_10 (struct libusb20_transfer*,int *,size_t,scalar_t__) ;
 int FUNC_11 (struct libusb20_transfer*) ;

__attribute__((used)) static void
FUNC_12(struct libusb20_transfer *VAR_1)
{
 struct libusb_super_transfer *VAR_2;
 struct libusb_transfer *VAR_3;
 uint32_t VAR_4;
 uint16_t VAR_5;
 uint16_t VAR_6;
 uint8_t VAR_7;

 VAR_7 = FUNC_8(VAR_1);
 VAR_2 = FUNC_7(VAR_1);
 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = FUNC_5(VAR_1);

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = (struct libusb_transfer *)(
     ((uint8_t *)VAR_2) + sizeof(*VAR_2));

 if (VAR_5 > VAR_3->num_iso_packets)
  VAR_5 = VAR_3->num_iso_packets;

 if (VAR_5 == 0)
  return;


 VAR_3->num_iso_packets = VAR_5;

 switch (VAR_7) {
 case 129:

  VAR_3->actual_length = VAR_4;
  for (VAR_6 = 0; VAR_6 != VAR_5; VAR_6++) {
   VAR_3->iso_packet_desc[VAR_6].actual_length =
       FUNC_4(VAR_1, VAR_6);
  }
  FUNC_0(VAR_1, VAR_2, VAR_0);
  break;
 case 128:

  VAR_4 = 0;
  for (VAR_6 = 0; VAR_6 != VAR_5; VAR_6++) {
   FUNC_10(VAR_1,
       &VAR_3->buffer[VAR_4],
       VAR_3->iso_packet_desc[VAR_6].length, VAR_6);
   VAR_4 += VAR_3->iso_packet_desc[VAR_6].length;
  }


  VAR_2->rem_len = 0;

  FUNC_9(VAR_1, VAR_5);
  FUNC_11(VAR_1);


  FUNC_2(FUNC_6(VAR_1), VAR_3->endpoint);
  break;
 default:
  FUNC_0(VAR_1, VAR_2, FUNC_1(VAR_7));
  break;
 }
}
