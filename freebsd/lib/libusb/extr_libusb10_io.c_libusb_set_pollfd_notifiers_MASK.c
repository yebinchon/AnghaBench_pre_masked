
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int libusb_pollfd_removed_cb ;
typedef int libusb_pollfd_added_cb ;
struct TYPE_5__ {void* fd_cb_user_data; int fd_removed_cb; int fd_added_cb; } ;
typedef TYPE_1__ libusb_context ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

void
FUNC_1(libusb_context *VAR_0,
    libusb_pollfd_added_cb VAR_1, libusb_pollfd_removed_cb VAR_2,
    void *VAR_3)
{
 VAR_0 = FUNC_0(VAR_0);

 VAR_0->fd_added_cb = VAR_1;
 VAR_0->fd_removed_cb = VAR_2;
 VAR_0->fd_cb_user_data = VAR_3;
}
