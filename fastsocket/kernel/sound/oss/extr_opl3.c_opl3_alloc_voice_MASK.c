
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct voice_alloc_info {scalar_t__* map; int* alloc_times; } ;
struct sbi_instrument {scalar_t__ channel; scalar_t__ key; } ;
struct TYPE_4__ {int nr_voice; struct sbi_instrument* i_map; TYPE_1__* chn_info; } ;
struct TYPE_3__ {int pgm_num; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3, int VAR_4, struct voice_alloc_info *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0x7fffffff;
 struct sbi_instrument *VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_3 < 0 || VAR_3 > 15)
  VAR_14 = 0;
 else
  VAR_14 = VAR_1->chn_info[VAR_3].pgm_num;

 VAR_12 = &VAR_1->i_map[VAR_14];
 if (VAR_12->channel < 0 ||
  VAR_1->nr_voice != 12)
  VAR_13 = 0;
 else if (VAR_1->nr_voice == 12)
  VAR_13 = (VAR_12->key == VAR_0);
 else
  VAR_13 = 0;

 if (VAR_13)
 {
  VAR_9 = VAR_7 = 0;
  VAR_10 = 6;
 }
 else
 {
  if (VAR_1->nr_voice == 12)
   VAR_9 = VAR_7 = 6;
  else
   VAR_9 = VAR_7 = 0;
  VAR_10 = VAR_1->nr_voice;
 }




 VAR_8 = VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
 {
  if (VAR_5->map[VAR_7] == 0)
  {
   return VAR_7;
  }
  if (VAR_5->alloc_times[VAR_7] < VAR_11)
  {
   VAR_11 = VAR_5->alloc_times[VAR_7];
   VAR_8 = VAR_7;
  }
  VAR_7 = (VAR_7 + 1) % VAR_10;
 }





 if (VAR_8 < 0)
  VAR_8 = 0;
 if (VAR_8 > VAR_1->nr_voice)
  VAR_8 -= VAR_1->nr_voice;

 return VAR_8;
}
