
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct libusb20_device {int dummy; } ;
struct libusb20_backend {int dummy; } ;
struct LIBUSB20_DEVICE_DESC_DECODED {int idVendor; int idProduct; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct libusb20_device*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_3 ;
 struct libusb20_backend* FUNC_3 () ;
 struct libusb20_device* FUNC_4 (struct libusb20_backend*,struct libusb20_device*) ;
 int FUNC_5 (struct libusb20_backend*) ;
 char* FUNC_6 (struct libusb20_device*) ;
 struct LIBUSB20_DEVICE_DESC_DECODED* FUNC_7 (struct libusb20_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int,int) ;
 int VAR_9 ;
 void* FUNC_10 (int ,int *,int ) ;
 unsigned int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 () ;

int
FUNC_13(int VAR_10, char **VAR_11)
{
  unsigned int VAR_12 = VAR_2, VAR_13 = VAR_2;
  int VAR_14;

  while ((VAR_14 = FUNC_2(VAR_10, VAR_11, "i:o:p:v:")) != -1)
    switch (VAR_14)
      {
      case 'i':
 VAR_3 = FUNC_10(VAR_4, ((void*)0), 0);
 break;

      case 'o':
 VAR_7 = FUNC_10(VAR_4, ((void*)0), 0);
 break;

      case 'p':
 VAR_13 = FUNC_10(VAR_4, ((void*)0), 0);
 break;

      case 'v':
 VAR_12 = FUNC_10(VAR_4, ((void*)0), 0);
 break;

      default:
 FUNC_12();
 break;
      }
  VAR_10 -= VAR_5;
  VAR_11 += VAR_5;

  if (VAR_12 != VAR_2 || VAR_13 != VAR_2)
    {
      if (VAR_3 == 0 || VAR_7 == 0)
 {
   FUNC_12();
 }
      if ((VAR_3 & 0x80) == 0)
 {
   FUNC_1(VAR_9, "IN_EP must have bit 7 set\n");
   return (VAR_1);
 }

      if (VAR_10 > 0)
 {
   for (VAR_8 = 0; VAR_10 > 0 && VAR_8 < VAR_0; VAR_8++, VAR_10--)
     {
       unsigned VAR_15 = FUNC_11(VAR_11[VAR_8], 0, 0);
       if (VAR_15 > 255)
  FUNC_1(VAR_9,
   "Warning: data #%zu 0x%0x > 0xff, truncating\n",
   VAR_8, VAR_15);
       VAR_6[VAR_8] = (uint8_t)VAR_15;
     }
   VAR_8++;
   if (VAR_10 > 0)
     FUNC_1(VAR_9,
      "Data count exceeds maximum of %zu, ignoring %d elements\n",
      VAR_0, VAR_5);
 }
    }

  struct libusb20_backend *VAR_16;
  struct libusb20_device *VAR_17;

  if ((VAR_16 = FUNC_3()) == ((void*)0))
    {
      FUNC_8("libusb20_be_alloc()");
      return 1;
    }

  VAR_17 = ((void*)0);
  while ((VAR_17 = FUNC_4(VAR_16, VAR_17)) != ((void*)0))
    {
      struct LIBUSB20_DEVICE_DESC_DECODED *VAR_18 =
      FUNC_7(VAR_17);

      FUNC_9("Found device %s (VID:PID = 0x%04x:0x%04x)\n",
      FUNC_6(VAR_17),
      VAR_18->idVendor, VAR_18->idProduct);

      if (VAR_18->idVendor == VAR_12 && VAR_18->idProduct == VAR_13)
 FUNC_0(VAR_17);
    }

  FUNC_5(VAR_16);
  return 0;
}
