
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct tea6330t {int equalizer; int fader; int* regs; int max_bass; int max_treble; int bass; int treble; int mleft; int mright; struct snd_i2c_bus* bus; struct snd_i2c_device* device; } ;
struct snd_kcontrol_new {int name; } ;
struct snd_i2c_device {int private_free; struct tea6330t* private_data; } ;
struct snd_i2c_bus {int dummy; } ;
struct snd_card {int mixername; } ;


 unsigned int FUNC_0 (struct snd_kcontrol_new*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_1 (struct tea6330t*) ;
 struct tea6330t* FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_card*,char*) ;
 int FUNC_4 (struct snd_card*,int ) ;
 int FUNC_5 (struct snd_kcontrol_new*,struct tea6330t*) ;
 int FUNC_6 (struct snd_i2c_bus*,char*,int ,struct snd_i2c_device**) ;
 int FUNC_7 (struct snd_i2c_device*) ;
 int FUNC_8 (struct snd_i2c_bus*) ;
 int FUNC_9 (struct snd_i2c_device*,unsigned char*,int) ;
 int FUNC_10 (struct snd_i2c_bus*) ;
 int VAR_9 ;
 struct snd_kcontrol_new* VAR_10 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*) ;

int FUNC_13(struct snd_card *VAR_11,
         struct snd_i2c_bus *VAR_12,
         int VAR_13, int VAR_14)
{
 struct snd_i2c_device *VAR_15;
 struct tea6330t *VAR_16;
 struct snd_kcontrol_new *VAR_17;
 unsigned int VAR_18;
 int VAR_19 = -VAR_0;
 u8 VAR_20, VAR_21;
 unsigned char VAR_22[7];

 VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_1);
 if (VAR_16 == ((void*)0))
  return -VAR_0;
 if ((VAR_19 = FUNC_6(VAR_12, "TEA6330T", VAR_2, &VAR_15)) < 0) {
  FUNC_1(VAR_16);
  return VAR_19;
 }
 VAR_16->device = VAR_15;
 VAR_16->bus = VAR_12;
 VAR_16->equalizer = VAR_13;
 VAR_16->fader = VAR_14;
 VAR_15->private_data = VAR_16;
 VAR_15->private_free = VAR_9;

 FUNC_8(VAR_12);


 VAR_16->regs[VAR_6] = 0x3f;
 VAR_16->regs[VAR_4] = VAR_13 ? 0 : VAR_3;

 if (!VAR_16->equalizer) {
  VAR_16->max_bass = 9;
  VAR_16->max_treble = 8;
  VAR_21 = 3 + 4;
  VAR_16->bass = 4;
  VAR_20 = 3 + 4;
  VAR_16->treble = 4;
 } else {
  VAR_16->max_bass = 5;
  VAR_16->max_treble = 0;
  VAR_21 = 7 + 4;
  VAR_16->bass = 4;
  VAR_20 = 3;
  VAR_16->treble = 0;
 }
 VAR_16->mleft = VAR_16->mright = 0x14;
 VAR_16->regs[VAR_5] = VAR_21;
 VAR_16->regs[VAR_7] = VAR_20;


 VAR_22[0] = VAR_8;
 for (VAR_18 = 0; VAR_18 < 6; VAR_18++)
  VAR_22[VAR_18+1] = VAR_16->regs[VAR_18];
 if ((VAR_19 = FUNC_9(VAR_15, VAR_22, 7)) < 0)
  goto __error;

 FUNC_11(VAR_11->mixername, ",TEA6330T");
 if ((VAR_19 = FUNC_3(VAR_11, "TEA6330T")) < 0)
  goto __error;

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_10); VAR_18++) {
  VAR_17 = &VAR_10[VAR_18];
  if (VAR_16->treble == 0 && !FUNC_12(VAR_17->name, "Tone Control - Treble"))
   continue;
  if ((VAR_19 = FUNC_4(VAR_11, FUNC_5(VAR_17, VAR_16))) < 0)
   goto __error;
 }

 FUNC_10(VAR_12);
 return 0;

      __error:
       FUNC_10(VAR_12);
       FUNC_7(VAR_15);
       return VAR_19;
}
