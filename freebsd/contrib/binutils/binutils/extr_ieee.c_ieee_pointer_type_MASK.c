
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_modified_type {unsigned int pointer; } ;
struct ieee_handle {TYPE_2__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {unsigned int indx; int localp; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee_handle*,int,int ,int ) ;
 struct ieee_modified_type* FUNC_1 (void*,unsigned int) ;
 unsigned int FUNC_2 (struct ieee_handle*) ;
 int FUNC_3 (struct ieee_handle*,unsigned int,int,int ,int ) ;
 int FUNC_4 (struct ieee_handle*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (void *VAR_2)
{
  struct ieee_handle *VAR_3 = (struct ieee_handle *) VAR_2;
  bfd_boolean VAR_4;
  unsigned int VAR_5;
  struct ieee_modified_type *VAR_6 = ((void*)0);

  VAR_4 = VAR_3->type_stack->type.localp;
  VAR_5 = FUNC_2 (VAR_3);



  if (VAR_5 < 32)
    return FUNC_3 (VAR_3, VAR_5 + 32, 0, VAR_1, VAR_0);

  if (! VAR_4)
    {
      VAR_6 = FUNC_1 (VAR_2, VAR_5);
      if (VAR_6 == ((void*)0))
 return VAR_0;


      if (VAR_6->pointer > 0)
 return FUNC_3 (VAR_3, VAR_6->pointer, 4, VAR_1, VAR_0);
    }

  if (! FUNC_0 (VAR_3, 4, VAR_1, VAR_4)
      || ! FUNC_4 (VAR_3, 'P')
      || ! FUNC_4 (VAR_3, VAR_5))
    return VAR_0;

  if (! VAR_4)
    VAR_6->pointer = VAR_3->type_stack->type.indx;

  return VAR_1;
}
