
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ac97 {int dummy; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (unsigned short) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct snd_ac97 *VAR_9, unsigned short VAR_10,
 unsigned short VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;

 FUNC_2(&VAR_6);

 VAR_7 = VAR_4;
 VAR_13 = FUNC_4(VAR_8 + VAR_0);
 VAR_13 = FUNC_0(VAR_10) | FUNC_1(VAR_11);
 FUNC_7(VAR_13, VAR_8 + VAR_0);

 FUNC_5(50);

 VAR_12 = FUNC_4(VAR_8 + VAR_2);
 VAR_12 |= VAR_3;
 FUNC_7(VAR_12, VAR_8 + VAR_2);

 FUNC_6(&VAR_5);

 VAR_13 = FUNC_4(VAR_8 + VAR_0);
 VAR_13 |= VAR_1;
 FUNC_7(VAR_13, VAR_8 + VAR_0);

 FUNC_3(&VAR_6);

}
