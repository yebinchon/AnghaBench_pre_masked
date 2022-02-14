
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct xonar_wm87x6 {int* wm8776_regs; } ;
struct snd_kcontrol {unsigned int private_value; struct oxygen* private_data; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct oxygen*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_kcontrol *VAR_5)
{
 struct oxygen *VAR_6 = VAR_5->private_data;
 struct xonar_wm87x6 *VAR_7 = VAR_6->model_data;
 unsigned int VAR_8, VAR_9, VAR_10;
 u8 VAR_11, VAR_12, VAR_13;
 u16 VAR_14, VAR_15;
 bool VAR_16;

 if ((VAR_7->wm8776_regs[VAR_2] & VAR_4) ==
     VAR_3)
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_0;
 if (!(VAR_5->private_value & VAR_10))
  return;

 VAR_8 = VAR_5->private_value & 0xf;
 VAR_11 = (VAR_5->private_value >> 8) & 0xf;
 VAR_12 = (VAR_5->private_value >> 12) & 0xf;
 VAR_14 = (VAR_5->private_value >> 16) & 0xf;
 VAR_13 = (VAR_5->private_value >> 20) & 0xf;
 VAR_9 = (VAR_5->private_value >> 24) & 0x1f;
 VAR_16 = (VAR_5->private_value >> 29) & 0x1;

 if (VAR_16)
  VAR_8 = VAR_12 - (VAR_8 - VAR_11);
 VAR_15 = VAR_7->wm8776_regs[VAR_9];
 VAR_15 &= ~(VAR_14 << VAR_13);
 VAR_15 |= VAR_8 << VAR_13;
 FUNC_0(VAR_6, VAR_9, VAR_15);
}
