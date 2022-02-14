
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cvmx_interrupt_func_t ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {void* data; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (char*,int) ;

void FUNC_1(int VAR_3, cvmx_interrupt_func_t VAR_4, void *VAR_5)
{
    if (VAR_3 >= VAR_0 || VAR_3 < 0) {
        FUNC_0("cvmx_interrupt_register: Illegal irq_number %d\n", VAR_3);
        return;
    }
    VAR_2.handlers[VAR_3].handler = VAR_4;
    VAR_2.handlers[VAR_3].data = VAR_5;
    VAR_1;
}
