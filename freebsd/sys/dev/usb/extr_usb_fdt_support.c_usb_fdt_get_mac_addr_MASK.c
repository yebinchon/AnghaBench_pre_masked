
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {int ue_eaddr; int ue_udev; int ue_dev; } ;
typedef size_t ssize_t ;
typedef int phandle_t ;
typedef int mac ;
typedef int device_t ;


 int VAR_0 ;
 size_t FUNC_0 (int,char const*,int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 size_t FUNC_3 (char const**) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(device_t VAR_1, struct usb_ether* VAR_2)
{
 phandle_t VAR_3;
 ssize_t VAR_4, VAR_5;
 uint8_t VAR_6[sizeof(VAR_2->ue_eaddr)];
 static const char *VAR_7[] = {
     "mac-address",
     "local-mac-address"
 };

 if ((VAR_3 = FUNC_4(VAR_2->ue_dev, VAR_2->ue_udev)) == -1)
  return (VAR_0);
 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_7); ++VAR_4) {
  VAR_5 = FUNC_0(VAR_3, VAR_7[VAR_4], VAR_6, sizeof(VAR_6));
  if (VAR_5 == sizeof(VAR_6) && FUNC_1(VAR_6)) {
   FUNC_2(VAR_2->ue_eaddr, VAR_6, sizeof(VAR_2->ue_eaddr));
   return (0);
  }
 }
 return (VAR_0);
}
