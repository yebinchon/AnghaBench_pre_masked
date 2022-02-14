
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ level; } ;
struct TYPE_3__ {scalar_t__ level; } ;
struct iw_spy_data {int spy_number; int* spy_thr_under; TYPE_2__ spy_thr_low; TYPE_1__ spy_thr_high; int * spy_stat; int * spy_address; } ;
struct iw_quality {scalar_t__ level; } ;


 scalar_t__ FUNC_0 (unsigned char*,int ) ;
 struct iw_spy_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct iw_spy_data*,unsigned char*,struct iw_quality*) ;
 int FUNC_3 (int *,struct iw_quality*,int) ;

void FUNC_4(struct net_device * VAR_0,
    unsigned char * VAR_1,
    struct iw_quality * VAR_2)
{
 struct iw_spy_data * VAR_3 = FUNC_1(VAR_0);
 int VAR_4;
 int VAR_5 = -1;


 if (!VAR_3)
  return;


 for (VAR_4 = 0; VAR_4 < VAR_3->spy_number; VAR_4++)
  if (FUNC_0(VAR_1, VAR_3->spy_address[VAR_4])) {
   FUNC_3(&(VAR_3->spy_stat[VAR_4]), VAR_2,
          sizeof(struct iw_quality));
   VAR_5 = VAR_4;
  }





 if (VAR_5 >= 0) {
  if (VAR_3->spy_thr_under[VAR_5]) {
   if (VAR_2->level > VAR_3->spy_thr_high.level) {
    VAR_3->spy_thr_under[VAR_5] = 0;
    FUNC_2(VAR_0, VAR_3,
           VAR_1, VAR_2);
   }
  } else {
   if (VAR_2->level < VAR_3->spy_thr_low.level) {
    VAR_3->spy_thr_under[VAR_5] = 1;
    FUNC_2(VAR_0, VAR_3,
           VAR_1, VAR_2);
   }
  }
 }
}
