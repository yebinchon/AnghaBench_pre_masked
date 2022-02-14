
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
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct libusb20_device*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_5 ;
 struct libusb20_backend* FUNC_4 () ;
 struct libusb20_device* FUNC_5 (struct libusb20_backend*,struct libusb20_device*) ;
 int FUNC_6 (struct libusb20_backend*) ;
 char* FUNC_7 (struct libusb20_device*) ;
 struct LIBUSB20_DEVICE_DESC_DECODED* FUNC_8 (struct libusb20_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 size_t VAR_9 ;
 int FUNC_9 (int,char**) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_12 (int ,int *,int ) ;
 unsigned int FUNC_13 (char*,int ,int ) ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_12, char **VAR_13)
{
  unsigned int VAR_14 = VAR_3, VAR_15 = VAR_3;
  int VAR_16;
  FUNC_0(VAR_2, &VAR_10);

  while ((VAR_16 = FUNC_3(VAR_12, VAR_13, "i:p:v:")) != -1)
    switch (VAR_16)
      {
      case 'i':
 VAR_5 = FUNC_12(VAR_6, ((void*)0), 0);
 break;

      case 'p':
 VAR_15 = FUNC_12(VAR_6, ((void*)0), 0);
 break;

      case 'v':
 VAR_14 = FUNC_12(VAR_6, ((void*)0), 0);
 break;

      default:
 FUNC_14();
 break;
      }
  VAR_12 -= VAR_7;
  VAR_13 += VAR_7;

  if (VAR_14 != VAR_3 || VAR_15 != VAR_3)
    {
      if (VAR_5 != 0 && (VAR_5 & 0x80) == 0)
 {
   FUNC_2(VAR_11, "Interrupt endpoint must be of type IN\n");
   FUNC_14();
 }

      if (VAR_12 > 0)
 {
   VAR_4 = 1;

   int VAR_17 = FUNC_9(VAR_12, VAR_13);
   if (VAR_17 < 0)
     return VAR_1;
   VAR_12 = VAR_17;

   if (VAR_12 > 0)
     {
       for (VAR_9 = 0; VAR_12 > 0 && VAR_9 < VAR_0; VAR_9++, VAR_12--)
  {
    unsigned VAR_18 = FUNC_13(VAR_13[VAR_9], 0, 0);
    if (VAR_18 > 255)
      FUNC_2(VAR_11,
       "Warning: data #%zu 0x%0x > 0xff, truncating\n",
       VAR_9, VAR_18);
    VAR_8[VAR_9] = (uint8_t)VAR_18;
  }
       VAR_9++;
       if (VAR_12 > 0)
  FUNC_2(VAR_11,
   "Data count exceeds maximum of %zu, ignoring %d elements\n",
   VAR_0, VAR_7);
     }
 }
    }

  struct libusb20_backend *VAR_19;
  struct libusb20_device *VAR_20;

  if ((VAR_19 = FUNC_4()) == ((void*)0))
    {
      FUNC_10("libusb20_be_alloc()");
      return 1;
    }

  VAR_20 = ((void*)0);
  while ((VAR_20 = FUNC_5(VAR_19, VAR_20)) != ((void*)0))
    {
      struct LIBUSB20_DEVICE_DESC_DECODED *VAR_21 =
      FUNC_8(VAR_20);

      FUNC_11("Found device %s (VID:PID = 0x%04x:0x%04x)\n",
      FUNC_7(VAR_20),
      VAR_21->idVendor, VAR_21->idProduct);

      if (VAR_21->idVendor == VAR_14 && VAR_21->idProduct == VAR_15)
 FUNC_1(VAR_20);
    }

  FUNC_6(VAR_19);
  return 0;
}
