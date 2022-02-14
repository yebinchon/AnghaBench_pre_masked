
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {struct es1968* private_data; } ;
struct es1968 {int ac97_lock; scalar_t__ io_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned short,scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (struct es1968*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_ac97 *VAR_2, unsigned short VAR_3, unsigned short VAR_4)
{
 struct es1968 *VAR_5 = VAR_2->private_data;
 unsigned long VAR_6;

 FUNC_2(VAR_5);


 FUNC_3(&VAR_5->ac97_lock, VAR_6);
 FUNC_1(VAR_4, VAR_5->io_port + VAR_0);

 FUNC_0(VAR_3, VAR_5->io_port + VAR_1);

 FUNC_4(&VAR_5->ac97_lock, VAR_6);
}
