
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {struct s6000_i2s_dev* private_data; } ;
struct s6000_i2s_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 unsigned int VAR_10 ;
 unsigned int VAR_11 ;


 int FUNC_1 (struct s6000_i2s_dev*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_12,
       unsigned int VAR_13)
{
 struct s6000_i2s_dev *VAR_14 = VAR_12->private_data;
 u32 VAR_15;

 switch (VAR_13 & VAR_11) {
 case 133:
  VAR_15 = VAR_5 | VAR_8;
  break;
 case 131:
  VAR_15 = VAR_6 | VAR_8;
  break;
 case 132:
  VAR_15 = VAR_5 | VAR_9;
  break;
 case 130:
  VAR_15 = VAR_6 | VAR_9;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_13 & VAR_10) {
 case 128:
  VAR_15 |= VAR_2;
  break;
 case 129:
  VAR_15 |= VAR_3;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_14, FUNC_0(0),
         VAR_1 | VAR_7 | VAR_4, VAR_15);
 FUNC_1(VAR_14, FUNC_0(1),
         VAR_1 | VAR_7 | VAR_4, VAR_15);

 return 0;
}
