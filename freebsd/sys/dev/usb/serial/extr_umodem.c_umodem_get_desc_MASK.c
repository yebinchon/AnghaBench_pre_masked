
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;


 void* FUNC_0 (int ,int *,int ,int ,int,int ,int) ;

__attribute__((used)) static void *
FUNC_1(struct usb_attach_arg *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 return (FUNC_0(VAR_0->device, ((void*)0), VAR_0->info.bIfaceIndex,
     VAR_1, 0xFF, VAR_2, 0xFF));
}
