
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int busy; int nr_voice; int model; int cmask; int right_io; TYPE_1__* v_alloc; } ;
struct TYPE_3__ {int max_voice; scalar_t__* alloc_times; scalar_t__* map; scalar_t__ timestamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_2->busy)
  return -VAR_1;
 VAR_2->busy = 1;

 VAR_2->v_alloc->max_voice = VAR_2->nr_voice = (VAR_2->model == 2) ? 18 : 9;
 VAR_2->v_alloc->timestamp = 0;

 for (VAR_5 = 0; VAR_5 < 18; VAR_5++)
 {
  VAR_2->v_alloc->map[VAR_5] = 0;
  VAR_2->v_alloc->alloc_times[VAR_5] = 0;
 }

 VAR_2->cmask = 0x00;


 if (VAR_2->model == 2)
  FUNC_0(VAR_2->right_io, VAR_0, VAR_2->cmask);
 return 0;
}
