
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mem_alloc; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;
struct TYPE_4__ {int memory; } ;
struct simple_instrument {TYPE_2__ address; } ;


 int FUNC_0 (int *,int ) ;

int FUNC_1(void *VAR_0, struct simple_instrument *VAR_1,
            int VAR_2)
{
 struct snd_gus_card *VAR_3 = VAR_0;

 return FUNC_0(&VAR_3->gf1.mem_alloc, VAR_1->address.memory);
}
