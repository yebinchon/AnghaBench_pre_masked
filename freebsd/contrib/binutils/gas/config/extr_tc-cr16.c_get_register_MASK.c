
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg_val; } ;
struct TYPE_4__ {TYPE_1__ value; } ;
typedef TYPE_2__ reg_entry ;
typedef int reg ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static reg
FUNC_1 (char *VAR_2)
{
  const reg_entry *VAR_3;

  VAR_3 = (const reg_entry *) FUNC_0 (VAR_1, VAR_2);

  if (VAR_3 != ((void*)0))
    return VAR_3->value.reg_val;

  return VAR_0;
}
