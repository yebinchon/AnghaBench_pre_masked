
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee_handle {TYPE_3__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_4__ {TYPE_2__* classdef; } ;
struct TYPE_6__ {TYPE_1__ type; } ;
struct TYPE_5__ {char const* method; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (void *VAR_1, const char *VAR_2)
{
  struct ieee_handle *VAR_3 = (struct ieee_handle *) VAR_1;

  FUNC_0 (VAR_3->type_stack != ((void*)0)
   && VAR_3->type_stack->type.classdef != ((void*)0)
   && VAR_3->type_stack->type.classdef->method == ((void*)0));

  VAR_3->type_stack->type.classdef->method = VAR_2;

  return VAR_0;
}
