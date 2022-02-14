
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int ext_id; int flags; int * build_ops; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (struct snd_ac97*) ;
 int VAR_8 ;
 unsigned short FUNC_2 (struct snd_ac97*,int ) ;
 int FUNC_3 (struct snd_ac97*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_4(struct snd_ac97 * VAR_9)
{
 unsigned short VAR_10;

 FUNC_1(VAR_9);
 VAR_9->build_ops = &VAR_8;
 VAR_10 = FUNC_2(VAR_9, VAR_4);



 FUNC_3(VAR_9, VAR_4, VAR_10 |
        VAR_2 |
        VAR_1 |
        VAR_3 |
        VAR_0);
 VAR_9->flags |= VAR_7;


 FUNC_0(VAR_9);


 VAR_9->ext_id = (VAR_9->ext_id & ~VAR_6) | VAR_5;
 return 0;
}
