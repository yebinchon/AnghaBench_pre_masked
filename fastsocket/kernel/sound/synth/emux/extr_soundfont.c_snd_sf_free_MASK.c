
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int private_data; int (* sample_reset ) (int ) ;} ;
struct snd_sf_list {TYPE_1__ callback; } ;


 int FUNC_0 (struct snd_sf_list*) ;
 int FUNC_1 (struct snd_sf_list*) ;
 int FUNC_2 (struct snd_sf_list*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_sf_list*) ;

void
FUNC_5(struct snd_sf_list *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_1(VAR_0);
 if (VAR_0->callback.sample_reset)
  VAR_0->callback.sample_reset(VAR_0->callback.private_data);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0);

 FUNC_0(VAR_0);
}
