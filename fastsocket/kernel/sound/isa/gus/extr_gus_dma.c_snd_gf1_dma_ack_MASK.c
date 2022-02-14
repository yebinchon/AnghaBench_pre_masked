
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int FUNC_1 (struct snd_gus_card*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_gus_card * VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->reg_lock, VAR_2);
 FUNC_1(VAR_1, VAR_0, 0x00);
 FUNC_0(VAR_1, VAR_0);
 FUNC_3(&VAR_1->reg_lock, VAR_2);
}
