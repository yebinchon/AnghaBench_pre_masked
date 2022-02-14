
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb20_transfer {int dummy; } ;
struct libusb20_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct libusb20_transfer* FUNC_0 (struct libusb20_device*,int) ;

__attribute__((used)) static struct libusb20_transfer *
FUNC_1(struct libusb20_device *VAR_2,
    uint8_t VAR_3, uint8_t VAR_4)
{
 VAR_4 &= 1;

 VAR_4 |= (VAR_3 & VAR_0) * 4;

 if (VAR_3 & VAR_1) {

  VAR_4 |= 2;
 }
 return (FUNC_0(VAR_2, VAR_4));
}
