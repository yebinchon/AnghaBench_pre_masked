
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loops {int dummy; } ;
struct loop {struct loop* outer; } ;
struct TYPE_2__ {int src; } ;


 int FUNC_0 (struct loops*,int ,int*) ;
 int FUNC_1 (struct loop*) ;
 TYPE_1__* FUNC_2 (struct loop*) ;

__attribute__((used)) static void
FUNC_3 (struct loops *VAR_0, struct loop *VAR_1,
       bool *VAR_2)
{
  struct loop *VAR_3;

  while (VAR_1->outer)
    {
      VAR_3 = VAR_1->outer;
      if (!FUNC_1 (VAR_1))
 break;






      FUNC_0 (VAR_0, FUNC_2 (VAR_1)->src,
    VAR_2);
      VAR_1 = VAR_3;
    }
}
