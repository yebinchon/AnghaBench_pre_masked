
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee_handle {TYPE_3__* type_stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef unsigned int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_5__ {TYPE_1__* classdef; } ;
struct TYPE_6__ {TYPE_2__ type; } ;
struct TYPE_4__ {char const* method; unsigned int indx; unsigned int voffset; scalar_t__ pmisccount; int pmiscbuf; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee_handle*,int *) ;
 int FUNC_2 (struct ieee_handle*) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (struct ieee_handle*,unsigned int,unsigned int) ;
 int FUNC_5 (struct ieee_handle*,unsigned int,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct ieee_handle *VAR_5, const char *VAR_6,
         enum debug_visibility VAR_7,
         bfd_boolean VAR_8, bfd_boolean VAR_9,
         bfd_boolean VAR_10, bfd_vma VAR_11,
         bfd_boolean VAR_12)
{
  unsigned int VAR_13;
  unsigned int VAR_14;
  bfd_boolean VAR_15;




  FUNC_2 (VAR_5);



  if (VAR_12)
    FUNC_2 (VAR_5);

  FUNC_0 (VAR_5->type_stack != ((void*)0)
   && VAR_5->type_stack->type.classdef != ((void*)0)
   && VAR_5->type_stack->type.classdef->method != ((void*)0));

  VAR_13 = FUNC_3 (VAR_7);




  if (VAR_8)
    VAR_13 |= VAR_1;
  if (VAR_9)
    VAR_13 |= VAR_0;
  if (VAR_10)
    VAR_13 |= VAR_2;

  VAR_14 = VAR_5->type_stack->type.classdef->indx;

  VAR_15 = VAR_12 || VAR_11 > 0;

  if (! FUNC_1 (VAR_5,
       &VAR_5->type_stack->type.classdef->pmiscbuf)
      || ! FUNC_4 (VAR_5, VAR_14, VAR_15 ? 'v' : 'm')
      || ! FUNC_4 (VAR_5, VAR_14, VAR_13)
      || ! FUNC_5 (VAR_5, VAR_14,
        VAR_5->type_stack->type.classdef->method)
      || ! FUNC_5 (VAR_5, VAR_14, VAR_6))
    return VAR_3;

  if (VAR_15)
    {
      if (VAR_11 > VAR_5->type_stack->type.classdef->voffset)
 VAR_5->type_stack->type.classdef->voffset = VAR_11;
      if (! FUNC_4 (VAR_5, VAR_14, VAR_11))
 return VAR_3;
      ++VAR_5->type_stack->type.classdef->pmisccount;
    }

  if (! FUNC_4 (VAR_5, VAR_14, 0))
    return VAR_3;

  VAR_5->type_stack->type.classdef->pmisccount += 5;

  return VAR_4;
}
