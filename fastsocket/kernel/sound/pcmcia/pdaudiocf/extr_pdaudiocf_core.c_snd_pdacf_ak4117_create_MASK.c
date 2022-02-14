
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_pdacf {TYPE_1__* ak4117; int card; } ;
struct TYPE_3__ {int (* change_callback ) (TYPE_1__*,int ,int ) ;struct snd_pdacf* change_callback_private; } ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct snd_pdacf*,int ) ;
 int FUNC_1 (struct snd_pdacf*,int ,int) ;
 int FUNC_2 (struct snd_pdacf*,int ) ;
 int FUNC_3 (int ,int ,int ,unsigned char*,struct snd_pdacf*,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

int FUNC_5(struct snd_pdacf *VAR_23)
{
 int VAR_24;
 u16 VAR_25;




 static unsigned char VAR_26[5] = {
  128 | 137,
  140 | 130 | 129,
  138 | 139 | 136,
  0xff,
  134 | 135 | 132 | 133 | 131,
 };

 VAR_24 = FUNC_2(VAR_23, 0);
 if (VAR_24 < 0)
  return VAR_24;
 VAR_24 = FUNC_3(VAR_23->card, VAR_21, VAR_22, VAR_26, VAR_23, &VAR_23->ak4117);
 if (VAR_24 < 0)
  return VAR_24;

 VAR_25 = FUNC_0(VAR_23, VAR_19);

 VAR_25 &= ~(VAR_8|VAR_20);




 FUNC_1(VAR_23, VAR_19, VAR_25);


 VAR_25 = FUNC_0(VAR_23, VAR_18);
 VAR_25 &= ~(VAR_4 | VAR_5);
 VAR_25 &= ~(VAR_16|VAR_3);
 VAR_25 |= VAR_6 | VAR_7;
 FUNC_1(VAR_23, VAR_18, VAR_25);


 VAR_25 = FUNC_0(VAR_23, VAR_17);
 VAR_25 &= ~(VAR_11 | VAR_12);
 VAR_25 &= ~(VAR_1 | VAR_14 | VAR_15);
 VAR_25 |= VAR_2 | VAR_9;
 VAR_25 |= VAR_13 | VAR_10;
 FUNC_1(VAR_23, VAR_17, VAR_25);

 VAR_23->ak4117->change_callback_private = VAR_23;
 VAR_23->ak4117->change_callback = FUNC_4;


 FUNC_4(VAR_23->ak4117, VAR_0, 0);

 return 0;
}
