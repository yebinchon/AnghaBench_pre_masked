
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct envy24_delta_ak4524_codec {scalar_t__ dir; size_t num; int info; TYPE_1__* parent; } ;
struct TYPE_2__ {int ** adc; int ** dac; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct envy24_delta_ak4524_codec *VAR_3 = VAR_2;
 if (VAR_3 == ((void*)0))
  return;




 if (VAR_3->dir == VAR_1) {
  if (VAR_3->parent->dac[VAR_3->num] != ((void*)0))
   FUNC_2(VAR_3->info);
 }
 else {
  if (VAR_3->parent->adc[VAR_3->num] != ((void*)0))
   FUNC_2(VAR_3->info);
 }

 FUNC_1(VAR_2, VAR_0);
}
