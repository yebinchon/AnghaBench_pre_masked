
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; scalar_t__ revents; int fd; } ;
struct libusb20_device {int file; int is_opened; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pollfd*,int,int) ;

void
FUNC_1(struct libusb20_device *VAR_4, int VAR_5)
{
 struct pollfd VAR_6[1];

 if (!VAR_4->is_opened) {
  return;
 }
 VAR_6[0].fd = VAR_4->file;
 VAR_6[0].events = (VAR_0 | VAR_1 | VAR_2 | VAR_3);
 VAR_6[0].revents = 0;

 if (FUNC_0(VAR_6, 1, VAR_5)) {

 }
 return;
}
