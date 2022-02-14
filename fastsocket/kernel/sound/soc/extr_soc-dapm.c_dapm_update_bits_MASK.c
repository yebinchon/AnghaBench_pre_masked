
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {scalar_t__ id; int power; int shift; int reg; int name; scalar_t__ invert; struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int pop_time; } ;


 int FUNC_0 (int ,char*,int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,unsigned int,unsigned int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_3 (struct snd_soc_codec*,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;
 struct snd_soc_codec *VAR_11 = VAR_6->codec;


 if (VAR_6->reg < 0 || VAR_6->id == VAR_1 ||
  VAR_6->id == VAR_4 ||
  VAR_6->id == VAR_0 ||
  VAR_6->id == VAR_3 ||
  VAR_6->id == VAR_2 ||
  VAR_6->id == VAR_5)
  return 0;

 VAR_8 = VAR_6->power;
 if (VAR_6->invert)
  VAR_8 = (VAR_8 ? 0:1);

 VAR_9 = FUNC_3(VAR_11, VAR_6->reg);
 VAR_10 = (VAR_9 & ~(0x1 << VAR_6->shift)) | (VAR_8 << VAR_6->shift);

 VAR_7 = VAR_9 != VAR_10;
 if (VAR_7) {
  FUNC_0(VAR_11->pop_time, "pop test %s : %s in %d ms\n",
   VAR_6->name, VAR_6->power ? "on" : "off",
   VAR_11->pop_time);
  FUNC_4(VAR_11, VAR_6->reg, VAR_10);
  FUNC_1(VAR_11->pop_time);
 }
 FUNC_2("reg %x old %x new %x change %d\n", VAR_6->reg,
   VAR_9, VAR_10, VAR_7);
 return VAR_7;
}
