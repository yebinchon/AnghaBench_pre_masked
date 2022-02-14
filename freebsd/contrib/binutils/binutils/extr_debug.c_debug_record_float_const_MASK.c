
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double float_constant; } ;
struct debug_name {TYPE_1__ u; } ;
struct debug_handle {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct debug_name* FUNC_0 (struct debug_handle*,char const*,int ,int ) ;

bfd_boolean
FUNC_1 (void *VAR_4, const char *VAR_5, double VAR_6)
{
  struct debug_handle *VAR_7 = (struct debug_handle *) VAR_4;
  struct debug_name *VAR_8;

  if (VAR_5 == ((void*)0))
    return VAR_2;

  VAR_8 = FUNC_0 (VAR_7, VAR_5, VAR_1,
          VAR_0);
  if (VAR_8 == ((void*)0))
    return VAR_2;

  VAR_8->u.float_constant = VAR_6;

  return VAR_3;
}
