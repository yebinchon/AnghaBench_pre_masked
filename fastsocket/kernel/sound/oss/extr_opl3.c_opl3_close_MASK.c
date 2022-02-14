
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ perc_mode; scalar_t__ nr_drums; } ;
struct TYPE_6__ {int nr_voice; int model; TYPE_2__ fm_info; TYPE_1__* v_alloc; scalar_t__ busy; } ;
struct TYPE_4__ {int max_voice; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 VAR_0->busy = 0;
 VAR_0->v_alloc->max_voice = VAR_0->nr_voice = (VAR_0->model == 2) ? 18 : 9;

 VAR_0->fm_info.nr_drums = 0;
 VAR_0->fm_info.perc_mode = 0;

 FUNC_0(VAR_1);
}
