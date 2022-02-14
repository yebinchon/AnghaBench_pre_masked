
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_msnd {unsigned int recsrc; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct snd_msnd*,int ) ;
 int FUNC_1 (struct snd_msnd*,int ,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct snd_msnd *VAR_8, int VAR_9)
{
 unsigned VAR_10;
 int VAR_11;
 unsigned char VAR_12;

 switch (VAR_9) {
 case 0:
  VAR_10 = VAR_6;
  VAR_12 = VAR_1;
  break;
 case 1:
  VAR_10 = VAR_7;
  VAR_12 = VAR_3;
  break;
 case 2:
  VAR_10 = VAR_5;
  VAR_12 = VAR_2;
  break;
 default:
  return -VAR_0;
 }
 VAR_11 = VAR_10 != VAR_8->recsrc;
 if (VAR_11) {
  VAR_11 = 0;
  if (!FUNC_1(VAR_8, 0, 0, VAR_12))
   if (!FUNC_0(VAR_8, VAR_4)) {
    VAR_8->recsrc = VAR_10;
    VAR_11 = 1;
   }
 }
 return VAR_11;
}
