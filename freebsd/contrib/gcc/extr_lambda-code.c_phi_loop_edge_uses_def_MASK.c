
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int dummy; } ;
struct TYPE_2__ {int src; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 TYPE_1__* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct loop*,int ) ;

__attribute__((used)) static bool
FUNC_4 (struct loop *VAR_0, tree VAR_1, tree VAR_2)
{
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < FUNC_2 (VAR_1); VAR_3++)
    if (FUNC_3 (VAR_0, FUNC_1 (VAR_1, VAR_3)->src))
      if (FUNC_0 (VAR_1, VAR_3) == VAR_2)
 return 1;
  return 0;
}
