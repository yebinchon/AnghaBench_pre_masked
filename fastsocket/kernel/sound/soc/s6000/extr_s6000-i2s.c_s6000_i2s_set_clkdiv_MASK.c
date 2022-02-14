
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct s6000_i2s_dev* private_data; } ;
struct s6000_i2s_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct s6000_i2s_dev*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3, int VAR_4)
{
 struct s6000_i2s_dev *VAR_5 = VAR_2->private_data;

 if (!VAR_4 || (VAR_4 & 1) || VAR_4 > (VAR_1 + 1) * 2)
  return -VAR_0;

 FUNC_1(VAR_5, FUNC_0(VAR_3),
         VAR_1, VAR_4 / 2 - 1);
 return 0;
}
