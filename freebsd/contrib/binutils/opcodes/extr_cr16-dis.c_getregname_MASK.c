
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; char* name; } ;
typedef TYPE_1__ reg_entry ;
typedef int reg ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static char *
FUNC_0 (reg VAR_3)
{
  const reg_entry *VAR_4 = VAR_2 + VAR_3;

  if (VAR_4->type != VAR_0)
    return VAR_1;

  return VAR_4->name;
}
