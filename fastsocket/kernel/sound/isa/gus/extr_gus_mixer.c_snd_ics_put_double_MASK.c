
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_6__ {unsigned char** ics_regs; } ;
struct snd_gus_card {int reg_lock; scalar_t__ ics_flipped; scalar_t__ ics_flag; TYPE_3__ gf1; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_gus_card*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char,int ) ;
 struct snd_gus_card* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4, struct snd_ctl_elem_value *VAR_5)
{
 struct snd_gus_card *VAR_6 = FUNC_2(VAR_4);
 unsigned long VAR_7;
 int VAR_8 = VAR_4->private_value & 0xff;
 int VAR_9;
 unsigned char VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_10 = VAR_5->value.integer.value[0] & 127;
 VAR_11 = VAR_5->value.integer.value[1] & 127;
 FUNC_3(&VAR_6->reg_lock, VAR_7);
 VAR_12 = VAR_6->gf1.ics_regs[VAR_8][0];
 VAR_13 = VAR_6->gf1.ics_regs[VAR_8][1];
 VAR_9 = VAR_10 != VAR_12 || VAR_11 != VAR_13;
 VAR_6->gf1.ics_regs[VAR_8][0] = VAR_10;
 VAR_6->gf1.ics_regs[VAR_8][1] = VAR_11;
 if (VAR_6->ics_flag && VAR_6->ics_flipped &&
     (VAR_8 == VAR_2 || VAR_8 == VAR_3)) {
  VAR_14 = VAR_10;
  VAR_10 = VAR_11;
  VAR_11 = VAR_14;
 }
 VAR_8 <<= 3;
 FUNC_1(VAR_8 | 0, FUNC_0(VAR_6, VAR_0));
 FUNC_1(1, FUNC_0(VAR_6, VAR_1));
 FUNC_1(VAR_8 | 2, FUNC_0(VAR_6, VAR_0));
 FUNC_1((unsigned char) VAR_10, FUNC_0(VAR_6, VAR_1));
 FUNC_1(VAR_8 | 1, FUNC_0(VAR_6, VAR_0));
 FUNC_1(2, FUNC_0(VAR_6, VAR_1));
 FUNC_1(VAR_8 | 3, FUNC_0(VAR_6, VAR_0));
 FUNC_1((unsigned char) VAR_11, FUNC_0(VAR_6, VAR_1));
 FUNC_4(&VAR_6->reg_lock, VAR_7);
 return VAR_9;
}
