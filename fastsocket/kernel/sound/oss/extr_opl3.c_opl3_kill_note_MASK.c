
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct physical_voice_info {scalar_t__ voice_mode; scalar_t__ voice_num; int ioaddr; } ;
struct TYPE_6__ {int nr_voice; size_t* lv_map; TYPE_2__* voc; TYPE_1__* v_alloc; } ;
struct TYPE_5__ {int keyon_byte; int volume; int panning; int bender_range; scalar_t__ mode; scalar_t__ current_freq; scalar_t__ orig_freq; scalar_t__ bender; } ;
struct TYPE_4__ {scalar_t__* map; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (char*,int) ;
 struct physical_voice_info* VAR_2 ;

__attribute__((used)) static int FUNC_3 (int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
  struct physical_voice_info *VAR_7;

  if (VAR_4 < 0 || VAR_4 >= VAR_1->nr_voice)
   return 0;

  VAR_1->v_alloc->map[VAR_4] = 0;

  VAR_7 = &VAR_2[VAR_1->lv_map[VAR_4]];
  FUNC_0(FUNC_2("Kill note %d\n", VAR_4));

  if (VAR_7->voice_mode == 0)
   return 0;

  FUNC_1(VAR_7->ioaddr, VAR_0 + VAR_7->voice_num, VAR_1->voc[VAR_4].keyon_byte & ~0x20);
  VAR_1->voc[VAR_4].keyon_byte = 0;
  VAR_1->voc[VAR_4].bender = 0;
  VAR_1->voc[VAR_4].volume = 64;
  VAR_1->voc[VAR_4].panning = 0xffff;
  VAR_1->voc[VAR_4].bender_range = 200;
  VAR_1->voc[VAR_4].orig_freq = 0;
  VAR_1->voc[VAR_4].current_freq = 0;
  VAR_1->voc[VAR_4].mode = 0;
  return 0;
}
