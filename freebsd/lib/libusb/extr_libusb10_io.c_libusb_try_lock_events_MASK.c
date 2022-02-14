
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ctx_handler; } ;
typedef TYPE_1__ libusb_context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;

int
FUNC_4(libusb_context *VAR_1)
{
 int VAR_2;

 VAR_1 = FUNC_2(VAR_1);
 if (VAR_1 == ((void*)0))
  return (1);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return (1);

 VAR_2 = (VAR_1->ctx_handler != VAR_0);
 if (VAR_2)
  FUNC_1(VAR_1);
 else
  VAR_1->ctx_handler = FUNC_3();

 return (VAR_2);
}
