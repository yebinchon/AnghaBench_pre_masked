
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sound_lowlev_timer {scalar_t__ priority; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_1 (int ,char*) ;
 struct sound_lowlev_timer* VAR_3 ;

void FUNC_2(struct sound_lowlev_timer *VAR_4, char *VAR_5)
{
 int VAR_6;

 if (VAR_0)
 {
  if (VAR_4->priority <= VAR_3->priority)
   return;
  VAR_3 = VAR_4;
  return;
 }
 VAR_0 = 1;
 VAR_3 = VAR_4;

 VAR_6 = FUNC_0();
 if (VAR_6 == -1)
  VAR_6 = 0;
 FUNC_1(VAR_1.info.name, VAR_5);
 VAR_2[VAR_6] = &VAR_1;
}
