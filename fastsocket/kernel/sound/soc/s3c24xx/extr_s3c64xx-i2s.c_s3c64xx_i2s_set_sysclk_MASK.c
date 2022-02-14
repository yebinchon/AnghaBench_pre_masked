
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct s3c_i2sv2_info {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct s3c_i2sv2_info* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_3,
      int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct s3c_i2sv2_info *VAR_7 = FUNC_1(VAR_3);
 u32 VAR_8 = FUNC_0(VAR_7->regs + VAR_1);

 switch (VAR_4) {
 case 128:
  VAR_8 &= ~VAR_2;
  break;

 case 129:
  VAR_8 |= VAR_2;
  break;

 default:
  return -VAR_0;
 }

 FUNC_2(VAR_8, VAR_7->regs + VAR_1);

 return 0;
}
