
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int ue_miibus; } ;
struct mii_data {int dummy; } ;


 struct mii_data* FUNC_0 (int ) ;

struct mii_data *
FUNC_1(struct usb_ether *VAR_0)
{
 return (FUNC_0(VAR_0->ue_miibus));
}
