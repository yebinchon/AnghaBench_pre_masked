
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u32 ;
struct snd_au1000 {int ac97_lock; TYPE_1__* ac97_ioport; } ;
struct TYPE_2__ {long config; } ;


 long VAR_0 ;
 long volatile VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct snd_au1000 *VAR_2, long VAR_3)
{
 u32 volatile VAR_4;

 FUNC_0(&VAR_2->ac97_lock);
 VAR_4 = VAR_2->ac97_ioport->config;
 VAR_4 = VAR_4 & ~VAR_1;
 VAR_4 |= (VAR_3 << VAR_0);
 VAR_2->ac97_ioport->config = VAR_4;
 FUNC_1(&VAR_2->ac97_lock);
}
