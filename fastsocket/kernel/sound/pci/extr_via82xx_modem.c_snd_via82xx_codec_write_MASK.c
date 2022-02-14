
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via82xx_modem {int dummy; } ;
struct snd_ac97 {int num; struct via82xx_modem* private_data; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct via82xx_modem*,int ) ;
 unsigned short VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned short VAR_6 ;
 int FUNC_1 (unsigned short,int ) ;
 int FUNC_2 (struct via82xx_modem*,int ) ;
 int FUNC_3 (struct via82xx_modem*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_7,
        unsigned short VAR_8,
        unsigned short VAR_9)
{
 struct via82xx_modem *VAR_10 = VAR_7->private_data;
 unsigned int VAR_11;
 if(VAR_8 == VAR_0) {
  FUNC_1(VAR_9, FUNC_0(VAR_10, VAR_1));
  return;
 }
 VAR_11 = !VAR_7->num ? VAR_3 : VAR_4;
 VAR_11 <<= VAR_5;
 VAR_11 |= VAR_8 << VAR_2;
 VAR_11 |= VAR_9 << VAR_6;
 FUNC_3(VAR_10, VAR_11);
 FUNC_2(VAR_10, VAR_7->num);
}
