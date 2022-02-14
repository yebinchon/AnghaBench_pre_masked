
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union usbd_urb {int dummy; } usbd_urb ;
struct TYPE_3__ {union usbd_urb* isl_arg1; } ;
struct TYPE_4__ {TYPE_1__ isl_others; } ;
struct io_stack_location {TYPE_2__ isl_parameters; } ;
typedef int irp ;


 struct io_stack_location* FUNC_0 (int *) ;

__attribute__((used)) static union usbd_urb *
FUNC_1(irp *VAR_0)
{
 struct io_stack_location *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->isl_parameters.isl_others.isl_arg1);
}
