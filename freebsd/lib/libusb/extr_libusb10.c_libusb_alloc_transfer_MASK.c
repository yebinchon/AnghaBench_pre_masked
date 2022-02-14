
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb_transfer {int num_iso_packets; } ;
struct libusb_super_transfer {int dummy; } ;
typedef int libusb_iso_packet_descriptor ;


 struct libusb_super_transfer* FUNC_0 (int) ;
 int FUNC_1 (struct libusb_super_transfer*,int ,int) ;

struct libusb_transfer *
FUNC_2(int VAR_0)
{
 struct libusb_transfer *VAR_1;
 struct libusb_super_transfer *VAR_2;
 int VAR_3;

 VAR_3 = sizeof(struct libusb_transfer) +
     sizeof(struct libusb_super_transfer) +
     (VAR_0 * sizeof(libusb_iso_packet_descriptor));

 VAR_2 = FUNC_0(VAR_3);
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_2, 0, VAR_3);

 VAR_1 = (struct libusb_transfer *)(
     ((uint8_t *)VAR_2) + sizeof(*VAR_2));


 VAR_1->num_iso_packets = VAR_0;

 return (VAR_1);
}
