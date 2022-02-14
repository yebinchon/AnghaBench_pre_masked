
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int flags; int scaps; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_ac97 * VAR_13)
{

 VAR_13->build_ops = &VAR_12;

 VAR_13->flags |= VAR_5 | VAR_11 | VAR_4 |
  VAR_3 | VAR_8 | VAR_2 | VAR_7 |
  VAR_6;
     VAR_13->scaps &= ~VAR_10;

 FUNC_0(VAR_13, VAR_0, 0xda00);
 FUNC_0(VAR_13, VAR_1, 0x3810);
 FUNC_0(VAR_13, VAR_9, 0x0);

 return 0;
}
