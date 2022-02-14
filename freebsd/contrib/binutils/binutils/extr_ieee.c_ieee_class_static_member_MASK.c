
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee_handle {TYPE_3__* type_stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef int bfd_boolean ;
struct TYPE_5__ {TYPE_1__* classdef; } ;
struct TYPE_6__ {TYPE_2__ type; } ;
struct TYPE_4__ {unsigned int indx; int pmisccount; int pmiscbuf; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee_handle*,int *) ;
 int FUNC_2 (struct ieee_handle*) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (struct ieee_handle*,unsigned int,unsigned int) ;
 int FUNC_5 (struct ieee_handle*,unsigned int,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_3, const char *VAR_4, const char *VAR_5,
     enum debug_visibility VAR_6)
{
  struct ieee_handle *VAR_7 = (struct ieee_handle *) VAR_3;
  unsigned int VAR_8;
  unsigned int VAR_9;




  FUNC_2 (VAR_7);

  FUNC_0 (VAR_7->type_stack != ((void*)0)
   && VAR_7->type_stack->type.classdef != ((void*)0));

  VAR_8 = FUNC_3 (VAR_6);
  VAR_8 |= VAR_0;

  VAR_9 = VAR_7->type_stack->type.classdef->indx;

  if (! FUNC_1 (VAR_7, &VAR_7->type_stack->type.classdef->pmiscbuf)
      || ! FUNC_4 (VAR_7, VAR_9, 'd')
      || ! FUNC_4 (VAR_7, VAR_9, VAR_8)
      || ! FUNC_5 (VAR_7, VAR_9, VAR_4)
      || ! FUNC_5 (VAR_7, VAR_9, VAR_5))
    return VAR_1;
  VAR_7->type_stack->type.classdef->pmisccount += 4;

  return VAR_2;
}
