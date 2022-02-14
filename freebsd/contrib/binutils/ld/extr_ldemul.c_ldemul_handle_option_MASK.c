
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_2__ {int (* handle_option ) (int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;

bfd_boolean
FUNC_1 (int VAR_2)
{
  if (VAR_1->handle_option)
    return (*VAR_1->handle_option) (VAR_2);
  return VAR_0;
}
