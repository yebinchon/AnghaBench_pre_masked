
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cvmx_interrupt_exception_t ;
struct TYPE_2__ {int exception_handler; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

cvmx_interrupt_exception_t FUNC_0(cvmx_interrupt_exception_t VAR_2)
{
    cvmx_interrupt_exception_t VAR_3 = VAR_1.exception_handler;
    VAR_1.exception_handler = VAR_2;
    VAR_0;
    return VAR_3;
}
