
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int calibrate_mute; int* image; int hardware; int reg_lock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct snd_wss*,size_t,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_wss *VAR_18, int VAR_19)
{
 unsigned long VAR_20;

 VAR_19 = VAR_19 ? 0x80 : 0;
 FUNC_1(&VAR_18->reg_lock, VAR_20);
 if (VAR_18->calibrate_mute == VAR_19) {
  FUNC_2(&VAR_18->reg_lock, VAR_20);
  return;
 }
 if (!VAR_19) {
  FUNC_0(VAR_18, VAR_4,
        VAR_18->image[VAR_4]);
  FUNC_0(VAR_18, VAR_12,
        VAR_18->image[VAR_12]);
  FUNC_0(VAR_18, VAR_10,
        VAR_18->image[VAR_10]);
 } else {
  FUNC_0(VAR_18, VAR_4,
        0);
  FUNC_0(VAR_18, VAR_12,
        0);
  FUNC_0(VAR_18, VAR_10,
        0xfd);
 }

 FUNC_0(VAR_18, VAR_0,
       VAR_19 | VAR_18->image[VAR_0]);
 FUNC_0(VAR_18, VAR_1,
       VAR_19 | VAR_18->image[VAR_1]);
 FUNC_0(VAR_18, VAR_2,
       VAR_19 | VAR_18->image[VAR_2]);
 FUNC_0(VAR_18, VAR_3,
       VAR_19 | VAR_18->image[VAR_3]);
 FUNC_0(VAR_18, VAR_7,
       VAR_19 | VAR_18->image[VAR_7]);
 FUNC_0(VAR_18, VAR_15,
       VAR_19 | VAR_18->image[VAR_15]);
 if (!(VAR_18->hardware & VAR_16)) {
  FUNC_0(VAR_18, VAR_5,
        VAR_19 | VAR_18->image[VAR_5]);
  FUNC_0(VAR_18, VAR_13,
        VAR_19 | VAR_18->image[VAR_13]);
  FUNC_0(VAR_18, VAR_11,
        VAR_19 ? 0xc0 : VAR_18->image[VAR_11]);
 }
 if (VAR_18->hardware == VAR_17) {
  FUNC_0(VAR_18, VAR_6,
        VAR_19 | VAR_18->image[VAR_6]);
  FUNC_0(VAR_18, VAR_14,
        VAR_19 | VAR_18->image[VAR_14]);
  FUNC_0(VAR_18, VAR_8,
        VAR_19 | VAR_18->image[VAR_8]);
  FUNC_0(VAR_18, VAR_9,
        VAR_19 | VAR_18->image[VAR_9]);
 }
 VAR_18->calibrate_mute = VAR_19;
 FUNC_2(&VAR_18->reg_lock, VAR_20);
}
