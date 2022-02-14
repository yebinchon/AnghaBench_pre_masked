
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eh_region {scalar_t__ tree_label; int label; } ;
typedef int rtx ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int last_region_number; int region_array; } ;


 int FUNC_0 (scalar_t__) ;
 struct eh_region* FUNC_1 (int ,int ,int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

void
FUNC_4 (void)
{
  rtx VAR_2 = FUNC_2 ();
  int VAR_3, VAR_4 = VAR_0->eh->last_region_number;





  for (VAR_3 = 1; VAR_3 <= VAR_4; ++VAR_3)
    {
      struct eh_region *VAR_5;

      VAR_5 = FUNC_1 (VAR_1, VAR_0->eh->region_array, VAR_3);
      if (VAR_5 && VAR_5->tree_label)
 VAR_5->label = FUNC_0 (VAR_5->tree_label);
    }

  FUNC_3 (VAR_2);
}
