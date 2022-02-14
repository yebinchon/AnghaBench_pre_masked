
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ctx_handler; } ;
typedef TYPE_1__ libusb_context ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;

void
FUNC_3(libusb_context *VAR_1)
{
 VAR_1 = FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 if (VAR_1->ctx_handler == VAR_0)
  VAR_1->ctx_handler = FUNC_2();
}
