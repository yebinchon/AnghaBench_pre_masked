
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soundscape {unsigned char midi_vol; int lock; int io_base; } ;
struct snd_wss {struct snd_card* card; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_card {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 struct soundscape* FUNC_0 (struct snd_card*) ;
 scalar_t__ FUNC_1 (int ,unsigned char,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct snd_wss* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_2,
                           struct snd_ctl_elem_value *VAR_3)
{
 struct snd_wss *VAR_4 = FUNC_4(VAR_2);
 struct snd_card *VAR_5 = VAR_4->card;
 register struct soundscape *VAR_6 = FUNC_0(VAR_5);
 unsigned long VAR_7;
 int VAR_8;

 FUNC_5(&VAR_6->lock, VAR_7);





 FUNC_2(VAR_6->io_base);







 if (VAR_6->midi_vol == ((unsigned char) VAR_3->value.integer. value[0] & 127)) {
  VAR_8 = 0;
  goto __skip_change;
 }
 VAR_8 = (FUNC_1(VAR_6->io_base, VAR_0, 100)
           && FUNC_1(VAR_6->io_base, ((unsigned char) VAR_3->value.integer. value[0]) & 127, 100)
           && FUNC_1(VAR_6->io_base, VAR_1, 100));
 VAR_6->midi_vol = (unsigned char) VAR_3->value.integer.value[0] & 127;
      __skip_change:




 FUNC_3(VAR_6->io_base);

 FUNC_6(&VAR_6->lock, VAR_7);
 return VAR_8;
}
