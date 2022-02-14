
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {unsigned int control_register; int period_bytes; int hw_offsetmask; int max_jitter; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct snd_rme9652 *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_2->control_register & VAR_1;
 VAR_2->period_bytes = 1 << ((FUNC_0(VAR_3) + 8));
 VAR_2->hw_offsetmask =
  (VAR_2->period_bytes * 2 - 1) & VAR_0;
 VAR_2->max_jitter = 80;
}
