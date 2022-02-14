
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* lv_map; int nr_voice; int model; TYPE_1__* v_alloc; } ;
struct TYPE_5__ {int voice_mode; scalar_t__* op; int ioaddr; } ;
struct TYPE_4__ {int max_voice; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int,int,int ,int) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_2(int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 18; VAR_4++)
  VAR_1->lv_map[VAR_4] = VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->nr_voice; VAR_4++)
 {
  FUNC_0(VAR_2[VAR_1->lv_map[VAR_4]].ioaddr,
   VAR_0 + VAR_2[VAR_1->lv_map[VAR_4]].op[0], 0xff);

  FUNC_0(VAR_2[VAR_1->lv_map[VAR_4]].ioaddr,
   VAR_0 + VAR_2[VAR_1->lv_map[VAR_4]].op[1], 0xff);

  if (VAR_2[VAR_1->lv_map[VAR_4]].voice_mode == 4)
  {
   FUNC_0(VAR_2[VAR_1->lv_map[VAR_4]].ioaddr,
    VAR_0 + VAR_2[VAR_1->lv_map[VAR_4]].op[2], 0xff);

   FUNC_0(VAR_2[VAR_1->lv_map[VAR_4]].ioaddr,
    VAR_0 + VAR_2[VAR_1->lv_map[VAR_4]].op[3], 0xff);
  }

  FUNC_1(VAR_3, VAR_4, 0, 64);
 }

 if (VAR_1->model == 2)
 {
  VAR_1->v_alloc->max_voice = VAR_1->nr_voice = 18;

  for (VAR_4 = 0; VAR_4 < 18; VAR_4++)
   VAR_2[VAR_4].voice_mode = 2;

 }
}
