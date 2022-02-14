
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct snd_mask {int* bits; } ;


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
 int VAR_18 ;
 int FUNC_0 (struct snd_mask*,int ) ;
 int FUNC_1 (struct snd_mask*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_mask *VAR_19, int VAR_20)
{
 struct snd_mask VAR_21 = *VAR_19;
 u64 VAR_22 = (VAR_17 | VAR_8 |
         VAR_10 | VAR_1 |
         VAR_9 | VAR_0 |
         VAR_14 | VAR_5 |
         VAR_13 | VAR_4 |
         VAR_12 | VAR_3 |
         VAR_11 | VAR_2 |
         VAR_16 | VAR_7 |
         VAR_15 | VAR_6);
 FUNC_0(&VAR_21, VAR_18);

 if (VAR_21.bits[0] & (u32)VAR_22)
  VAR_21.bits[0] |= (u32)VAR_22;
 if (VAR_21.bits[1] & (u32)(VAR_22 >> 32))
  VAR_21.bits[1] |= (u32)(VAR_22 >> 32);
 return FUNC_1(&VAR_21, VAR_20);
}
