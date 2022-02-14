
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee_handle {unsigned int name_indx; TYPE_5__* type_stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef unsigned int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_9__ {unsigned int size; int unsignedp; int referencep; int localp; char const* name; int strdef; TYPE_3__* classdef; } ;
struct TYPE_10__ {TYPE_4__ type; TYPE_2__* next; } ;
struct TYPE_8__ {unsigned int indx; int pmisccount; int refs; int pmiscbuf; } ;
struct TYPE_6__ {scalar_t__ ignorep; int strdef; } ;
struct TYPE_7__ {TYPE_1__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ieee_handle*,int *) ;
 int FUNC_3 (struct ieee_handle*,int ,int,int) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_4 (struct ieee_handle*) ;
 int FUNC_5 (struct ieee_handle*) ;
 unsigned int FUNC_6 (int) ;
 int FUNC_7 (struct ieee_handle*,int) ;
 int FUNC_8 (struct ieee_handle*,unsigned int,int) ;
 int FUNC_9 (struct ieee_handle*,unsigned int,char const*) ;
 int FUNC_10 (struct ieee_handle*,int) ;
 scalar_t__ FUNC_11 (struct ieee_handle*,char const*) ;
 scalar_t__ FUNC_12 (struct ieee_handle*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (void *VAR_4, const char *VAR_5, bfd_vma VAR_6, bfd_vma VAR_7,
     enum debug_visibility VAR_8)
{
  struct ieee_handle *VAR_9 = (struct ieee_handle *) VAR_4;
  unsigned int VAR_10;
  bfd_boolean VAR_11;
  bfd_boolean VAR_12;
  bfd_boolean VAR_13;
  unsigned int VAR_14;
  bfd_vma VAR_15;

  FUNC_0 (VAR_9->type_stack != ((void*)0)
   && VAR_9->type_stack->next != ((void*)0)
   && ! FUNC_1 (&VAR_9->type_stack->next->type.strdef));



  if (VAR_9->type_stack->next->type.ignorep)
    {
      FUNC_5 (VAR_9);
      return VAR_1;
    }

  VAR_10 = VAR_9->type_stack->type.size;
  VAR_11 = VAR_9->type_stack->type.unsignedp;
  VAR_12 = VAR_9->type_stack->type.referencep;
  VAR_13 = VAR_9->type_stack->type.localp;
  VAR_14 = FUNC_4 (VAR_9);

  if (VAR_13)
    VAR_9->type_stack->type.localp = VAR_1;

  if (VAR_9->type_stack->type.classdef != ((void*)0))
    {
      unsigned int VAR_16;
      unsigned int VAR_17;




      VAR_16 = FUNC_6 (VAR_8);
      VAR_17 = VAR_9->type_stack->type.classdef->indx;
      if (! FUNC_2 (VAR_9,
    &VAR_9->type_stack->type.classdef->pmiscbuf)
   || ! FUNC_8 (VAR_9, VAR_17, 'd')
   || ! FUNC_8 (VAR_9, VAR_17, VAR_16)
   || ! FUNC_9 (VAR_9, VAR_17, VAR_5)
   || ! FUNC_9 (VAR_9, VAR_17, VAR_5))
 return VAR_0;
      VAR_9->type_stack->type.classdef->pmisccount += 4;

      if (VAR_12)
 {
   unsigned int VAR_18;






   VAR_18 = VAR_9->name_indx;
   ++VAR_9->name_indx;

   if (! FUNC_2 (VAR_9,
        &VAR_9->type_stack->type.classdef->refs)
       || ! FUNC_10 (VAR_9, (int) VAR_3)
       || ! FUNC_12 (VAR_9, VAR_18)
       || ! FUNC_11 (VAR_9, "")
       || ! FUNC_7 (VAR_9, (int) VAR_2)
       || ! FUNC_12 (VAR_9, VAR_18)
       || ! FUNC_12 (VAR_9, 0)
       || ! FUNC_12 (VAR_9, 62)
       || ! FUNC_12 (VAR_9, 80)
       || ! FUNC_12 (VAR_9, 4)
       || ! FUNC_8 (VAR_9, VAR_18, 'R')
       || ! FUNC_8 (VAR_9, VAR_18, 3)
       || ! FUNC_9 (VAR_9, VAR_18, VAR_9->type_stack->type.name)
       || ! FUNC_9 (VAR_9, VAR_18, VAR_5))
     return VAR_0;
 }
    }



  if (VAR_10 == 0 || VAR_7 == 0 || VAR_7 == VAR_10 * 8)
    VAR_15 = VAR_6 / 8;
  else
    {
      if (! FUNC_3 (VAR_9, 0, VAR_11,
         VAR_9->type_stack->type.localp)
   || ! FUNC_12 (VAR_9, 'g')
   || ! FUNC_12 (VAR_9, VAR_11 ? 0 : 1)
   || ! FUNC_12 (VAR_9, VAR_7)
   || ! FUNC_12 (VAR_9, VAR_14))
 return VAR_0;
      VAR_14 = FUNC_4 (VAR_9);
      VAR_15 = VAR_6;
    }



  return (FUNC_2 (VAR_9, &VAR_9->type_stack->type.strdef)
   && FUNC_11 (VAR_9, VAR_5)
   && FUNC_12 (VAR_9, VAR_14)
   && FUNC_12 (VAR_9, VAR_15));
}
