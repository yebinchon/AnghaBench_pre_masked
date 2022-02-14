
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_modified_type {scalar_t__ volatile_qualified; } ;
struct ieee_handle {TYPE_2__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {unsigned int size; scalar_t__ indx; int localp; int unsignedp; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee_handle*,unsigned int,int ,int ) ;
 struct ieee_modified_type* FUNC_1 (struct ieee_handle*,unsigned int) ;
 unsigned int FUNC_2 (struct ieee_handle*) ;
 int FUNC_3 (struct ieee_handle*,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_4 (struct ieee_handle*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (void *VAR_2)
{
  struct ieee_handle *VAR_3 = (struct ieee_handle *) VAR_2;
  unsigned int VAR_4;
  bfd_boolean VAR_5, VAR_6;
  unsigned int VAR_7;
  struct ieee_modified_type *VAR_8 = ((void*)0);

  VAR_4 = VAR_3->type_stack->type.size;
  VAR_5 = VAR_3->type_stack->type.unsignedp;
  VAR_6 = VAR_3->type_stack->type.localp;
  VAR_7 = FUNC_2 (VAR_3);

  if (! VAR_6)
    {
      VAR_8 = FUNC_1 (VAR_3, VAR_7);
      if (VAR_8 == ((void*)0))
 return VAR_0;

      if (VAR_8->volatile_qualified > 0)
 return FUNC_3 (VAR_3, VAR_8->volatile_qualified, VAR_4, VAR_5,
          VAR_0);
    }

  if (! FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6)
      || ! FUNC_4 (VAR_3, 'n')
      || ! FUNC_4 (VAR_3, 2)
      || ! FUNC_4 (VAR_3, VAR_7))
    return VAR_0;

  if (! VAR_6)
    VAR_8->volatile_qualified = VAR_3->type_stack->type.indx;

  return VAR_1;
}
