
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via82xx {int dummy; } ;
struct snd_ac97 {int num; struct via82xx* private_data; } ;


 unsigned short VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_0 (struct via82xx*,int ) ;
 int FUNC_1 (struct via82xx*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_5,
        unsigned short VAR_6,
        unsigned short VAR_7)
{
 struct via82xx *VAR_8 = VAR_5->private_data;
 unsigned int VAR_9;

 VAR_9 = !VAR_5->num ? VAR_1 : VAR_2;
 VAR_9 <<= VAR_3;
 VAR_9 |= VAR_6 << VAR_0;
 VAR_9 |= VAR_7 << VAR_4;
 FUNC_1(VAR_8, VAR_9);
 FUNC_0(VAR_8, VAR_5->num);
}
