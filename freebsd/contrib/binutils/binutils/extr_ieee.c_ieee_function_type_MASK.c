
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_modified_type {scalar_t__ function; } ;
struct ieee_handle {TYPE_2__* type_stack; } ;
struct ieee_buflist {int dummy; } ;
typedef unsigned int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_3__ {scalar_t__ indx; struct ieee_buflist fndef; scalar_t__ localp; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (struct ieee_handle*,char const*,unsigned int,int ,scalar_t__,scalar_t__,struct ieee_buflist*) ;
 struct ieee_modified_type* FUNC_2 (void*,unsigned int) ;
 int FUNC_3 (struct ieee_handle*,struct ieee_buflist*) ;
 unsigned int FUNC_4 (struct ieee_handle*) ;
 scalar_t__ FUNC_5 (struct ieee_handle*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct ieee_handle*,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_3, int VAR_4, bfd_boolean VAR_5)
{
  struct ieee_handle *VAR_6 = (struct ieee_handle *) VAR_3;
  bfd_boolean VAR_7;
  unsigned int *VAR_8 = ((void*)0);
  int VAR_9;
  unsigned int VAR_10;
  struct ieee_buflist VAR_11;
  struct ieee_modified_type *VAR_12;

  VAR_7 = VAR_0;

  if (VAR_4 > 0)
    {
      VAR_8 = (unsigned int *) FUNC_7 (VAR_4 * sizeof *VAR_8);
      for (VAR_9 = VAR_4 - 1; VAR_9 >= 0; VAR_9--)
 {
   if (VAR_6->type_stack->type.localp)
     VAR_7 = VAR_1;
   VAR_8[VAR_9] = FUNC_4 (VAR_6);
 }
    }
  else if (VAR_4 < 0)
    VAR_5 = VAR_0;

  if (VAR_6->type_stack->type.localp)
    VAR_7 = VAR_1;
  VAR_10 = FUNC_4 (VAR_6);

  VAR_12 = ((void*)0);
  if (VAR_4 < 0 && ! VAR_7)
    {
      VAR_12 = FUNC_2 (VAR_3, VAR_10);
      if (VAR_12 == ((void*)0))
 return VAR_0;

      if (VAR_12->function > 0)
 return FUNC_5 (VAR_6, VAR_12->function, 0, VAR_1, VAR_0);
    }



  if (! FUNC_3 (VAR_6, &VAR_11)
      || ! FUNC_1 (VAR_6, (const char *) ((void*)0),
       (unsigned int) -1, 0, VAR_1, VAR_7,
       &VAR_11)
      || ! FUNC_6 (VAR_6, 'x')
      || ! FUNC_6 (VAR_6, 0x41)
      || ! FUNC_6 (VAR_6, 0)
      || ! FUNC_6 (VAR_6, 0)
      || ! FUNC_6 (VAR_6, VAR_10)
      || ! FUNC_6 (VAR_6, (bfd_vma) VAR_4 + (VAR_5 ? 1 : 0)))
    return VAR_0;
  if (VAR_4 > 0)
    {
      for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
 if (! FUNC_6 (VAR_6, VAR_8[VAR_9]))
   return VAR_0;
      FUNC_0 (VAR_8);
    }
  if (VAR_5)
    {


      if (! FUNC_6 (VAR_6, (bfd_vma) VAR_2 + 32))
 return VAR_0;
    }

  if (! FUNC_6 (VAR_6, 0))
    return VAR_0;



  VAR_6->type_stack->type.fndef = VAR_11;

  if (VAR_12 != ((void*)0))
    VAR_12->function = VAR_6->type_stack->type.indx;

  return VAR_1;
}
