
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_transfer {int* user_data; int dev_handle; } ;
typedef int libusb_context ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct libusb_transfer *VAR_1)
{
 libusb_context *VAR_2;
 int *VAR_3;

 VAR_2 = FUNC_1(VAR_1->dev_handle);

 FUNC_0(VAR_2, VAR_0, "sync I/O done");

 VAR_3 = VAR_1->user_data;
 *VAR_3 = 1;
}
