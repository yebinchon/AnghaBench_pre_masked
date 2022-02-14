
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int libusb_context ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct timeval*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct timeval*) ;

int
FUNC_4(libusb_context *VAR_1, struct timeval *VAR_2)
{
 int VAR_3;

 VAR_1 = FUNC_0(VAR_1);

 if (FUNC_2(VAR_1)) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 } else {
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  if (VAR_3 != 0)
   VAR_3 = VAR_0;
 }
 return (VAR_3);
}
