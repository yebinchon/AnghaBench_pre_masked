
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int control_register; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_rme9652*,int,int) ;

__attribute__((used)) static void FUNC_1 (struct snd_rme9652 *VAR_1)
{


 VAR_1->control_register |= VAR_0;

 FUNC_0 (VAR_1, 4, 0x40);
 FUNC_0 (VAR_1, 17, 0x13);
 FUNC_0 (VAR_1, 6, 0x02);
}
