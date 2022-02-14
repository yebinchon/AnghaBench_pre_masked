
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int libusb_device_handle ;
typedef int libusb_context ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *,int,int*,unsigned int,int ) ;
 int * FUNC_2 (int *) ;

int
FUNC_3(libusb_device_handle *VAR_2,
    uint8_t VAR_3, uint8_t *VAR_4, int VAR_5,
    int *VAR_6, unsigned int VAR_7)
{
 libusb_context *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_2);

 FUNC_0(VAR_8, VAR_0, "libusb_interrupt_transfer enter");

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_1);

 FUNC_0(VAR_8, VAR_0, "libusb_interrupt_transfer leave");
 return (VAR_9);
}
