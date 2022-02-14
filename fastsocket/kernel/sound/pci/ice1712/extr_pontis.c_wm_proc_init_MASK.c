
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write; } ;
struct TYPE_4__ {TYPE_1__ text; } ;
struct snd_info_entry {TYPE_2__ c; int mode; } ;
struct snd_ice1712 {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct snd_info_entry**) ;
 int FUNC_1 (struct snd_info_entry*,struct snd_ice1712*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_3)
{
 struct snd_info_entry *VAR_4;
 if (! FUNC_0(VAR_3->card, "wm_codec", &VAR_4)) {
  FUNC_1(VAR_4, VAR_3, VAR_1);
  VAR_4->mode |= VAR_0;
  VAR_4->c.text.write = VAR_2;
 }
}
