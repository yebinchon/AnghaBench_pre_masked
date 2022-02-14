
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mem_alloc; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;
struct TYPE_4__ {int memory; } ;
struct iwffff_wave {int format; TYPE_2__ address; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(void *VAR_1, struct iwffff_wave *VAR_2,
     int VAR_3)
{
 struct snd_gus_card *VAR_4 = VAR_1;

 if (VAR_2->format & VAR_0)
  return 0;
 return FUNC_0(&VAR_4->gf1.mem_alloc, VAR_2->address.memory);
}
