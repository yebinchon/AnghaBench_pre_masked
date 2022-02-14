
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int lock; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;

void FUNC_6(u32 VAR_6)
{
 int VAR_7;

 if (VAR_2)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  FUNC_0(&VAR_1[VAR_7].list);
  FUNC_5(&VAR_1[VAR_7].lock);
 }

 if (FUNC_1() != 0) {
  FUNC_2("DMA-API: error creating debugfs entries - disabling\n");
  VAR_2 = 1;

  return;
 }

 if (VAR_5)
  VAR_6 = VAR_5;

 if (FUNC_4(VAR_6) != 0) {
  FUNC_2("DMA-API: debugging out of memory error - disabled\n");
  VAR_2 = 1;

  return;
 }

 VAR_3 = VAR_4;

 FUNC_3("DMA-API: debugging enabled by kernel config\n");
}
