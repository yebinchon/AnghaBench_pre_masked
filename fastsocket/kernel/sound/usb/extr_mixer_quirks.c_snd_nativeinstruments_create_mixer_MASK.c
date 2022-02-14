
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_1__* chip; } ;
struct snd_kcontrol_new {int private_value; int name; int info; int put; int get; int access; int iface; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct snd_kcontrol*) ;
 int VAR_2 ;
 struct snd_kcontrol* FUNC_1 (struct snd_kcontrol_new*,struct usb_mixer_interface*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_5,
           const struct snd_kcontrol_new *VAR_6,
           unsigned int VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct snd_kcontrol_new VAR_10 = {
  .iface = VAR_1,
  .access = VAR_0,
  .get = VAR_3,
  .put = VAR_4,
  .info = VAR_2,
 };

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  struct snd_kcontrol *VAR_11;

  VAR_10.name = VAR_6[VAR_8].name;
  VAR_10.private_value = VAR_6[VAR_8].private_value;

  VAR_11 = FUNC_1(&VAR_10, VAR_5);
  VAR_9 = FUNC_0(VAR_5->chip->card, VAR_11);

  if (VAR_9 < 0)
   break;
 }

 return VAR_9;
}
