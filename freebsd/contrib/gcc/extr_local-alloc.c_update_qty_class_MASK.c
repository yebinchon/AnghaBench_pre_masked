
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
struct TYPE_2__ {int min_class; int alternate_class; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (int VAR_1, int VAR_2)
{
  enum reg_class VAR_3 = FUNC_2 (VAR_2);
  if (FUNC_1 (VAR_3, VAR_0[VAR_1].min_class))
    VAR_0[VAR_1].min_class = VAR_3;

  VAR_3 = FUNC_0 (VAR_2);
  if (FUNC_1 (VAR_3, VAR_0[VAR_1].alternate_class))
    VAR_0[VAR_1].alternate_class = VAR_3;
}
