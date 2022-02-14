
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sbi_instrument {int* operators; } ;
struct physical_voice_info {scalar_t__ voice_mode; } ;
struct TYPE_4__ {int nr_voice; size_t* lv_map; TYPE_1__* voc; struct sbi_instrument* i_map; struct sbi_instrument** act_i; } ;
struct TYPE_3__ {int mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (char*,int) ;
 struct physical_voice_info* VAR_2 ;

__attribute__((used)) static void FUNC_3(int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 struct sbi_instrument *VAR_7;
 struct physical_voice_info *VAR_8;

 if (VAR_4 < 0 || VAR_4 >= VAR_1->nr_voice)
  return;

 VAR_8 = &VAR_2[VAR_1->lv_map[VAR_4]];

 FUNC_0(FUNC_2("Aftertouch %d\n", VAR_4));

 if (VAR_8->voice_mode == 0)
  return;





 VAR_7 = VAR_1->act_i[VAR_4];

 if (!VAR_7)
  VAR_7 = &VAR_1->i_map[0];

 if (VAR_1->voc[VAR_4].mode == 4)
 {
  int VAR_9 = ((VAR_7->operators[10] & 0x01) << 1) | (VAR_7->operators[10 + VAR_0] & 0x01);

  switch (VAR_9)
  {
   case 0:
    FUNC_1(4);
    break;

   case 1:
    FUNC_1(2);
    FUNC_1(4);
    break;

   case 2:
    FUNC_1(1);
    FUNC_1(4);
    break;

   case 3:
    FUNC_1(1);
    FUNC_1(3);
    FUNC_1(4);
    break;

  }



 }
 else
 {
  FUNC_1(1);

  if ((VAR_7->operators[10] & 0x01))


   FUNC_1(2);
 }
}
