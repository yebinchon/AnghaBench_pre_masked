
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* read_cpu_ctrl ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;

uint32_t
FUNC_1(uint32_t VAR_1)
{

 if (VAR_0->read_cpu_ctrl != ((void*)0))
  return (VAR_0->read_cpu_ctrl(VAR_1));
 return (-1);
}
