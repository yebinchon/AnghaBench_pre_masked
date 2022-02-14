
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct libusb20_transfer {int dummy; } ;
struct libusb20_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct libusb20_device*) ;
 int FUNC_2 (struct libusb20_device*,int) ;
 int FUNC_3 (struct libusb20_device*,int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (struct libusb20_transfer*,int *,int,int*,int ) ;
 int FUNC_6 (struct libusb20_transfer*) ;
 struct libusb20_transfer* FUNC_7 (struct libusb20_device*,int) ;
 int FUNC_8 (struct libusb20_transfer*,int ,int,int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (char*,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_11(struct libusb20_device *VAR_7)
{
  int VAR_8;
  if ((VAR_8 = FUNC_2(VAR_7, 2)) != 0)
    {
      FUNC_0(VAR_6, "libusb20_dev_open: %s\n", FUNC_4(VAR_8));
      return;
    }





  if ((VAR_8 = FUNC_3(VAR_7, 0)) != 0)
    {
      FUNC_0(VAR_6, "libusb20_dev_set_config_index: %s\n", FUNC_4(VAR_8));
      return;
    }





  struct libusb20_transfer *VAR_9 = FUNC_7(VAR_7, 0);
  struct libusb20_transfer *VAR_10 = FUNC_7(VAR_7, 1);

  if (VAR_10 == ((void*)0) || VAR_9 == ((void*)0))
    {
      FUNC_0(VAR_6, "libusb20_tr_get_pointer: %s\n", FUNC_4(VAR_8));
      return;
    }





  if ((VAR_8 = FUNC_8(VAR_9, 0, 1, VAR_4)) != 0)
    {
      FUNC_0(VAR_6, "libusb20_tr_open: %s\n", FUNC_4(VAR_8));
      return;
    }
  if ((VAR_8 = FUNC_8(VAR_10, 0, 1, VAR_2)) != 0)
    {
      FUNC_0(VAR_6, "libusb20_tr_open: %s\n", FUNC_4(VAR_8));
      return;
    }

  uint8_t VAR_11[VAR_0];
  uint32_t VAR_12;

  if (VAR_5 > 0)
    {
      if ((VAR_8 = FUNC_5(VAR_9, VAR_3, VAR_5, &VAR_12, VAR_1))
   != 0)
 {
   FUNC_0(VAR_6, "libusb20_tr_bulk_intr_sync (OUT): %s\n", FUNC_4(VAR_8));
 }
      FUNC_10("sent %d bytes\n", VAR_12);
    }

  if ((VAR_8 = FUNC_5(VAR_10, VAR_11, VAR_0, &VAR_12, VAR_1))
      != 0)
    {
      FUNC_0(VAR_6, "libusb20_tr_bulk_intr_sync: %s\n", FUNC_4(VAR_8));
    }
      FUNC_10("received %d bytes\n", VAR_12);
      if (VAR_12 > 0)
 FUNC_9(VAR_11, VAR_12);

  FUNC_6(VAR_9);
  FUNC_6(VAR_10);

  FUNC_1(VAR_7);
}
