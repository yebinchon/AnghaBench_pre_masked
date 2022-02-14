
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int image; char* name; } ;
typedef TYPE_1__ reg_entry ;


 int VAR_0 ;
 TYPE_1__ const* VAR_1 ;

__attribute__((used)) static char *
FUNC_0 (int VAR_2)
{
  const reg_entry *VAR_3;

  for (VAR_3 = VAR_1; VAR_3 < VAR_1 + VAR_0; VAR_3++)
    if (VAR_3->image == VAR_2)
      return VAR_3->name;

  return "ILLEGAL REGISTER";
}
