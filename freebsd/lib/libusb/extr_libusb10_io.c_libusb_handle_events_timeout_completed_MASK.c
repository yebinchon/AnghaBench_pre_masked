
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int libusb_context ;


 int FUNC_0 (int *,int ,char*) ;
 int * FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct timeval*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(libusb_context *VAR_1,
    struct timeval *VAR_2, int *VAR_3)
{
 int VAR_4 = 0;

 VAR_1 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0, "libusb_handle_events_timeout_completed enter");

 FUNC_3(VAR_1);

 while (1) {
  if (VAR_3 != ((void*)0)) {
   if (*VAR_3 != 0 || VAR_4 != 0)
    break;
  }
  VAR_4 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3 == ((void*)0))
   break;
 }

 FUNC_4(VAR_1);

 FUNC_0(VAR_1, VAR_0, "libusb_handle_events_timeout_completed exit");

 return (VAR_4);
}
