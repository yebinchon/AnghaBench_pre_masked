
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee_handle {TYPE_5__* type_stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_9__ {char* name; TYPE_3__* classdef; int strdef; scalar_t__ localp; } ;
struct TYPE_10__ {TYPE_4__ type; TYPE_2__* next; } ;
struct TYPE_8__ {unsigned int indx; int pmisccount; int pmiscbuf; } ;
struct TYPE_6__ {int strdef; int * classdef; } ;
struct TYPE_7__ {TYPE_1__ type; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee_handle*,int *) ;
 unsigned int FUNC_4 (struct ieee_handle*) ;
 int FUNC_5 (struct ieee_handle*,unsigned int,unsigned int) ;
 int FUNC_6 (struct ieee_handle*,unsigned int,char const*) ;
 int FUNC_7 (struct ieee_handle*,char*) ;
 int FUNC_8 (struct ieee_handle*,int) ;
 int FUNC_9 (char*,char*,char const*) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_12 (void *VAR_5, bfd_vma VAR_6, bfd_boolean VAR_7,
        enum debug_visibility VAR_8)
{
  struct ieee_handle *VAR_9 = (struct ieee_handle *) VAR_5;
  const char *VAR_10;
  bfd_boolean VAR_11;
  unsigned int VAR_12;
  char *VAR_13;
  unsigned int VAR_14;
  unsigned int VAR_15;

  FUNC_0 (VAR_9->type_stack != ((void*)0)
   && VAR_9->type_stack->type.name != ((void*)0)
   && VAR_9->type_stack->next != ((void*)0)
   && VAR_9->type_stack->next->type.classdef != ((void*)0)
   && ! FUNC_2 (&VAR_9->type_stack->next->type.strdef));

  VAR_10 = VAR_9->type_stack->type.name;
  VAR_11 = VAR_9->type_stack->type.localp;
  VAR_12 = FUNC_4 (VAR_9);






  if (VAR_7)
    {
      VAR_13 = (char *) FUNC_11 (FUNC_10 (VAR_10) + sizeof "_vb$");
      FUNC_9 (VAR_13, "_vb$%s", VAR_10);
      VAR_14 = VAR_1;
    }
  else
    {
      if (VAR_11)
 VAR_9->type_stack->type.localp = VAR_4;

      VAR_13 = (char *) FUNC_11 (FUNC_10 (VAR_10) + sizeof "_b$");
      FUNC_9 (VAR_13, "_b$%s", VAR_10);

      if (! FUNC_3 (VAR_9, &VAR_9->type_stack->type.strdef)
   || ! FUNC_7 (VAR_9, VAR_13)
   || ! FUNC_8 (VAR_9, VAR_12)
   || ! FUNC_8 (VAR_9, VAR_6 / 8))
 return VAR_3;
      VAR_14 = 0;
    }

  if (VAR_8 == VAR_2)
    VAR_14 |= VAR_0;

  VAR_15 = VAR_9->type_stack->type.classdef->indx;

  if (! FUNC_3 (VAR_9, &VAR_9->type_stack->type.classdef->pmiscbuf)
      || ! FUNC_5 (VAR_9, VAR_15, 'b')
      || ! FUNC_5 (VAR_9, VAR_15, VAR_14)
      || ! FUNC_6 (VAR_9, VAR_15, VAR_10)
      || ! FUNC_5 (VAR_9, VAR_15, 0)
      || ! FUNC_6 (VAR_9, VAR_15, VAR_13))
    return VAR_3;
  VAR_9->type_stack->type.classdef->pmisccount += 5;

  FUNC_1 (VAR_13);

  return VAR_4;
}
