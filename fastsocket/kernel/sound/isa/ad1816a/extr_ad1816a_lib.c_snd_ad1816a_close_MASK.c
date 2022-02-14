
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1816a {unsigned int mode; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 unsigned int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_ad1816a*,int ,int ,int) ;
 int FUNC_1 (struct snd_ad1816a*,int ,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_ad1816a *VAR_9, unsigned int VAR_10)
{
 unsigned long VAR_11;

 FUNC_2(&VAR_9->lock, VAR_11);

 switch ((VAR_10 &= VAR_4)) {
 case 129:
  FUNC_0(VAR_9, VAR_3,
   VAR_6, 0x00);
  FUNC_1(VAR_9, VAR_2,
   VAR_5, 0x0000);
  break;
 case 130:
  FUNC_0(VAR_9, VAR_3,
   VAR_1, 0x00);
  FUNC_1(VAR_9, VAR_2,
   VAR_0, 0x0000);
  break;
 case 128:
  FUNC_0(VAR_9, VAR_3,
   VAR_8, 0x00);
  FUNC_1(VAR_9, VAR_2,
   VAR_7, 0x0000);
 }
 if (!((VAR_9->mode &= ~VAR_10) & VAR_4))
  VAR_9->mode = 0;

 FUNC_3(&VAR_9->lock, VAR_11);
}
