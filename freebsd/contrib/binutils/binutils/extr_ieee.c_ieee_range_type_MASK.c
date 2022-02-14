
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_handle {TYPE_2__* type_stack; } ;
typedef unsigned int bfd_vma ;
typedef scalar_t__ bfd_signed_vma ;
typedef int bfd_boolean ;
struct TYPE_3__ {unsigned int size; int unsignedp; int localp; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 scalar_t__ FUNC_0 (struct ieee_handle*,unsigned int,int,int) ;
 int FUNC_1 (struct ieee_handle*) ;
 scalar_t__ FUNC_2 (struct ieee_handle*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_0, bfd_signed_vma VAR_1, bfd_signed_vma VAR_2)
{
  struct ieee_handle *VAR_3 = (struct ieee_handle *) VAR_0;
  unsigned int VAR_4;
  bfd_boolean VAR_5, VAR_6;

  VAR_4 = VAR_3->type_stack->type.size;
  VAR_5 = VAR_3->type_stack->type.unsignedp;
  VAR_6 = VAR_3->type_stack->type.localp;
  FUNC_1 (VAR_3);
  return (FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6)
   && FUNC_2 (VAR_3, 'R')
   && FUNC_2 (VAR_3, (bfd_vma) VAR_1)
   && FUNC_2 (VAR_3, (bfd_vma) VAR_2)
   && FUNC_2 (VAR_3, VAR_5 ? 0 : 1)
   && FUNC_2 (VAR_3, VAR_4));
}
