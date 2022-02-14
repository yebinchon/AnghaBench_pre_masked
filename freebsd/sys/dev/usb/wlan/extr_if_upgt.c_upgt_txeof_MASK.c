
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer {int dummy; } ;
struct upgt_data {int * ni; int * m; } ;


 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct usb_xfer *VAR_0, struct upgt_data *VAR_1)
{

 if (VAR_1->m) {

  FUNC_0(VAR_1->ni, VAR_1->m, 0);
  VAR_1->m = ((void*)0);
  VAR_1->ni = ((void*)0);
 }
}
