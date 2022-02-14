
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ctx_handler; int ctx_cond; } ;
typedef TYPE_1__ libusb_context ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

void
FUNC_4(libusb_context *VAR_1)
{
 VAR_1 = FUNC_1(VAR_1);
 if (VAR_1->ctx_handler == FUNC_3()) {
  VAR_1->ctx_handler = VAR_0;
  FUNC_2(&VAR_1->ctx_cond);
 }
 FUNC_0(VAR_1);
}
