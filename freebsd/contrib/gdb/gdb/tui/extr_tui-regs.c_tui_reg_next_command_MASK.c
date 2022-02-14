
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reggroup {int dummy; } ;
struct TYPE_4__ {struct reggroup* current_group; } ;
struct TYPE_5__ {TYPE_1__ data_display_info; } ;
struct TYPE_6__ {TYPE_2__ detail; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 struct reggroup* FUNC_0 (int ,struct reggroup*) ;
 int FUNC_1 (struct reggroup*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2, int VAR_3)
{
  if (VAR_0 != 0)
    {
      struct reggroup *VAR_4
        = VAR_0->detail.data_display_info.current_group;

      VAR_4 = FUNC_0 (VAR_1, VAR_4);
      if (VAR_4 == 0)
        VAR_4 = FUNC_0 (VAR_1, 0);

      if (VAR_4)
        FUNC_1 (VAR_4);
    }
}
