
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {scalar_t__ port; scalar_t__ audigy; } ;


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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int,int ) ;

int FUNC_2(struct snd_emu10k1 *VAR_31)
{
 int VAR_32;

 FUNC_0(0, VAR_31->port + VAR_19);




 for (VAR_32 = 0; VAR_32 < VAR_22; VAR_32++)
  FUNC_1(VAR_31, VAR_10, VAR_32, 0);
 for (VAR_32 = 0; VAR_32 < VAR_22; VAR_32++) {
  FUNC_1(VAR_31, VAR_30, VAR_32, 0);
  FUNC_1(VAR_31, VAR_8, VAR_32, 0);
  FUNC_1(VAR_31, VAR_24, VAR_32, 0);
  FUNC_1(VAR_31, VAR_7, VAR_32, 0);
 }


 FUNC_1(VAR_31, VAR_21, 0, 0);
 FUNC_1(VAR_31, VAR_20, 0, 0);
 FUNC_1(VAR_31, VAR_13, 0, 0);
 FUNC_1(VAR_31, VAR_12, 0, 0);
 FUNC_1(VAR_31, VAR_14, 0, 0);
 FUNC_1(VAR_31, VAR_1, 0, VAR_2);
 FUNC_1(VAR_31, VAR_0, 0, 0);
 FUNC_1(VAR_31, VAR_28, 0, VAR_29);
 FUNC_1(VAR_31, VAR_27, 0, 0);
 if (VAR_31->audigy)
  FUNC_1(VAR_31, VAR_3, 0, VAR_4);
 else
  FUNC_1(VAR_31, VAR_9, 0, VAR_11);


 FUNC_1(VAR_31, VAR_6, 0, 0);
 FUNC_1(VAR_31, VAR_5, 0, 0);
 FUNC_1(VAR_31, VAR_26, 0, 0);
 FUNC_1(VAR_31, VAR_25, 0, 0);


 FUNC_0(VAR_16 | VAR_17 | VAR_18, VAR_31->port + VAR_15);
 FUNC_1(VAR_31, VAR_23, 0, 0);

 return 0;
}
