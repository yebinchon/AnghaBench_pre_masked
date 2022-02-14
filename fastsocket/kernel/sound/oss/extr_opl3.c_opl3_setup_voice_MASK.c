
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct channel_info {int* controllers; int bender_range; int pgm_num; } ;
struct TYPE_6__ {TYPE_1__* voc; } ;
struct TYPE_5__ {struct channel_info* chn_info; } ;
struct TYPE_4__ {int volume; int panning; int bender_range; scalar_t__ bender; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int,int,int ) ;
 TYPE_2__** VAR_3 ;

__attribute__((used)) static void FUNC_1(int VAR_4, int VAR_5, int VAR_6)
{
 struct channel_info *VAR_7 =
 &VAR_3[VAR_4]->chn_info[VAR_6];

 FUNC_0(VAR_4, VAR_5, VAR_7->pgm_num);

 VAR_2->voc[VAR_5].bender = 0;
 VAR_2->voc[VAR_5].bender_range = VAR_7->bender_range;
 VAR_2->voc[VAR_5].volume = VAR_7->controllers[VAR_0];
 VAR_2->voc[VAR_5].panning = (VAR_7->controllers[VAR_1] * 2) - 128;
}
