
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int conversion_kind ;
struct TYPE_3__ {int kind; } ;
typedef TYPE_1__ conversion ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static conversion *
FUNC_1 (conversion_kind VAR_0)
{
  conversion *VAR_1;
  VAR_1 = (conversion *) FUNC_0 (sizeof (conversion));
  VAR_1->kind = VAR_0;
  return VAR_1;
}
