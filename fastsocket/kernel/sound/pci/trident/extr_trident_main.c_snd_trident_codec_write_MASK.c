
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {scalar_t__ device; int reg_lock; } ;
struct snd_ac97 {int num; struct snd_trident* private_data; } ;


 unsigned short VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct snd_trident*,unsigned int) ;
 unsigned short FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_ac97 *VAR_11, unsigned short VAR_12,
        unsigned short VAR_13)
{
 unsigned int VAR_14, VAR_15;
 unsigned short VAR_16 = 0xffff;
 unsigned long VAR_17;
 struct snd_trident *VAR_18 = VAR_11->private_data;

 VAR_15 = ((unsigned long) VAR_13) << 16;

 FUNC_3(&VAR_18->reg_lock, VAR_17);
 if (VAR_18->device == VAR_8) {
  VAR_14 = VAR_1;


  do {
   if ((FUNC_1(FUNC_0(VAR_18, VAR_14)) & VAR_0) == 0)
    break;
  } while (--VAR_16);

  VAR_15 |= (VAR_0 | (VAR_12 & 0x000000ff));
 } else if (VAR_18->device == VAR_9) {
  VAR_14 = VAR_3;


  do {
   if ((FUNC_1(FUNC_0(VAR_18, VAR_14)) & VAR_2) == 0)
    break;
  } while (--VAR_16);

  VAR_15 |= (VAR_2 | (VAR_11->num << 8) | (VAR_12 & 0x000000ff));
 } else if (VAR_18->device == VAR_10) {
  VAR_14 = VAR_7;


  do {
   if ((FUNC_1(FUNC_0(VAR_18, VAR_14)) & (VAR_5)) == 0)
    break;
  } while (--VAR_16);

  VAR_15 |= VAR_5 | VAR_4 | (VAR_12 & 0x000000ff);
  if (VAR_11->num == 1)
   VAR_15 |= VAR_6;
 } else {
  VAR_14 = 0;
  VAR_16 = 0;
 }

 if (VAR_16 == 0) {
  FUNC_4(&VAR_18->reg_lock, VAR_17);
  return;
 }
 FUNC_2(VAR_15, FUNC_0(VAR_18, VAR_14));
 FUNC_4(&VAR_18->reg_lock, VAR_17);
}
