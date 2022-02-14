
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_msnd {int* left_levels; int* right_levels; scalar_t__ type; scalar_t__ SMA; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct snd_msnd*,int ) ;
 int FUNC_1 (struct snd_msnd*,int ,int ,int ) ;
 int FUNC_2 (int const,int ,int ) ;
 int FUNC_3 (int const,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct snd_msnd *VAR_18, int VAR_19, int VAR_20, int VAR_21)
{
 int VAR_22, VAR_23;
 int VAR_24, VAR_25;
 int VAR_26 = 0;

 if (VAR_19 >= VAR_5)
  return -VAR_0;

 VAR_22 = VAR_20 * 0xff / 100;
 VAR_24 = VAR_20 * 0xffff / 100;

 VAR_23 = VAR_21 * 0xff / 100;
 VAR_25 = VAR_21 * 0xffff / 100;

 VAR_18->left_levels[VAR_19] = VAR_24;
 VAR_18->right_levels[VAR_19] = VAR_25;

 switch (VAR_19) {

 case 132:

  FUNC_4(VAR_22, VAR_18->SMA + VAR_6);
  FUNC_4(VAR_23, VAR_18->SMA + VAR_7);
  if (FUNC_1(VAR_18, 0, 0, VAR_2) == 0)
   FUNC_0(VAR_18, VAR_4);
  break;
 case 131:
  if (VAR_18->type == VAR_13)
   return -VAR_0;

  FUNC_4(VAR_22, VAR_18->SMA + VAR_8);
  FUNC_4(VAR_23, VAR_18->SMA + VAR_9);
  if (FUNC_1(VAR_18, 0, 0, VAR_3) == 0)
   FUNC_0(VAR_18, VAR_4);
  break;
 case 128:
  FUNC_5(VAR_24, VAR_18->SMA + VAR_10);
  FUNC_5(VAR_25, VAR_18->SMA + VAR_11);


 case 134:




 case 129:
 case 130:
 case 133:

  VAR_26 = 1;
  break;

 default:
  return -VAR_0;
 }

 if (VAR_26) {

  FUNC_3(130, VAR_17);
  FUNC_3(133, VAR_15);
  if (VAR_18->type == VAR_14)
   FUNC_3(129, VAR_16);
  FUNC_2(134, VAR_12, VAR_1);
 }

 return 0;
}
