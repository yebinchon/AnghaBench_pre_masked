
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee_handle {TYPE_3__* type_stack; int cxx; } ;
typedef int bfd_boolean ;
struct TYPE_5__ {TYPE_1__* classdef; scalar_t__ ignorep; } ;
struct TYPE_6__ {TYPE_2__ type; } ;
struct TYPE_4__ {unsigned int indx; char* vclass; char voffset; int pmisccount; int refs; int pmiscbuf; scalar_t__ ownvptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee_handle*,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee_handle*,int *) ;
 int FUNC_4 (void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct ieee_handle*,int) ;
 int FUNC_6 (struct ieee_handle*,unsigned int,char) ;
 int FUNC_7 (struct ieee_handle*,unsigned int,char*) ;
 int FUNC_8 (struct ieee_handle*,int) ;
 int FUNC_9 (struct ieee_handle*,char*) ;
 int FUNC_10 (struct ieee_handle*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (void *VAR_4)
{
  struct ieee_handle *VAR_5 = (struct ieee_handle *) VAR_4;
  unsigned int VAR_6;

  FUNC_0 (VAR_5->type_stack != ((void*)0)
   && VAR_5->type_stack->type.classdef != ((void*)0));




  if (VAR_5->type_stack->type.ignorep)
    return VAR_1;

  VAR_6 = VAR_5->type_stack->type.classdef->indx;


  if (VAR_5->type_stack->type.classdef->vclass != ((void*)0)
      || VAR_5->type_stack->type.classdef->ownvptr)
    {
      if (! FUNC_3 (VAR_5,
    &VAR_5->type_stack->type.classdef->pmiscbuf)
   || ! FUNC_6 (VAR_5, VAR_6, 'z')
   || ! FUNC_7 (VAR_5, VAR_6, "")
   || ! FUNC_6 (VAR_5, VAR_6,
          VAR_5->type_stack->type.classdef->voffset))
 return VAR_0;
      if (VAR_5->type_stack->type.classdef->ownvptr)
 {
   if (! FUNC_7 (VAR_5, VAR_6, ""))
     return VAR_0;
 }
      else
 {
   if (! FUNC_7 (VAR_5, VAR_6,
      VAR_5->type_stack->type.classdef->vclass))
     return VAR_0;
 }
      if (! FUNC_6 (VAR_5, VAR_6, 0))
 return VAR_0;
      VAR_5->type_stack->type.classdef->pmisccount += 5;
    }





  if (! FUNC_3 (VAR_5, &VAR_5->cxx)
      || ! FUNC_8 (VAR_5, (int) VAR_3)
      || ! FUNC_10 (VAR_5, VAR_6)
      || ! FUNC_9 (VAR_5, "")
      || ! FUNC_5 (VAR_5, (int) VAR_2)
      || ! FUNC_10 (VAR_5, VAR_6)
      || ! FUNC_10 (VAR_5, 0)
      || ! FUNC_10 (VAR_5, 62)
      || ! FUNC_10 (VAR_5, 80)
      || ! FUNC_10 (VAR_5,
         VAR_5->type_stack->type.classdef->pmisccount))
    return VAR_0;

  if (! FUNC_1 (VAR_5, &VAR_5->cxx,
       &VAR_5->type_stack->type.classdef->pmiscbuf))
    return VAR_0;
  if (! FUNC_2 (&VAR_5->type_stack->type.classdef->refs))
    {
      if (! FUNC_1 (VAR_5, &VAR_5->cxx,
    &VAR_5->type_stack->type.classdef->refs))
 return VAR_0;
    }

  return FUNC_4 (VAR_4);
}
