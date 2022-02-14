
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_ss_endpoint_companion_descriptor {int dummy; } ;
struct libusb_endpoint_descriptor {int extra_length; int extra; } ;
struct libusb_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct libusb_ss_endpoint_companion_descriptor**) ;

int
FUNC_1(struct libusb_context *VAR_1,
    const struct libusb_endpoint_descriptor *VAR_2,
    struct libusb_ss_endpoint_companion_descriptor **VAR_3)
{
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_2->extra, VAR_2->extra_length, VAR_3));
}
