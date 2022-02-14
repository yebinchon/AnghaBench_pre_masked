
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int number; } ;


 int VAR_0 ;







 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_2, struct snd_card *VAR_3, int VAR_4)
{
 int VAR_5;

 switch (VAR_2) {
 case 129:
 case 128:
  VAR_5 = VAR_2;
  break;
 case 134:
  if (FUNC_1(!VAR_3))
   return -VAR_0;
  VAR_5 = FUNC_0(VAR_3->number, VAR_2);
  break;
 case 133:
 case 130:
 case 131:
 case 132:
  if (FUNC_1(!VAR_3))
   return -VAR_0;
  VAR_5 = FUNC_0(VAR_3->number, VAR_2 + VAR_4);
  break;
 default:
  return -VAR_0;
 }
 if (FUNC_1(VAR_5 < 0 || VAR_5 >= VAR_1))
  return -VAR_0;
 return VAR_5;
}
