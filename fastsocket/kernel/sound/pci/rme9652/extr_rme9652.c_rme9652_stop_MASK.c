
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_rme9652*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct snd_rme9652 *VAR_3)
{
 VAR_3->control_register &= ~(VAR_2 | VAR_0);
 FUNC_0(VAR_3, VAR_1, VAR_3->control_register);
}
