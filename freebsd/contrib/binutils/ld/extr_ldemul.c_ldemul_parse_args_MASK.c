
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_2__ {int (* parse_args ) (int,char**) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,char**) ;

bfd_boolean
FUNC_1 (int VAR_2, char **VAR_3)
{

  if (VAR_1->parse_args)
    return (*VAR_1->parse_args) (VAR_2, VAR_3);
  return VAR_0;
}
