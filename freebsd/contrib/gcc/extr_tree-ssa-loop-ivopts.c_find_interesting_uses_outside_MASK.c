
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct ivopts_data {int dummy; } ;
typedef TYPE_1__* edge ;
struct TYPE_4__ {int dest; } ;


 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ivopts_data*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct ivopts_data *VAR_0, edge VAR_1)
{
  tree VAR_2, VAR_3;

  for (VAR_2 = FUNC_3 (VAR_1->dest); VAR_2; VAR_2 = FUNC_1 (VAR_2))
    {
      VAR_3 = FUNC_0 (VAR_2, VAR_1);
      FUNC_2 (VAR_0, VAR_3);
    }
}
