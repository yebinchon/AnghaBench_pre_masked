
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_handle {TYPE_2__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {int referencep; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (void *VAR_2)
{
  struct ieee_handle *VAR_3 = (struct ieee_handle *) VAR_2;




  if (! FUNC_0 (VAR_2))
    return VAR_0;
  VAR_3->type_stack->type.referencep = VAR_1;
  return VAR_1;
}
