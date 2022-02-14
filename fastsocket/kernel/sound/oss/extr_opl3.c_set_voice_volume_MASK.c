
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sbi_instrument {scalar_t__ channel; unsigned char* operators; } ;
struct physical_voice_info {scalar_t__* op; int ioaddr; } ;
struct TYPE_4__ {int nr_voice; size_t* lv_map; TYPE_1__* voc; struct sbi_instrument* i_map; struct sbi_instrument** act_i; } ;
struct TYPE_3__ {int mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,scalar_t__,unsigned char) ;
 struct physical_voice_info* VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4, int VAR_5, int VAR_6)
{
 unsigned char VAR_7, VAR_8, VAR_9, VAR_10;
 struct sbi_instrument *VAR_11;
 struct physical_voice_info *VAR_12;

 if (VAR_4 < 0 || VAR_4 >= VAR_2->nr_voice)
  return;

 VAR_12 = &VAR_3[VAR_2->lv_map[VAR_4]];
 VAR_11 = VAR_2->act_i[VAR_4];

 if (!VAR_11)
  VAR_11 = &VAR_2->i_map[0];

 if (VAR_11->channel < 0)
  return;

 if (VAR_2->voc[VAR_4].mode == 0)
  return;

 if (VAR_2->voc[VAR_4].mode == 2)
 {
  VAR_7 = VAR_11->operators[2];
  VAR_8 = VAR_11->operators[3];
  if ((VAR_11->operators[10] & 0x01))
  {
   FUNC_0(&VAR_7, VAR_5, VAR_6);
   FUNC_0(&VAR_8, VAR_5, VAR_6);
  }
  else
  {
   FUNC_0(&VAR_8, VAR_5, VAR_6);
  }
  FUNC_1(VAR_12->ioaddr, VAR_0 + VAR_12->op[0], VAR_7);
  FUNC_1(VAR_12->ioaddr, VAR_0 + VAR_12->op[1], VAR_8);
 }
 else
 {


  int VAR_13;

  VAR_7 = VAR_11->operators[2];
  VAR_8 = VAR_11->operators[3];
  VAR_9 = VAR_11->operators[VAR_1 + 2];
  VAR_10 = VAR_11->operators[VAR_1 + 3];






  VAR_13 = ((VAR_11->operators[10] & 0x01) << 1) | (VAR_11->operators[10 + VAR_1] & 0x01);

  switch (VAR_13)
  {
   case 0:
    FUNC_0(&VAR_10, VAR_5, VAR_6);
    break;

   case 1:
    FUNC_0(&VAR_8, VAR_5, VAR_6);
    FUNC_0(&VAR_10, VAR_5, VAR_6);
    break;

   case 2:
    FUNC_0(&VAR_7, VAR_5, VAR_6);
    FUNC_0(&VAR_10, VAR_5, VAR_6);
    break;

   case 3:
    FUNC_0(&VAR_7, VAR_5, VAR_6);
    FUNC_0(&VAR_9, VAR_5, VAR_6);
    FUNC_0(&VAR_10, VAR_5, VAR_6);
    break;

   default:
    ;
  }
  FUNC_1(VAR_12->ioaddr, VAR_0 + VAR_12->op[0], VAR_7);
  FUNC_1(VAR_12->ioaddr, VAR_0 + VAR_12->op[1], VAR_8);
  FUNC_1(VAR_12->ioaddr, VAR_0 + VAR_12->op[2], VAR_9);
  FUNC_1(VAR_12->ioaddr, VAR_0 + VAR_12->op[3], VAR_10);
 }
}
