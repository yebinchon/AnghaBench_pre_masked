
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kint; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_handle {int dummy; } ;
typedef struct debug_type* debug_type ;
typedef int bfd_boolean ;


 int VAR_0 ;
 struct debug_type* VAR_1 ;
 struct debug_type* FUNC_0 (struct debug_handle*,int ,unsigned int) ;

debug_type
FUNC_1 (void *VAR_2, unsigned int VAR_3, bfd_boolean VAR_4)
{
  struct debug_handle *VAR_5 = (struct debug_handle *) VAR_2;
  struct debug_type *VAR_6;

  VAR_6 = FUNC_0 (VAR_5, VAR_0, VAR_3);
  if (VAR_6 == ((void*)0))
    return VAR_1;

  VAR_6->u.kint = VAR_4;

  return VAR_6;
}
