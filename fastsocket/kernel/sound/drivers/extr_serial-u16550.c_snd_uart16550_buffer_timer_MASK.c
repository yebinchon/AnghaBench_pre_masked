
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {int open_lock; } ;


 int FUNC_0 (struct snd_uart16550*) ;
 int FUNC_1 (struct snd_uart16550*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 unsigned long VAR_1;
 struct snd_uart16550 *VAR_2;

 VAR_2 = (struct snd_uart16550 *)VAR_0;
 FUNC_2(&VAR_2->open_lock, VAR_1);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_2->open_lock, VAR_1);
}
