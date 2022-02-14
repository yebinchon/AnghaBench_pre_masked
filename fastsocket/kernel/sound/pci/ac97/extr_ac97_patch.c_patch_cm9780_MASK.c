
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int ext_id; int * rates; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_5)
{
 unsigned short VAR_6;

 VAR_5->build_ops = &VAR_4;


 if (VAR_5->ext_id & VAR_1) {
  VAR_5->rates[VAR_2] = VAR_3;
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  VAR_6 |= 0x1;
  FUNC_1(VAR_5, VAR_0, VAR_6);
 }

 return 0;
}
