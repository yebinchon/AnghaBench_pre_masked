
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int indx; unsigned int size; void* localp; void* unsignedp; } ;
struct ieee_type_stack {struct ieee_type_stack* next; TYPE_1__ type; } ;
struct ieee_handle {struct ieee_type_stack* type_stack; } ;
typedef void* bfd_boolean ;


 void* VAR_0 ;
 int FUNC_0 (struct ieee_type_stack*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct ieee_handle *VAR_1, unsigned int VAR_2,
  unsigned int VAR_3, bfd_boolean VAR_4, bfd_boolean VAR_5)
{
  struct ieee_type_stack *VAR_6;

  VAR_6 = (struct ieee_type_stack *) FUNC_1 (sizeof *VAR_6);
  FUNC_0 (VAR_6, 0, sizeof *VAR_6);

  VAR_6->type.indx = VAR_2;
  VAR_6->type.size = VAR_3;
  VAR_6->type.unsignedp = VAR_4;
  VAR_6->type.localp = VAR_5;

  VAR_6->next = VAR_1->type_stack;
  VAR_1->type_stack = VAR_6;

  return VAR_0;
}
