
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int sticks; } ;
struct snd_ad1816a {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short FUNC_0 (struct snd_ad1816a*,int ) ;
 int FUNC_1 (struct snd_ad1816a*,int ,int) ;
 int FUNC_2 (struct snd_ad1816a*,int ,unsigned short,int) ;
 struct snd_ad1816a* FUNC_3 (struct snd_timer*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_timer *VAR_3)
{
 unsigned short VAR_4;
 unsigned long VAR_5;
 struct snd_ad1816a *VAR_6 = FUNC_3(VAR_3);
 FUNC_4(&VAR_6->lock, VAR_5);
 VAR_4 = FUNC_0(VAR_6, VAR_0);

 if (!(VAR_4 & VAR_2)) {
  FUNC_1(VAR_6, VAR_1,
   VAR_3->sticks & 0xffff);

  FUNC_2(VAR_6, VAR_0,
   VAR_2, 0xffff);
 }
 FUNC_5(&VAR_6->lock, VAR_5);
 return 0;
}
