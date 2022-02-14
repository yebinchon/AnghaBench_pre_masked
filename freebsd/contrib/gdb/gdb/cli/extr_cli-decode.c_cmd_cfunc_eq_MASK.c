
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* cfunc ) (char*,int) ;} ;
struct cmd_list_element {scalar_t__ func; TYPE_1__ function; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0 (struct cmd_list_element *VAR_1,
       void (*VAR_2) (char *VAR_3, int VAR_4))
{
  return VAR_1->func == VAR_0 && VAR_1->function.cfunc == VAR_2;
}
