
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct physical_voice_info {scalar_t__ voice_mode; scalar_t__ voice_num; int ioaddr; } ;
struct TYPE_4__ {size_t* lv_map; TYPE_1__* voc; } ;
struct TYPE_3__ {int bender; int keyon_byte; int current_freq; int bender_range; int orig_freq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int,int*,int*) ;
 int FUNC_2 (int ,scalar_t__,unsigned char) ;
 struct physical_voice_info* VAR_3 ;

__attribute__((used)) static void FUNC_3(int VAR_4, int VAR_5, int VAR_6)
{
 unsigned char VAR_7;
 int VAR_8, VAR_9, VAR_10;
 struct physical_voice_info *VAR_11;

 VAR_11 = &VAR_3[VAR_2->lv_map[VAR_5]];

 if (VAR_11->voice_mode == 0)
  return;

 VAR_2->voc[VAR_5].bender = VAR_6;
 if (!VAR_6)
  return;
 if (!(VAR_2->voc[VAR_5].keyon_byte & 0x20))
  return;



 VAR_10 = FUNC_0(VAR_2->voc[VAR_5].orig_freq, VAR_2->voc[VAR_5].bender, VAR_2->voc[VAR_5].bender_range, 0);
 VAR_2->voc[VAR_5].current_freq = VAR_10;

 FUNC_1(VAR_10, &VAR_8, &VAR_9);

 VAR_7 = VAR_9 & 0xff;


 FUNC_2(VAR_11->ioaddr, VAR_0 + VAR_11->voice_num, VAR_7);

 VAR_7 = 0x20 | ((VAR_8 & 0x7) << 2) | ((VAR_9 >> 8) & 0x3);
 VAR_2->voc[VAR_5].keyon_byte = VAR_7;
 FUNC_2(VAR_11->ioaddr, VAR_1 + VAR_11->voice_num, VAR_7);
}
