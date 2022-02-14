
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_device_head {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int libusb_device ;
typedef int libusb_context ;


 int FUNC_0 (struct libusb_device_head*,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,int ) ;
 scalar_t__ FUNC_2 (int *,int ***) ;

__attribute__((used)) static int
FUNC_3(libusb_context *VAR_1, struct libusb_device_head *VAR_2)
{
 libusb_device **VAR_3;
 ssize_t VAR_4;
 ssize_t VAR_5;

 VAR_4 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return (-1);

 for (VAR_5 = 0; VAR_5 != VAR_4; VAR_5++)
  FUNC_0(VAR_2, VAR_3[VAR_5], VAR_0);

 FUNC_1(VAR_3, 0);
 return (0);
}
