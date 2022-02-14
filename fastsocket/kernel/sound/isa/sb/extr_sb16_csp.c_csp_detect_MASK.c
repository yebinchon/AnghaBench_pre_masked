
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_sb*) ;
 unsigned char FUNC_1 (struct snd_sb*,int) ;
 int FUNC_2 (struct snd_sb*,int,int) ;
 int FUNC_3 (struct snd_sb*,int) ;
 int FUNC_4 (struct snd_sb*,int,unsigned char) ;
 int FUNC_5 (struct snd_sb*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_sb *VAR_1, int *VAR_2)
{
 unsigned char VAR_3, VAR_4;
 unsigned long VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_6(&VAR_1->reg_lock, VAR_5);

 FUNC_2(VAR_1, 0x00, 0x00);
 FUNC_3(VAR_1, 0xfc);

 VAR_3 = FUNC_1(VAR_1, 0x83);
 FUNC_4(VAR_1, 0x83, ~VAR_3);
 VAR_4 = FUNC_1(VAR_1, 0x83);
 if (VAR_4 != (VAR_3 ^ 0xff))
  goto __fail;

 FUNC_4(VAR_1, 0x83, VAR_3);
 VAR_4 = FUNC_1(VAR_1, 0x83);
 if (VAR_4 != VAR_3)
  goto __fail;

 FUNC_3(VAR_1, 0x00);

 *VAR_2 = FUNC_0(VAR_1);
 FUNC_5(VAR_1);
 if (*VAR_2 >= 0x10 && *VAR_2 <= 0x1f)
  VAR_6 = 0;

      __fail:
 FUNC_7(&VAR_1->reg_lock, VAR_5);
 return VAR_6;
}
