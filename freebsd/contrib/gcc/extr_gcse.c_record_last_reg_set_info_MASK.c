
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg_avail_info {int last_set; int first_set; TYPE_1__* last_bb; } ;
typedef int rtx ;
struct TYPE_2__ {size_t index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_0 ;
 struct reg_avail_info* VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_2 (rtx VAR_3, int VAR_4)
{
  struct reg_avail_info *VAR_5 = &VAR_1[VAR_4];
  int VAR_6 = FUNC_0 (VAR_3);

  VAR_5->last_set = VAR_6;
  if (VAR_5->last_bb != VAR_0)
    {
      VAR_5->last_bb = VAR_0;
      VAR_5->first_set = VAR_6;
      FUNC_1 (VAR_2[VAR_0->index], VAR_4);
    }
}
