
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ debug_fixed; int debug; } ;
typedef TYPE_1__ libusb_context ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

void
FUNC_1(libusb_context *VAR_0, int VAR_1)
{
 VAR_0 = FUNC_0(VAR_0);

 if (VAR_0 && VAR_0->debug_fixed == 0)
  VAR_0->debug = VAR_1;
}
