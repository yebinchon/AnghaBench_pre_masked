
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soundscape {TYPE_1__* chip; int wss_res; int io_res; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {int dma1; } ;


 int FUNC_0 (int ) ;
 struct soundscape* FUNC_1 (struct snd_card*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_card *VAR_0)
{
 struct soundscape *VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_1->io_res);
 FUNC_2(VAR_1->wss_res);
 FUNC_0(VAR_1->chip->dma1);
}
