
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct pcxhr_mgr {scalar_t__ is_hr_stereo; scalar_t__ capture_chips; scalar_t__ board_has_aes1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct pcxhr_mgr* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_info *VAR_4)
{
 static const char *VAR_5[7] = {
  "Internal", "WordClock", "AES Sync",
  "AES 1", "AES 2", "AES 3", "AES 4"
 };
 static const char *VAR_6[3] = {
  "Internal", "AES Sync", "AES 1"
 };
 const char **VAR_7;
 struct pcxhr_mgr *VAR_8 = FUNC_1(VAR_3);
 int VAR_9 = 2;
 if (VAR_8->board_has_aes1) {
  VAR_9 += VAR_8->capture_chips;
  if (!VAR_8->is_hr_stereo)
   VAR_9 += 1;
 }
 if (VAR_8->is_hr_stereo) {
  VAR_7 = VAR_6;
  FUNC_0(VAR_9 > (VAR_0+1));
 } else {
  VAR_7 = VAR_5;
  FUNC_0(VAR_9 > (VAR_1+1));
 }
 VAR_4->type = VAR_2;
 VAR_4->count = 1;
 VAR_4->value.enumerated.items = VAR_9;
 if (VAR_4->value.enumerated.item >= VAR_9)
  VAR_4->value.enumerated.item = VAR_9-1;
 FUNC_2(VAR_4->value.enumerated.name,
  VAR_7[VAR_4->value.enumerated.item]);
 return 0;
}
