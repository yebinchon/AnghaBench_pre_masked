
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int default_voice_address; scalar_t__ enh_mode; scalar_t__ memory; TYPE_1__* syn_voices; } ;
struct snd_gus_card {int reg_lock; TYPE_2__ gf1; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int FUNC_1 (struct snd_gus_card*,unsigned short,int ) ;
 int FUNC_2 (struct snd_gus_card*,int ) ;
 int FUNC_3 (struct snd_gus_card*,unsigned short) ;
 int FUNC_4 (struct snd_gus_card*,int ,int) ;
 int FUNC_5 (struct snd_gus_card*,int ,int) ;
 int FUNC_6 (struct snd_gus_card*,int ,unsigned int,unsigned short) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct snd_gus_card * VAR_18, unsigned short VAR_19,
     unsigned short VAR_20)
{
 unsigned long VAR_21;
 unsigned int VAR_22;
 unsigned short VAR_23, VAR_24;

 VAR_22 = VAR_18->gf1.default_voice_address << 4;
 for (VAR_23 = VAR_19; VAR_23 <= VAR_20; VAR_23++) {




  FUNC_7(&VAR_18->reg_lock, VAR_21);
  FUNC_3(VAR_18, VAR_23);
  FUNC_0(VAR_18, VAR_4);
  FUNC_0(VAR_18, VAR_7);
  if (VAR_18->gf1.enh_mode)
   FUNC_5(VAR_18, VAR_5, VAR_18->gf1.memory ? 0x02 : 0x82);
  VAR_24 = FUNC_2(VAR_18, VAR_4) & 0x04;
  FUNC_4(VAR_18, VAR_13, 0x400);
  FUNC_6(VAR_18, VAR_2, VAR_22, VAR_24);
  FUNC_6(VAR_18, VAR_1, VAR_22, VAR_24);
  FUNC_5(VAR_18, VAR_10, 0);
  FUNC_5(VAR_18, VAR_8, 0);
  FUNC_5(VAR_18, VAR_9, 0);
  FUNC_4(VAR_18, VAR_14, 0);
  FUNC_6(VAR_18, VAR_0, VAR_22, VAR_24);
  FUNC_5(VAR_18, VAR_6, 7);
  if (VAR_18->gf1.enh_mode) {
   FUNC_5(VAR_18, VAR_3, 0);
   FUNC_4(VAR_18, VAR_11, 0);
   FUNC_4(VAR_18, VAR_12, 0);
  }
  FUNC_8(&VAR_18->reg_lock, VAR_21);




 }
}
